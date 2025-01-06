%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void yyerror(const char *s);
int yywrap(void);

FILE *yyin;
int yylineno;

int yylex(void);
%}

%start program

%union {
  int integer;
  float floating;
  char charecter;
  char* str;
  bool boolean;
}

%token <character> LETTER DIGIT UNDERLINE SIGN CHAR 
%token <integer> NUMBER INT UNSIGNED
%token <floating> FLOAT
%token <str> STRING IDENTIFIER RELATION
%token <boolean> BOOL
%token INT_T UNSIGNED_T FLOAT_T CHAR_T STRING_T USERDEF ARRAY
%token STRUCT COUT CIN IF ELSE FOR WHILE DO BREAK RETURN


%left '+' '-'
%left '*' '/'

%%

program:
    '{' declLIST cmpdstmt '}' 
    | '{''\n' declLIST cmpdstmt '\n''}'
    ;

declLIST:
    
    | declLIST declaration ';'
    ;

declaration:
    type IDENTIFIER ';'
    ;

type:
    INT_T | UNSIGNED_T | FLOAT_T | CHAR_T | STRING_T | USERDEF | array
    ;

array:
    type '[' NUMBER ']'
    ;

cmpdstmt:
    '{' stmtLIST '}'
    ;
 
stmtLIST:
    
    | stmt '{' stmtLIST '}'
    ;

stmt:
    SIMPLEstmt
    | STRUCTstmt
    ;

SIMPLEstmt:
    assignment
    | iostmt
    ;
   
iostmt:
    CIN IDENTIFIER ';'
    | COUT IDENTIFIER ';'
    | CIN STRING ';'
    | COUT STRING ';'
    ;

STRUCTstmt:
    cmpdstmt
    | ifstmt
    | forstmt
    | whilestmt
    | dostmt
    | breakstmt ';'
    | returnstmt ';'
    ;

assignment:
    IDENTIFIER '=' expression ';'
    ;

expression:
    expression operator term
    | term
    ;

term:
    term operator factor
    | factor
    ;

operator:
    '+' 
    | '-'
    | '/' 
    | '*' 
    | '=' 
    | '|' 
    | '&'
    ;

factor:
    '(' expression ')'
    | IDENTIFIER
    | NUMBER
    ;

ifstmt:
    IF condition stmtLIST
    | IF condition stmtLIST elsestmt
    ;

elsestmt:

    | ELSE stmtLIST
    ;

forstmt:
    FOR '(' assignment ';' condition ';' assignment ')' ';'
    | FOR '(' assignment ';' condition ';' assignment ')' stmtLIST
    ;

whilestmt:
    WHILE '(' condition ')' ';'
    | WHILE '(' condition ')' stmtLIST
    ;

dostmt:
    DO stmt WHILE '(' condition ')' ';'
    | DO stmtLIST WHILE '(' condition ')' ';'
    ;

breakstmt:
    BREAK
    ;

returnstmt:
    RETURN NUMBER
    | RETURN IDENTIFIER
    ;

condition:
    expression RELATION expression
    ;

%%

#define MAX_IDENTIFIER_LENGTH 100

enum { 
  PLUS = '+', 
  MINUS = '-', 
  MULT = '*', 
  DIV = '/', 
  EQ = '=', 
  LPAREN = '(', 
  RPAREN = ')', 
  LBRACE = '{', 
  RBRACE = '}', 
  SEMICOLON = ';', 
  COLON = ':',
  COMMA = ',', 
  LBRACKET = '[', 
  RBRACKET = ']'
};

int yylex(void) { 
  int c; 
  while ((c = fgetc(yyin)) != EOF) { 
    if (isspace(c)) { 
      if (c == '\n') { 
        yylineno++; 
      } 
      continue; 
    }
    if (isalpha(c)) { 
      char identifier[MAX_IDENTIFIER_LENGTH]; 
      int i = 0; 
      identifier[i++] = c; 
      while (isalnum(c = fgetc(yyin)) || c == '_') { 
        if (i < MAX_IDENTIFIER_LENGTH - 1) { 
          identifier[i++] = c; 
        }
      } 
      ungetc(c, yyin); 
      identifier[i] = '\0'; 
      if (strcmp(identifier, "int") == 0) 
        return INT_T; 
      if (strcmp(identifier, "unsigned") == 0) 
        return UNSIGNED_T; 
      if (strcmp(identifier, "float") == 0) 
        return FLOAT_T; 
      if (strcmp(identifier, "char") == 0)
        return CHAR_T; 
      if (strcmp(identifier, "string") == 0) 
        return STRING_T; 
      if (strcmp(identifier, "cin") == 0) 
        return CIN; 
      if (strcmp(identifier, "cout") == 0) 
        return COUT; 
      if (strcmp(identifier, "if") == 0) 
        return IF; 
      if (strcmp(identifier, "else") == 0) 
        return ELSE; 
      if (strcmp(identifier, "for") == 0) 
        return FOR; 
      if (strcmp(identifier, "while") == 0) 
        return WHILE; 
      if (strcmp(identifier, "do") == 0) 
        return DO; 
      if (strcmp(identifier, "break") == 0) 
        return BREAK; 
      if (strcmp(identifier, "return") == 0) 
        return RETURN; 
      if (strcmp(identifier, "<<") == 0) 
        return COUT;
      if (strcmp(identifier, ">>") == 0) 
        return CIN;
      if (strcmp(identifier, "<=") == 0) 
        return RELATION;
      if (strcmp(identifier, ">=") == 0) 
        return RELATION;
      if (strcmp(identifier, "==") == 0) 
        return RELATION;
      
      yylval.str = strdup(identifier); 
      return IDENTIFIER; 
   } 
   if (isdigit(c)) { 
     ungetc(c, yyin); 
     fscanf(yyin, "%d", &yylval.integer); 
     return NUMBER; 
   } 
   
   switch (c) { 
     case '+': return PLUS; 
     case '-': return MINUS; 
     case '*': return MULT; 
     case '/': return DIV; 
     case '=': return EQ; 
     case '(': return LPAREN; 
     case ')': return RPAREN; 
     case '{': return LBRACE; 
     case '}': return RBRACE; 
     case ';': return SEMICOLON; 
     case ':': return COLON;
     case ',': return COMMA; 
     case '[': return LBRACKET; 
     case ']': return RBRACKET; 
     case '\"': { 
       char str[MAX_IDENTIFIER_LENGTH]; 
       int i = 0; 
       while ((c = fgetc(yyin)) != '\"' && c != EOF) { 
         if (i < MAX_IDENTIFIER_LENGTH - 1) { 
           str[i++] = c; 
         } 
       } 
       str[i] = '\0'; 
       yylval.str = strdup(str); 
       return STRING; 
     }
     default: 
       fprintf(stderr, "Unexpected character: %c\n", c); 
       exit(1); 
     }
   }
   return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
    exit(1);
}

int yywrap(void){
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2 ){
	   fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	   return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin){
	   perror("fopen");
	   return 1;
    }

    if (yyparse() == 0) {
        printf("\nParsing completed successfully.\n");
    } 
    else {
        printf("\nParsing failed.\n");
    }
    fclose(yyin);
    return 0;
}
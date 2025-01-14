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
int production_indexes[100]; 
int index_counter = 0;
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
     cmpdstmt 
    ;

declLIST:
    declLIST 
    { production_indexes[index_counter++] = 1; }
    | declLIST declaration ';' { production_indexes[index_counter++] = 2; }
    ;

declaration:
    type IDENTIFIER ';' { production_indexes[index_counter++] = 3; }
    ;

type:
    INT_T | UNSIGNED_T | FLOAT_T | CHAR_T | STRING_T | USERDEF | array { production_indexes[index_counter++] = 4; }
    ;

array:
    type '[' NUMBER ']' { production_indexes[index_counter++] = 5; }
    ;

cmpdstmt:
    '{' stmtLIST '}' { production_indexes[index_counter++] = 6; }
    | '{''\n' stmtLIST '\n''}' { production_indexes[index_counter++] = 7; }
    |
    ;
 
stmtLIST:
    stmt { production_indexes[index_counter++] = 8; }
    | stmt '{' stmtLIST '}' { production_indexes[index_counter++] = 9; }
    ;

stmt:
    SIMPLEstmt { production_indexes[index_counter++] = 10; }
    | STRUCTstmt { production_indexes[index_counter++] = 11; }
    ;

SIMPLEstmt:
    assignment { production_indexes[index_counter++] = 12; }
    | iostmt { production_indexes[index_counter++] = 13; }
    | declLIST { production_indexes[index_counter++] = 14; }
    ;
   
iostmt:
    CIN IDENTIFIER ';' { production_indexes[index_counter++] = 15; }
    | COUT IDENTIFIER ';' { production_indexes[index_counter++] = 16; }
    | CIN STRING ';' { production_indexes[index_counter++] = 17; }
    | COUT STRING ';' { production_indexes[index_counter++] = 18; }
    ;

STRUCTstmt:
    cmpdstmt { production_indexes[index_counter++] = 19; }
    | ifstmt { production_indexes[index_counter++] = 20; }
    | forstmt { production_indexes[index_counter++] = 21; }
    | whilestmt { production_indexes[index_counter++] = 22; }
    | dostmt { production_indexes[index_counter++] = 23; }
    | breakstmt ';' { production_indexes[index_counter++] = 24; }
    | returnstmt ';' { production_indexes[index_counter++] = 25; }
    ;

assignment:
    IDENTIFIER '=' expression ';' { production_indexes[index_counter++] = 26; }
    ;

expression:
    expression operator term { production_indexes[index_counter++] = 27; }
    | term { production_indexes[index_counter++] = 28; }
    ;

term:
    term operator factor { production_indexes[index_counter++] = 29; }
    | factor { production_indexes[index_counter++] = 30; }
    ;

operator:
    '+'  { production_indexes[index_counter++] = 31; }
    | '-' { production_indexes[index_counter++] = 32; }
    | '/' { production_indexes[index_counter++] = 33; }
    | '*' { production_indexes[index_counter++] = 34; }
    | '=' { production_indexes[index_counter++] = 35; }
    | '|' { production_indexes[index_counter++] = 36; }
    | '&'{ production_indexes[index_counter++] = 37; }
    ;

factor:
    '(' expression ')' { production_indexes[index_counter++] = 38; }
    | IDENTIFIER { production_indexes[index_counter++] = 39; }
    | NUMBER { production_indexes[index_counter++] = 40; }
    ;

ifstmt:
    IF condition stmtLIST { production_indexes[index_counter++] = 41; }
    | IF condition stmtLIST elsestmt { production_indexes[index_counter++] = 42; }
    ;

elsestmt:

    | ELSE stmtLIST { production_indexes[index_counter++] = 43; }
    ;

forstmt:
    FOR '(' assignment ';' condition ';' assignment ')' ';' { production_indexes[index_counter++] = 44; }
    | FOR '(' assignment ';' condition ';' assignment ')' stmtLIST { production_indexes[index_counter++] = 45; }
    ;

whilestmt:
    WHILE '(' condition ')' ';' { production_indexes[index_counter++] = 46; }
    | WHILE '(' condition ')' stmtLIST { production_indexes[index_counter++] = 47; }
    ;

dostmt:
    DO stmt WHILE '(' condition ')' ';' { production_indexes[index_counter++] = 48; }
    | DO stmtLIST WHILE '(' condition ')' ';' { production_indexes[index_counter++] = 49; }
    ;

breakstmt:
    BREAK { production_indexes[index_counter++] = 50; }
    ;

returnstmt:
    RETURN NUMBER { production_indexes[index_counter++] = 51; }
    | RETURN IDENTIFIER { production_indexes[index_counter++] = 52; }
    ;

condition:
    expression RELATION expression { production_indexes[index_counter++] = 5; }
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
        for (int i = 0; i < index_counter; ++i) { printf("Production %d used\n", production_indexes[i]);}
    } 
    else {
        printf("\nParsing failed.\n");
        for (int i = 0; i < index_counter; ++i) { printf("Production %d used\n", production_indexes[i]);}
    }
    fclose(yyin);
    return 0;
}
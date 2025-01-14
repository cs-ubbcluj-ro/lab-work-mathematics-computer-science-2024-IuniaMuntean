%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void yyerror(const char *s);
int yywrap(void);

extern int yylineno;
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
%token <str> ReservedWORDS IDENTIFIER RELATION
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
    | CIN STRING_T ';'
    | COUT STRING_T ';'
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


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
    exit(1);
}

int yywrap(void){
    return 1;
}

int main(int argc, char *argv[]) {
    return yyparse();
}

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

extern int yylineno;
%}



SEPARATOR		"(" | ")" | "[" | "]" | "{" | "}" | ";" | ":" | " " | "\'" |  "\""

DIGIT			      [0-9]
LETTER          [a-zA-Z]
UNDERLINE       "_"
generalID       {LETTER} | {UNDERLINE} | {DIGIT}
identifier      {LETTER}{generalID}{generalID}+

SIGN			  "-"|"+"
NUMBER		  {DIGIT}+
INT			    {SIGN}?{NUMBER}
UNSIGNET		{NUMBER}
FLOAT			  {INT}"."{NUMBER}?
CHAR        {LETTER} | {DIGIT} | " "
STRING      {CHAR}{CHAR} | " "
BOOL        "true" | "false"
CONST			  {FLOAT}|{BOOL}|{CHAR}|{INT}|{STRING}

IOstream      "std::cin >> " | "std::cout << "
TYPE            "int"|"unsigned"|"float"|"char"|"string"|"bool"
ARRAY           {TYPE}"["{NUMBER}"]"
ReservedWORDS   {TYPE}|"if"|"else"|"while"|"do"|"for"|"return"|{IOstream}


OPERATOR		  "+"|"-"|"/"|"*"
COMPARITOR		"&&"|"||"
RELATION         "<" | "<=" | "==" | ">=" | ">"

OPERATORS_PREDEFINED	"<<"|">>"|"+"|"-"|"/"|"*"|"<"|"<="|">"|">="|"=="|"="|"!="|"&&"|"||"





%%
{ReservedWORDS}	{
				return(ReservedWORDS);
			}
			
{identifier}			{
				return(IDENTIFIER);
			}

{SEPARATOR}		{
				return(SEPARATOR);
			}

{OPERATORS_PREDEFINED}	{
				return(OPERATORS_PREDEFINED);
			}

{CONST}			{
				return(CONSTANT);
			}


[ \t\n]+  { /* Ignore whitespace */ }

\n                  { yylineno++; }
%%

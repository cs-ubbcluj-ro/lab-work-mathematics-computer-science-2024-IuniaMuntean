/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LETTER = 258,                  /* LETTER  */
    DIGIT = 259,                   /* DIGIT  */
    UNDERLINE = 260,               /* UNDERLINE  */
    SIGN = 261,                    /* SIGN  */
    CHAR = 262,                    /* CHAR  */
    NUMBER = 263,                  /* NUMBER  */
    INT = 264,                     /* INT  */
    UNSIGNED = 265,                /* UNSIGNED  */
    FLOAT = 266,                   /* FLOAT  */
    STRING = 267,                  /* STRING  */
    IDENTIFIER = 268,              /* IDENTIFIER  */
    RELATION = 269,                /* RELATION  */
    BOOL = 270,                    /* BOOL  */
    INT_T = 271,                   /* INT_T  */
    UNSIGNED_T = 272,              /* UNSIGNED_T  */
    FLOAT_T = 273,                 /* FLOAT_T  */
    CHAR_T = 274,                  /* CHAR_T  */
    STRING_T = 275,                /* STRING_T  */
    USERDEF = 276,                 /* USERDEF  */
    ARRAY = 277,                   /* ARRAY  */
    STRUCT = 278,                  /* STRUCT  */
    COUT = 279,                    /* COUT  */
    CIN = 280,                     /* CIN  */
    IF = 281,                      /* IF  */
    ELSE = 282,                    /* ELSE  */
    FOR = 283,                     /* FOR  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    BREAK = 286,                   /* BREAK  */
    RETURN = 287                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LETTER 258
#define DIGIT 259
#define UNDERLINE 260
#define SIGN 261
#define CHAR 262
#define NUMBER 263
#define INT 264
#define UNSIGNED 265
#define FLOAT 266
#define STRING 267
#define IDENTIFIER 268
#define RELATION 269
#define BOOL 270
#define INT_T 271
#define UNSIGNED_T 272
#define FLOAT_T 273
#define CHAR_T 274
#define STRING_T 275
#define USERDEF 276
#define ARRAY 277
#define STRUCT 278
#define COUT 279
#define CIN 280
#define IF 281
#define ELSE 282
#define FOR 283
#define WHILE 284
#define DO 285
#define BREAK 286
#define RETURN 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "lab5.y"

  int integer;
  float floating;
  char charecter;
  char* str;
  bool boolean;

#line 139 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

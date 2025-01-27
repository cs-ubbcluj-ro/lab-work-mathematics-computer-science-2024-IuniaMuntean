/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lab5.y"

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

#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 214 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LETTER = 3,                     /* LETTER  */
  YYSYMBOL_DIGIT = 4,                      /* DIGIT  */
  YYSYMBOL_UNDERLINE = 5,                  /* UNDERLINE  */
  YYSYMBOL_SIGN = 6,                       /* SIGN  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_NUMBER = 8,                     /* NUMBER  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_UNSIGNED = 10,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_IDENTIFIER = 13,                /* IDENTIFIER  */
  YYSYMBOL_RELATION = 14,                  /* RELATION  */
  YYSYMBOL_BOOL = 15,                      /* BOOL  */
  YYSYMBOL_INT_T = 16,                     /* INT_T  */
  YYSYMBOL_UNSIGNED_T = 17,                /* UNSIGNED_T  */
  YYSYMBOL_FLOAT_T = 18,                   /* FLOAT_T  */
  YYSYMBOL_CHAR_T = 19,                    /* CHAR_T  */
  YYSYMBOL_STRING_T = 20,                  /* STRING_T  */
  YYSYMBOL_USERDEF = 21,                   /* USERDEF  */
  YYSYMBOL_ARRAY = 22,                     /* ARRAY  */
  YYSYMBOL_STRUCT = 23,                    /* STRUCT  */
  YYSYMBOL_COUT = 24,                      /* COUT  */
  YYSYMBOL_CIN = 25,                       /* CIN  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_n_ = 42,                     /* '\n'  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_44_ = 44,                       /* '|'  */
  YYSYMBOL_45_ = 45,                       /* '&'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_cmpdstmt = 50,                  /* cmpdstmt  */
  YYSYMBOL_stmtLIST = 51,                  /* stmtLIST  */
  YYSYMBOL_stmt = 52,                      /* stmt  */
  YYSYMBOL_SIMPLEstmt = 53,                /* SIMPLEstmt  */
  YYSYMBOL_iostmt = 54,                    /* iostmt  */
  YYSYMBOL_STRUCTstmt = 55,                /* STRUCTstmt  */
  YYSYMBOL_assignment = 56,                /* assignment  */
  YYSYMBOL_expression = 57,                /* expression  */
  YYSYMBOL_term = 58,                      /* term  */
  YYSYMBOL_operator = 59,                  /* operator  */
  YYSYMBOL_factor = 60,                    /* factor  */
  YYSYMBOL_ifstmt = 61,                    /* ifstmt  */
  YYSYMBOL_elsestmt = 62,                  /* elsestmt  */
  YYSYMBOL_forstmt = 63,                   /* forstmt  */
  YYSYMBOL_whilestmt = 64,                 /* whilestmt  */
  YYSYMBOL_dostmt = 65,                    /* dostmt  */
  YYSYMBOL_breakstmt = 66,                 /* breakstmt  */
  YYSYMBOL_returnstmt = 67,                /* returnstmt  */
  YYSYMBOL_condition = 68                  /* condition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  102

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,     2,
      46,    47,    35,    33,     2,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    44,    41,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    66,    67,    68,    72,    73,    77,    78,
      79,    83,    84,    86,    90,    91,    92,    93,    97,    98,
      99,   100,   101,   102,   103,   107,   111,   112,   116,   117,
     121,   122,   123,   124,   125,   126,   127,   131,   132,   133,
     137,   138,   141,   143,   147,   148,   152,   153,   157,   158,
     162,   166,   167,   171
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LETTER", "DIGIT",
  "UNDERLINE", "SIGN", "CHAR", "NUMBER", "INT", "UNSIGNED", "FLOAT",
  "STRING", "IDENTIFIER", "RELATION", "BOOL", "INT_T", "UNSIGNED_T",
  "FLOAT_T", "CHAR_T", "STRING_T", "USERDEF", "ARRAY", "STRUCT", "COUT",
  "CIN", "IF", "ELSE", "FOR", "WHILE", "DO", "BREAK", "RETURN", "'+'",
  "'-'", "'*'", "'/'", "';'", "'['", "']'", "'{'", "'}'", "'\\n'", "'='",
  "'|'", "'&'", "'('", "')'", "$accept", "program", "cmpdstmt", "stmtLIST",
  "stmt", "SIMPLEstmt", "iostmt", "STRUCTstmt", "assignment", "expression",
  "term", "operator", "factor", "ifstmt", "elsestmt", "forstmt",
  "whilestmt", "dostmt", "breakstmt", "returnstmt", "condition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -31,    35,    17,   -40,   -19,     1,     3,    -3,    -7,    -5,
      95,   -40,    -1,    95,   -40,     4,     9,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,    -4,    13,   -40,    -3,    14,
      15,    16,    18,   -40,   -40,    -3,    -8,   109,   -40,    95,
      43,    -3,    28,   -21,   -40,   -40,    20,   -40,    95,   -40,
     -40,    96,   -40,   -40,   -40,   -40,   -13,    -3,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,    -3,    -3,    31,    33,    24,
      27,    30,    37,    41,   -40,   -40,   109,   109,   -40,    95,
     -40,    -3,    55,    -3,    -3,   -40,   -40,   -40,    53,   -40,
     -40,    44,    46,    43,    57,    59,    50,   -40,   -40,    75,
     -40,   -40
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     5,     0,     2,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     5,    18,     0,     6,     8,    12,     9,
      11,    19,    20,    21,    22,     0,     0,     1,     0,     0,
       0,     0,     0,    39,    38,     0,     0,    27,    29,     5,
       0,     0,     0,     0,    51,    52,     0,     3,     5,    23,
      24,     0,    17,    15,    16,    14,     0,     0,    30,    31,
      33,    32,    34,    35,    36,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    25,    37,    53,    26,    28,     5,
      41,     0,     5,     0,     0,     4,     7,    43,     0,    46,
      47,     0,     0,     0,     0,     0,     0,    49,    48,     5,
      44,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,    74,   -10,    88,   -40,   -40,   -40,   -39,   -17,
      45,   -35,    36,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    14,    15,    16,    17,    18,    19,    20,    36,
      37,    65,    38,    21,    80,    22,    23,    24,    25,    26,
      39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    68,    66,    46,    69,    33,    57,    44,    71,     1,
      34,    51,    45,    29,    30,    31,    32,    27,    56,    48,
      58,    59,    60,    61,    28,    58,    59,    60,    61,    67,
      62,    63,    64,    49,    75,    62,    63,    64,    73,    40,
      76,    41,    66,    35,    88,    47,    91,    92,     4,    48,
      50,    52,    53,    54,    96,    55,     4,    70,    79,     5,
       6,     7,    72,     8,     9,    10,    11,    12,     4,    87,
      81,    82,    90,    83,     3,     1,    84,    13,    85,     5,
       6,     7,    86,     8,     9,    10,    11,    12,     4,   101,
      93,    94,    89,    95,    97,     1,    98,    99,    43,     5,
       6,     7,    78,     8,     9,    10,    11,    12,     4,     0,
      77,     0,   100,     0,     0,     1,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    58,
      59,    60,    61,    74,     0,     1,     0,     0,     0,    62,
      63,    64,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,    62,    63,    64
};

static const yytype_int8 yycheck[] =
{
      10,    40,    37,    13,    41,     8,    14,     8,    29,    40,
      13,    28,    13,    12,    13,    12,    13,     0,    35,    40,
      33,    34,    35,    36,    43,    33,    34,    35,    36,    39,
      43,    44,    45,    37,    47,    43,    44,    45,    48,    46,
      57,    46,    77,    46,    81,    41,    83,    84,    13,    40,
      37,    37,    37,    37,    93,    37,    13,    29,    27,    24,
      25,    26,    42,    28,    29,    30,    31,    32,    13,    79,
      37,    47,    82,    46,     0,    40,    46,    42,    41,    24,
      25,    26,    41,    28,    29,    30,    31,    32,    13,    99,
      37,    47,    37,    47,    37,    40,    37,    47,    10,    24,
      25,    26,    66,    28,    29,    30,    31,    32,    13,    -1,
      65,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    33,
      34,    35,    36,    37,    -1,    40,    -1,    -1,    -1,    43,
      44,    45,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    49,    50,    13,    24,    25,    26,    28,    29,
      30,    31,    32,    42,    50,    51,    52,    53,    54,    55,
      56,    61,    63,    64,    65,    66,    67,     0,    43,    12,
      13,    12,    13,     8,    13,    46,    57,    58,    60,    68,
      46,    46,    51,    52,     8,    13,    51,    41,    40,    37,
      37,    57,    37,    37,    37,    37,    57,    14,    33,    34,
      35,    36,    43,    44,    45,    59,    59,    51,    56,    68,
      29,    29,    42,    51,    37,    47,    57,    58,    60,    27,
      62,    37,    47,    46,    46,    41,    41,    51,    68,    37,
      51,    68,    68,    37,    47,    47,    56,    37,    37,    47,
      37,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    67,    67,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     5,     0,     1,     4,     1,     1,
       0,     1,     1,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     2,     2,     4,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     4,     0,     2,     9,     9,     5,     5,     7,     7,
       1,     2,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* cmpdstmt: '{' stmtLIST '}'  */
#line 66 "lab5.y"
                     { production_indexes[index_counter++] = 6; }
#line 1337 "y.tab.c"
    break;

  case 4: /* cmpdstmt: '{' '\n' stmtLIST '\n' '}'  */
#line 67 "lab5.y"
                               { production_indexes[index_counter++] = 7; }
#line 1343 "y.tab.c"
    break;

  case 6: /* stmtLIST: stmt  */
#line 72 "lab5.y"
         { production_indexes[index_counter++] = 8; }
#line 1349 "y.tab.c"
    break;

  case 7: /* stmtLIST: stmt '{' stmtLIST '}'  */
#line 73 "lab5.y"
                            { production_indexes[index_counter++] = 9; }
#line 1355 "y.tab.c"
    break;

  case 8: /* stmt: SIMPLEstmt  */
#line 77 "lab5.y"
               { production_indexes[index_counter++] = 10; }
#line 1361 "y.tab.c"
    break;

  case 9: /* stmt: STRUCTstmt  */
#line 78 "lab5.y"
                 { production_indexes[index_counter++] = 11; }
#line 1367 "y.tab.c"
    break;

  case 11: /* SIMPLEstmt: assignment  */
#line 83 "lab5.y"
               { production_indexes[index_counter++] = 12; }
#line 1373 "y.tab.c"
    break;

  case 12: /* SIMPLEstmt: iostmt  */
#line 84 "lab5.y"
             { production_indexes[index_counter++] = 13; }
#line 1379 "y.tab.c"
    break;

  case 14: /* iostmt: CIN IDENTIFIER ';'  */
#line 90 "lab5.y"
                       { production_indexes[index_counter++] = 15; }
#line 1385 "y.tab.c"
    break;

  case 15: /* iostmt: COUT IDENTIFIER ';'  */
#line 91 "lab5.y"
                          { production_indexes[index_counter++] = 16; }
#line 1391 "y.tab.c"
    break;

  case 16: /* iostmt: CIN STRING ';'  */
#line 92 "lab5.y"
                     { production_indexes[index_counter++] = 17; }
#line 1397 "y.tab.c"
    break;

  case 17: /* iostmt: COUT STRING ';'  */
#line 93 "lab5.y"
                      { production_indexes[index_counter++] = 18; }
#line 1403 "y.tab.c"
    break;

  case 18: /* STRUCTstmt: cmpdstmt  */
#line 97 "lab5.y"
             { production_indexes[index_counter++] = 19; }
#line 1409 "y.tab.c"
    break;

  case 19: /* STRUCTstmt: ifstmt  */
#line 98 "lab5.y"
             { production_indexes[index_counter++] = 20; }
#line 1415 "y.tab.c"
    break;

  case 20: /* STRUCTstmt: forstmt  */
#line 99 "lab5.y"
              { production_indexes[index_counter++] = 21; }
#line 1421 "y.tab.c"
    break;

  case 21: /* STRUCTstmt: whilestmt  */
#line 100 "lab5.y"
                { production_indexes[index_counter++] = 22; }
#line 1427 "y.tab.c"
    break;

  case 22: /* STRUCTstmt: dostmt  */
#line 101 "lab5.y"
             { production_indexes[index_counter++] = 23; }
#line 1433 "y.tab.c"
    break;

  case 23: /* STRUCTstmt: breakstmt ';'  */
#line 102 "lab5.y"
                    { production_indexes[index_counter++] = 24; }
#line 1439 "y.tab.c"
    break;

  case 24: /* STRUCTstmt: returnstmt ';'  */
#line 103 "lab5.y"
                     { production_indexes[index_counter++] = 25; }
#line 1445 "y.tab.c"
    break;

  case 25: /* assignment: IDENTIFIER '=' expression ';'  */
#line 107 "lab5.y"
                                  { production_indexes[index_counter++] = 26; }
#line 1451 "y.tab.c"
    break;

  case 26: /* expression: expression operator term  */
#line 111 "lab5.y"
                             { production_indexes[index_counter++] = 27; }
#line 1457 "y.tab.c"
    break;

  case 27: /* expression: term  */
#line 112 "lab5.y"
           { production_indexes[index_counter++] = 28; }
#line 1463 "y.tab.c"
    break;

  case 28: /* term: term operator factor  */
#line 116 "lab5.y"
                         { production_indexes[index_counter++] = 29; }
#line 1469 "y.tab.c"
    break;

  case 29: /* term: factor  */
#line 117 "lab5.y"
             { production_indexes[index_counter++] = 30; }
#line 1475 "y.tab.c"
    break;

  case 30: /* operator: '+'  */
#line 121 "lab5.y"
         { production_indexes[index_counter++] = 31; }
#line 1481 "y.tab.c"
    break;

  case 31: /* operator: '-'  */
#line 122 "lab5.y"
          { production_indexes[index_counter++] = 32; }
#line 1487 "y.tab.c"
    break;

  case 32: /* operator: '/'  */
#line 123 "lab5.y"
          { production_indexes[index_counter++] = 33; }
#line 1493 "y.tab.c"
    break;

  case 33: /* operator: '*'  */
#line 124 "lab5.y"
          { production_indexes[index_counter++] = 34; }
#line 1499 "y.tab.c"
    break;

  case 34: /* operator: '='  */
#line 125 "lab5.y"
          { production_indexes[index_counter++] = 35; }
#line 1505 "y.tab.c"
    break;

  case 35: /* operator: '|'  */
#line 126 "lab5.y"
          { production_indexes[index_counter++] = 36; }
#line 1511 "y.tab.c"
    break;

  case 36: /* operator: '&'  */
#line 127 "lab5.y"
         { production_indexes[index_counter++] = 37; }
#line 1517 "y.tab.c"
    break;

  case 37: /* factor: '(' expression ')'  */
#line 131 "lab5.y"
                       { production_indexes[index_counter++] = 38; }
#line 1523 "y.tab.c"
    break;

  case 38: /* factor: IDENTIFIER  */
#line 132 "lab5.y"
                 { production_indexes[index_counter++] = 39; }
#line 1529 "y.tab.c"
    break;

  case 39: /* factor: NUMBER  */
#line 133 "lab5.y"
             { production_indexes[index_counter++] = 40; }
#line 1535 "y.tab.c"
    break;

  case 40: /* ifstmt: IF condition stmtLIST  */
#line 137 "lab5.y"
                          { production_indexes[index_counter++] = 41; }
#line 1541 "y.tab.c"
    break;

  case 41: /* ifstmt: IF condition stmtLIST elsestmt  */
#line 138 "lab5.y"
                                     { production_indexes[index_counter++] = 42; }
#line 1547 "y.tab.c"
    break;

  case 43: /* elsestmt: ELSE stmtLIST  */
#line 143 "lab5.y"
                    { production_indexes[index_counter++] = 43; }
#line 1553 "y.tab.c"
    break;

  case 44: /* forstmt: FOR '(' assignment ';' condition ';' assignment ')' ';'  */
#line 147 "lab5.y"
                                                            { production_indexes[index_counter++] = 44; }
#line 1559 "y.tab.c"
    break;

  case 45: /* forstmt: FOR '(' assignment ';' condition ';' assignment ')' stmtLIST  */
#line 148 "lab5.y"
                                                                   { production_indexes[index_counter++] = 45; }
#line 1565 "y.tab.c"
    break;

  case 46: /* whilestmt: WHILE '(' condition ')' ';'  */
#line 152 "lab5.y"
                                { production_indexes[index_counter++] = 46; }
#line 1571 "y.tab.c"
    break;

  case 47: /* whilestmt: WHILE '(' condition ')' stmtLIST  */
#line 153 "lab5.y"
                                       { production_indexes[index_counter++] = 47; }
#line 1577 "y.tab.c"
    break;

  case 48: /* dostmt: DO stmt WHILE '(' condition ')' ';'  */
#line 157 "lab5.y"
                                        { production_indexes[index_counter++] = 48; }
#line 1583 "y.tab.c"
    break;

  case 49: /* dostmt: DO stmtLIST WHILE '(' condition ')' ';'  */
#line 158 "lab5.y"
                                              { production_indexes[index_counter++] = 49; }
#line 1589 "y.tab.c"
    break;

  case 50: /* breakstmt: BREAK  */
#line 162 "lab5.y"
          { production_indexes[index_counter++] = 50; }
#line 1595 "y.tab.c"
    break;

  case 51: /* returnstmt: RETURN NUMBER  */
#line 166 "lab5.y"
                  { production_indexes[index_counter++] = 51; }
#line 1601 "y.tab.c"
    break;

  case 52: /* returnstmt: RETURN IDENTIFIER  */
#line 167 "lab5.y"
                        { production_indexes[index_counter++] = 52; }
#line 1607 "y.tab.c"
    break;

  case 53: /* condition: expression RELATION expression  */
#line 171 "lab5.y"
                                   { production_indexes[index_counter++] = 5; }
#line 1613 "y.tab.c"
    break;


#line 1617 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 174 "lab5.y"


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

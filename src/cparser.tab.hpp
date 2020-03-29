/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/cparser.y" /* yacc.c:1909  */

  #include "ast.hpp"
  #include <cassert>

  extern Statementptr g_root; // A way of getting the AST out

  int yylex(void);
  void yyerror(const char *);

  extern FILE *yyin;

#line 56 "src/cparser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_AUTO = 258,
    T_DOUBLE = 259,
    T_INT = 260,
    T_STRUCT = 261,
    T_BREAK = 262,
    T_ELSE = 263,
    T_LONG = 264,
    T_SWITCH = 265,
    T_CASE = 266,
    T_ENUM = 267,
    T_REGISTER = 268,
    T_TYPEDEF = 269,
    T_EXTERN = 270,
    T_RETURN = 271,
    T_FLOAT = 272,
    T_SHORT = 273,
    T_UNSIGNED = 274,
    T_CONTINUE = 275,
    T_FOR = 276,
    T_SIGNED = 277,
    T_VOID = 278,
    T_DEFAULT = 279,
    T_SIZEOF = 280,
    T_VOLATILE = 281,
    T_DO = 282,
    T_IF = 283,
    T_STATIC = 284,
    T_WHILE = 285,
    T_CHAR = 286,
    T_EQUAL = 287,
    T_CONST = 288,
    T_IDENTIFIER = 289,
    T_FLOAT_CONST = 290,
    T_INT_CONST = 291,
    T_CHAR_CONST = 292,
    T_STRING = 293,
    T_PLUS = 294,
    T_PLUS_PLUS = 295,
    T_PLUS_EQUAL = 296,
    T_MINUS = 297,
    T_MINUS_MINUS = 298,
    T_MINUS_EQUAL = 299,
    T_TIMES = 300,
    T_TIMES_EQUAL = 301,
    T_DIVIDE = 302,
    T_DIVIDE_EQUAL = 303,
    T_BOOL_EQUAL = 304,
    T_NOT_EQUAL = 305,
    T_TILDE = 306,
    T_EXCLAMATION = 307,
    T_PERCENTAGE = 308,
    T_HASH = 309,
    T_HASH_HASH = 310,
    T_COLON = 311,
    T_SEMICOLON = 312,
    T_BITWISE_OR = 313,
    T_LOGICAL_OR = 314,
    T_BITWISE_AND = 315,
    T_LOGICAL_AND = 316,
    T_COMMA = 317,
    T_LSHIFT_EQUAL = 318,
    T_RSHIFT_EQUAL = 319,
    T_L_ROUND_BRACKET = 320,
    T_R_ROUND_BRACKET = 321,
    T_L_SQUARE_BRACKET = 322,
    T_R_SQUARE_BRACKET = 323,
    T_L_CURLY_BRACKET = 324,
    T_R_CURLY_BRACKET = 325,
    T_DOT = 326,
    T_QUESTION = 327,
    T_SMALLER = 328,
    T_SMALLER_SMALLER = 329,
    T_BIGGER = 330,
    T_BIGGER_BIGGER = 331,
    T_SMALLER_EQUAL = 332,
    T_BIGGER_EQUAL = 333,
    T_POINT_TO = 334,
    T_BITWISE_XOR = 335,
    T_AND_EQUAL = 336,
    T_OR_EQUAL = 337,
    T_XOR_EQUAL = 338,
    T_PERCENTAGE_EQUAL = 339,
    T_UNION = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "src/cparser.y" /* yacc.c:1909  */

  Statementptr states;
  Statementlistptr stateslist;
  double number;
  std::string *string;

#line 161 "src/cparser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED  */

/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE = 258,
    VOID = 259,
    STATIC = 260,
    FINAL = 261,
    CLASS = 262,
    MAIN = 263,
    NEW = 264,
    PUBLIC = 265,
    PROTECTED = 266,
    PRIVATE = 267,
    READ = 268,
    PRINT = 269,
    CONST = 270,
    IF = 271,
    ELSEIF = 272,
    ELSE = 273,
    SWITCH = 274,
    CASE = 275,
    BREAK = 276,
    DEFAULT = 277,
    FOR = 278,
    DO = 279,
    WHILE = 280,
    CONTINUE = 281,
    RETURN = 282,
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    DOT = 286,
    square_brackets_l = 287,
    Brackets_l = 288,
    Brackets_r = 289,
    square_brackets_r = 290,
    Parentheses_l = 291,
    Parentheses_r = 292,
    EQUAL = 293,
    DOUBLEPLUS = 294,
    DOUBLEMINUS = 295,
    PLUS = 296,
    MINUS = 297,
    MULTIPLY = 298,
    DIVIDE = 299,
    INFIXOP = 300,
    SYMBOL = 301,
    AND = 302,
    OR = 303,
    INT = 304,
    FLOAT = 305,
    INVALID = 306,
    ID = 307,
    STRING = 308
  };
#endif
/* Tokens.  */
#define TYPE 258
#define VOID 259
#define STATIC 260
#define FINAL 261
#define CLASS 262
#define MAIN 263
#define NEW 264
#define PUBLIC 265
#define PROTECTED 266
#define PRIVATE 267
#define READ 268
#define PRINT 269
#define CONST 270
#define IF 271
#define ELSEIF 272
#define ELSE 273
#define SWITCH 274
#define CASE 275
#define BREAK 276
#define DEFAULT 277
#define FOR 278
#define DO 279
#define WHILE 280
#define CONTINUE 281
#define RETURN 282
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define DOT 286
#define square_brackets_l 287
#define Brackets_l 288
#define Brackets_r 289
#define square_brackets_r 290
#define Parentheses_l 291
#define Parentheses_r 292
#define EQUAL 293
#define DOUBLEPLUS 294
#define DOUBLEMINUS 295
#define PLUS 296
#define MINUS 297
#define MULTIPLY 298
#define DIVIDE 299
#define INFIXOP 300
#define SYMBOL 301
#define AND 302
#define OR 303
#define INT 304
#define FLOAT 305
#define INVALID 306
#define ID 307
#define STRING 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "b073021024.y"

	char *name; // define type

#line 167 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

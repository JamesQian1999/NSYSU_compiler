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
    NEWLINE = 283,
    SEMICOLON = 284,
    COLON = 285,
    COMMA = 286,
    DOT = 287,
    SQUARE_L = 288,
    SQUARE_R = 289,
    CURLY_L = 290,
    CURLY_R = 291,
    PARENTHESES_L = 292,
    PARENTHESES_R = 293,
    ASSIGN = 294,
    CONDITION = 295,
    DOUBLEPLUS = 296,
    DOUBLEMINUS = 297,
    PLUS = 298,
    MINUS = 299,
    MULTIPLY = 300,
    DIVIDE = 301,
    AND = 302,
    OR = 303,
    INT = 304,
    FLOAT = 305,
    ERRID = 306,
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
#define NEWLINE 283
#define SEMICOLON 284
#define COLON 285
#define COMMA 286
#define DOT 287
#define SQUARE_L 288
#define SQUARE_R 289
#define CURLY_L 290
#define CURLY_R 291
#define PARENTHESES_L 292
#define PARENTHESES_R 293
#define ASSIGN 294
#define CONDITION 295
#define DOUBLEPLUS 296
#define DOUBLEMINUS 297
#define PLUS 298
#define MINUS 299
#define MULTIPLY 300
#define DIVIDE 301
#define AND 302
#define OR 303
#define INT 304
#define FLOAT 305
#define ERRID 306
#define ID 307
#define STRING 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "B072040008.y"

	char *name;

#line 167 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

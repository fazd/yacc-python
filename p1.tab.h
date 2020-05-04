
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     print = 258,
     exit_command = 259,
     AND = 260,
     BREAK = 261,
     CONTINUE = 262,
     DEF = 263,
     ELIF = 264,
     ELSE = 265,
     FOR = 266,
     IF = 267,
     IMPORT = 268,
     IN = 269,
     IS = 270,
     NOT = 271,
     OR = 272,
     PASS = 273,
     PRINT = 274,
     RETURN = 275,
     WHILE = 276,
     TRUE = 277,
     FALSE = 278,
     RANGE = 279,
     bitrightig = 280,
     bitleftig = 281,
     divEntig = 282,
     potig = 283,
     masig = 284,
     menig = 285,
     multig = 286,
     divig = 287,
     andig = 288,
     orig = 289,
     xorig = 290,
     modig = 291,
     pot = 292,
     bitleft = 293,
     bitright = 294,
     menorig = 295,
     mayorig = 296,
     dif = 297,
     distin = 298,
     igual = 299,
     divent = 300,
     mod = 301,
     and = 302,
     or = 303,
     xor = 304,
     negac = 305,
     menorque = 306,
     mayorque = 307,
     parabre = 308,
     parcierr = 309,
     corabre = 310,
     corcierr = 311,
     coma = 312,
     dospunt = 313,
     punt = 314,
     gtg = 315,
     tab = 316,
     number = 317,
     identifier = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 "p1.y"
int num; int id;


/* Line 1676 of yacc.c  */
#line 119 "p1.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



%define parse.error verbose
%define parse.trace
%start  classes
%nonassoc ELSE
%{
#include <stdio.h>
#include <unistd.h>
#include "lib/symbol_table.h"
int yylex();
// int yydebug = 1;
void yyerror(const char *s);
extern char tok[80];
#define DUP_ID "duplicate id.\n"
#define MISS_SEMI "Missing semicolum.\n"
#define show_errmsg(x) fprintf(stderr, x)

#define chk_dupid do{int res = insert(tok); if (res < 0) show_errmsg(DUP_ID);} while(0)
%}

%token AND BOOLEAN CHAR CLASS EQ FINAL FLOAT FOR GE ID IF INT LE MAIN MM NE NEW INT_L FLOAT_L OR PP PRINT RETURN STATIC STR VOID WHILE

%%
classes: | classes class;

class: CLASS ID '{'{push();} declare '}'{pop();};

declare:
    | declare final_decl__ ';'
    | declare spec_decl__
    | declare MAIN '(' args ')' compound    // non-type main
    | declare VOID MAIN '(' args ')' compound    // non-type main
    | declare class
    | declare error ';'
    ;

compound: '{'{push();} statement_star '}'{pop();} ;

spec_decl__: spec_type_chk__ decl_impl ';' // var
    | spec_type_chk__ '(' args ')' compound // func
    ;

spec_type_chk__: spec_type__ generic_id {chk_dupid;} ;

decl_impl: 
    | '=' init_decl
    | ',' id_list
    ;

init_decl: const_expr | NEW type arr_or_obj ;

arr_or_obj: '[' INT_L ']' | '(' tuple ')';

final_decl__: final_decl_chk__ const_expr // For the class had not decl.
    | final_decl_chk__ NEW type arr_or_obj
    ;

final_decl_chk__: FINAL type generic_id {chk_dupid;} '=';

spec_type__: STATIC type | type;

args:
    | type generic_id {chk_dupid;}
    | args ',' type generic_id {chk_dupid;} ;

id_list: init_or_not__ {chk_dupid;} 
    | id_list ',' init_or_not__ {chk_dupid;} 
    ;

init_or_not__: generic_id 
    | id_list_init;

id_list_init: generic_id '=' const_expr
    | id_list_init ',' generic_id '=' const_expr 
    ;

tuple: | tuple INT_L | tuple FLOAT_L | tuple STR;

generic_id:  ID | generic_id'[' INT_L ']' | generic_id'.'ID;

type: type '[' ']'
    | INT 
    | FLOAT
    | CHAR
    | BOOLEAN
    | VOID
    | ID
    ;

const_expr: INT_L
    | FLOAT_L
    | STR
    | generic_id 
    | const_expr Infixop const_expr
    ;

Infixop: '+' | '-' | '*' | '/' | '%' | '>' | '<' | '&' | '|' | LE | GE | EQ | NE | AND | OR ;

statement_star:
    | statement_star compound
    | statement_star simple_call_decl ';'
    | statement_star conditional
    | statement_star loop
    | statement_star return
    | statement_star declare
    | statement_star ';'
    ;

simple_call_decl: generic_id '(' para_list ')'   //call
    | generic_id '=' simple_call_decl                      //simple
    | generic_id PP                            //simple
    | generic_id MM                            //simple
    | PP generic_id                            //simple
    | MM generic_id                            //simple
    | '+' generic_id                           //simple
    | '-' generic_id                           //simple
    | expr                                     //simple
    | PRINT '(' expr ')'                       //simple
    | generic_id generic_id decl_impl
    ;

expr: term
    | expr '+' term
    | expr '-' term
    | error
    ;

term: factor
    | term '*' factor
    | term '/' factor
    ;

factor: const_expr
    | '(' expr ')'
    ;

conditional: if_simple__
    | if_simple__ else_simple__
    | if_simple__ else_compound__
    | if_compound__
    | if_compound__ else_simple__
    | if_compound__ else_compound__
    ;

if_expr__: IF '(' bool_expr ')';

if_simple__  : if_expr__ simple_call_decl;
if_compound__: if_expr__ compound;

else_simple__: ELSE simple_call_decl;
else_compound__: ELSE compound;

bool_expr: expr;

loop: while_expr__     simple_call_decl
    | while_expr__     compound
    | for_expr__       simple_call_decl
    | for_expr__       compound
    ;

while_expr__: WHILE '(' bool_expr ')'; 
for_expr__  : FOR '(' ForInitOpt ';' bool_expr ';' ForUpdateOpt ')';

ForInitOpt:
    | id_list_init
    | INT id_list_init {chk_dupid;}
    ;

ForUpdateOpt: 
    | generic_id PP | generic_id MM
    ;

return: RETURN expr ';' ;

para_list: expr
    | para_list ',' expr 
    ;

%%
int main() {
    set_dbg(0);
    yyparse();
    return 0;
}

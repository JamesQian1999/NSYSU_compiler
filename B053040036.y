%{
	#include<stdio.h>
	int lineCount;
	int charCount;
	void create();
	void symtb();
	void yyerror(const char*);
	int yylex();
	char *yytext;
%}
%union{
	char *name;
}
%define parse.error verbose
%token <name> TYPE VOID STATIC FINAL CLASS MAIN NEW PUBLIC PROTECTED PRIVATE READ PRINT CONST IF ELSEIF ELSE SWITCH CASE BREAK DEFAULT FOR DO WHILE CONTINUE RETURN SEMICOLON COLON COMMA DOT LEFTTMB LEFTBRK RIGHTBRK RIGHTTMB LEFTTB RIGHTTB EQUAL DOUBLEPLUS DOUBLEMINUS PLUS MINUS MULTIPLY DIVIDE INFIXOP SYMBOL AND OR INT FLOAT INVALID ID STRING 
%type <name> dec_list
%type <name> error_dec
%type <name> dec
%type <name> idlist
%type <name> invaldid
%type <name> array
%type <name> object_dec
%type <name> class_dec
%type <name> classname
%type <name> method
%type <name> method_modifier
%type <name> main
%type <name> argument
%type <name> stmt_list
%type <name> stmt
%type <name> compound
%type <name> simple
%type <name> name
%type <name> expr_list
%type <name> expression
%type <name> def
%type <name> term
%type <name> factor
%type <name> prefixop
%type <name> postfixop
%type <name> const_expr
%type <name> method_invocation
%type <name> method_call
%type <name> conditional
%type <name> boolean_expr
%type <name> loop
%type <name> forinitopt
%type <name> forupdateopt
%type <name> return
%%
//decaration
dec_list: dec 
		| dec_list SEMICOLON dec 
		| dec_list class_dec 
		| error_dec;
error_dec: dec_list dec 
		   {printf("\nLine:%d, 1st char: %d, a syntax error at \"%s\".\n",lineCount-1,charCount+16,yytext);};
dec: STATIC TYPE idlist 
   | TYPE idlist 
   | array 
   | FINAL TYPE idlist 
   | class_dec 
   | object_dec 
   | def;
//variables(Fields)
idlist: ID 
	  | idlist COMMA ID 
	  | ID EQUAL expression 
	  | idlist COMMA ID EQUAL expression 
	  | invaldid 
	  | INVALID 
	  	{printf("\nLine:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount,yytext);}
	  | idlist COMMA INVALID 
	  	{printf("Line:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount,yytext);};
//error statement of invalid ID
invaldid: idlist ID 
		  {printf("\nLine:%d, 1st char : %d, a syntax error that need a comma between two variables at \"%s\".\n",lineCount, charCount,yytext);}; 
array: TYPE LEFTTMB RIGHTTMB ID EQUAL NEW TYPE LEFTTMB INT RIGHTTMB;
//object build
object_dec: classname ID EQUAL NEW classname LEFTTB RIGHTTB 
		  | TYPE ID LEFTTB RIGHTTB compound;
//class definition
class_dec: CLASS classname LEFTBRK dec_list SEMICOLON method RIGHTBRK 
		 | CLASS classname LEFTBRK dec_list SEMICOLON main RIGHTBRK 
		 | CLASS classname LEFTBRK dec_list SEMICOLON RIGHTBRK 
		 | CLASS classname LEFTBRK dec_list RIGHTBRK
		 | CLASS classname LEFTBRK dec_list SEMICOLON stmt_list SEMICOLON RIGHTBRK;
classname: ID;
//method declaration
method: method_modifier TYPE ID LEFTTB argument RIGHTTB LEFTBRK stmt_list RIGHTBRK 
	  | TYPE ID LEFTTB argument RIGHTTB LEFTBRK stmt_list RIGHTBRK 
	  | method_modifier TYPE ID LEFTTB RIGHTTB LEFTBRK stmt_list RIGHTBRK 
	  | TYPE ID LEFTTB RIGHTTB LEFTBRK stmt_list RIGHTBRK 
	  | VOID ID LEFTTB RIGHTTB argument LEFTBRK stmt_list RIGHTBRK 
	  | VOID ID LEFTTB RIGHTTB compound;
method_modifier: PUBLIC 
			   | PROTECTED 
			   | PRIVATE;
//main declaration
main: MAIN LEFTTB RIGHTTB compound 
	| MAIN LEFTTB argument RIGHTTB compound 
	| TYPE MAIN LEFTTB RIGHTTB compound 
	| VOID MAIN LEFTTB RIGHTTB compound 
	| TYPE MAIN LEFTTB argument RIGHTTB compound 
	| VOID MAIN LEFTTB argument RIGHTTB compound;
argument: TYPE ID 
		| TYPE ID COMMA argument;
//statements
stmt_list: stmt 
		 | stmt_list SEMICOLON stmt 
		 | stmt_list stmt;
stmt: compound 
	| simple 
	| expression 
	| conditional 
	| loop 
	| return 
	| method_call;
//compound
compound: LEFTBRK dec_list SEMICOLON stmt_list RIGHTBRK 
		| LEFTBRK dec_list SEMICOLON stmt_list SEMICOLON RIGHTBRK 
		| LEFTBRK stmt_list SEMICOLON RIGHTBRK 
		| LEFTBRK stmt_list RIGHTBRK 
		| LEFTBRK dec_list RIGHTBRK 
		| LEFTBRK dec_list SEMICOLON RIGHTBRK 
		| LEFTBRK dec_list SEMICOLON stmt_list dec_list SEMICOLON RIGHTBRK
		| loop;
//simple
simple: name EQUAL expression 
	  | PRINT LEFTTB expression RIGHTTB 
	  | READ LEFTTB name RIGHTTB 
	  | name DOUBLEPLUS 
	  | name DOUBLEMINUS 
	  | expression 
	  | PRINT LEFTTB STRING factor RIGHTTB;
name: ID 
	| ID DOT ID;
//expression
expr_list: expression COMMA expr_list 
		 | expression;
expression: term 
		  | expression PLUS term 
		  | expression MINUS term;
//variables assignment
def: ID EQUAL expr_list;
term: factor MULTIPLY factor 
	| factor DIVIDE factor 
	| factor
	| factor MULTIPLY factor DIVIDE factor
	| factor DIVIDE factor MULTIPLY factor;
factor: ID 
	  | const_expr 
	  | LEFTTB expression RIGHTTB 
	  | prefixop ID 
	  | ID postfixop 
	  | method_invocation 
	  | ID LEFTTMB INT RIGHTTMB;
prefixop: DOUBLEPLUS 
		| DOUBLEMINUS 
		| PLUS 
		| MINUS;
postfixop: DOUBLEPLUS 
		 | DOUBLEMINUS;
const_expr: INT 
		  | FLOAT;
//method_invocation 
method_invocation: name LEFTTB expr_list RIGHTTB 
				 | name LEFTTB RIGHTTB;
method_call: method_invocation SEMICOLON;
//conditional
conditional: IF LEFTTB boolean_expr RIGHTTB simple 
		   | IF LEFTTB boolean_expr RIGHTTB compound 
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE simple 
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE compound 
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE conditional;
//loop
boolean_expr: expression INFIXOP expression 
			| boolean_expr AND boolean_expr 
			| boolean_expr OR boolean_expr;
loop: WHILE LEFTTB boolean_expr RIGHTTB simple 
	| WHILE LEFTTB boolean_expr RIGHTTB compound 
	| FOR LEFTTB forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB simple 
	| LEFTTB forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB compound 
	| FOR LEFTTB SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB simple;
forinitopt: idlist 
		  | TYPE idlist;
forupdateopt: ID postfixop 
			| ID EQUAL expression;
//return
return: RETURN expression;
%%
int main(){
	printf("Line 1: ");
	create();//建立symbol table
	yyparse();//YACC透過yyparse()呼叫yylex() 並且開始作parsing
	symtb();//印出symbol table
	return 0;
}
void yyerror(const char *str){
	printf( "\nLine %d, 1st char: %d, %s at \"%s\".", lineCount, charCount, str, yytext);
} 





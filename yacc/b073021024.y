%{
	#include<stdio.h>
	void yyerror(const char*);
	int yylex();
	int f = -1;
	char *yytext;
%}
%union{
	char *name;
}

%token <name> TYPE VOID STATIC FINAL CLASS MAIN NEW PUBLIC PROTECTED PRIVATE READ PRINT CONST IF ELSEIF ELSE SWITCH CASE BREAK DEFAULT FOR DO WHILE CONTINUE RETURN SEMICOLON COLON COMMA DOT LEFTTMB LEFTBRK RIGHTBRK RIGHTTMB LEFTTB RIGHTTB EQUAL DOUBLEPLUS DOUBLEMINUS PLUS MINUS MULTIPLY DIVIDE INFIXOP SYMBOL AND OR INT FLOAT INVALID ID STRING 
%type <name> compound_list return forupdateopt forinitopt loop boolean_expr conditional method_call method_invocation const_expr postfixop prefixop factor term def expression expr_list name simple compound stmt stmt_list argument main method_modifier method classname class_dec object_dec array invaldid idlist dec error_dec dec_list


%%


//decaration
dec_list: dec 
		| dec_list SEMICOLON dec 
		| dec_list class_dec 
		| error_dec;
error_dec: dec_list dec 
		   {printf("\n> A syntax error at \"%s\".",yytext);};
dec: STATIC TYPE idlist 
   | TYPE idlist
   | array 
   | FINAL TYPE idlist 
   | class_dec 
   | object_dec 
   | method
   | main
   | def;

//variables
idlist: ID {
		//printf(" ==>%s %d<== ",$1,strlen($1));
		int tmp = lookup($1);
		if(f == tmp)
			printf("\n> \'%s\' is a duplicate indentifier.",$1);
		f = tmp;
		}
	  | idlist COMMA ID 
      | ID LEFTTMB const_expr RIGHTTMB EQUAL expression
	  | ID EQUAL expression 
	  | idlist COMMA ID EQUAL expression 
	  | invaldid 
	  | INVALID 
	  	{printf("\n> \"%s\" is an invalid \"id\".\n",yytext);}
	  | idlist COMMA INVALID 
	  	{printf("> \"%s\" is an invalid \"id\".\n",yytext);};

//error statement of invalid ID
invaldid: idlist ID 
		  {printf("\n> a syntax error that need a comma between two variables at \"%s\".\n",yytext);}; 
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
	| return SEMICOLON
	| method_call;

//compound
compound: LEFTBRK compound_list RIGHTBRK
		| loop;
compound_list: dec_list SEMICOLON 
            | stmt_list
            | stmt_list SEMICOLON
            | dec_list SEMICOLON compound_list
            | stmt_list compound_list


//simple
simple: name EQUAL expression 
      | name LEFTTMB const_expr RIGHTTMB postfixop SEMICOLON
	  | PRINT LEFTTB expression RIGHTTB 
	  | READ LEFTTB name RIGHTTB
	  | name DOUBLEPLUS 
	  | name DOUBLEMINUS 
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
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE simple 
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE compound 
		   | IF LEFTTB boolean_expr RIGHTTB simple ELSE conditional;

//loop
boolean_expr: expression INFIXOP expression 
			| boolean_expr AND boolean_expr 
			| boolean_expr OR boolean_expr
            | error RIGHTTB;
loop: WHILE LEFTTB boolean_expr RIGHTTB simple 
	| WHILE LEFTTB boolean_expr RIGHTTB compound
	| FOR LEFTTB forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB simple
    | FOR LEFTTB forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB LEFTBRK compound_list RIGHTBRK
	| LEFTTB forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB compound 
	| FOR LEFTTB SEMICOLON boolean_expr SEMICOLON forupdateopt RIGHTTB simple;
forinitopt: idlist 
		  | TYPE idlist;
forupdateopt: ID LEFTTMB const_expr RIGHTTMB postfixop
            | ID postfixop 
			| ID EQUAL expression;

//return
return: RETURN expression;


%%


int main(){
	printf("Line 1 : ");
	yyparse();
    printf("\n");
	return 0;
}
void yyerror(const char *str){
	printf( "\n> %s at \"%s\".\n", str, yytext);
} 
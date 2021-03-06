%{
	#include<stdio.h>
	int lineCount;
	int charCount;
	void yyerror(const char*);
	int yylex();
	char *yytext;
	int lookup(char *x);
	void dump();
	int tmp;
	char s[20];
%}
%union{
	char *name;
}

%token <name> TYPE VOID STATIC FINAL CLASS MAIN NEW PUBLIC PROTECTED PRIVATE READ PRINT CONST IF ELSEIF ELSE SWITCH CASE BREAK DEFAULT FOR DO WHILE CONTINUE RETURN NEWLINE 
%token <name> SEMICOLON COLON COMMA DOT SQUARE_L SQUARE_R CURLY_L CURLY_R PARENTHESES_L PARENTHESES_R ASSIGN CONDITION DOUBLEPLUS DOUBLEMINUS PLUS MINUS MULTIPLY DIVIDE AND OR INT FLOAT ERRID ID STRING 
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
%type <name> compound com_list
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
error_dec: dec_list dec;
dec: STATIC TYPE idlist 
   | TYPE idlist 
   | array 
   | FINAL TYPE idlist 
   | class_dec 
   | method
   | main
   | object_dec 
   | object_dec dec
	  {printf("error\n");}
   | def;

//variables(Fields)
idlist: ID
	  | idlist COMMA ID 
	  | ID ASSIGN expression 
	  | idlist COMMA ID ASSIGN expression 
	  | invaldid 
	  | ERRID 
	  	{printf("\nLine:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount, yytext);}
	  | idlist COMMA ERRID 
	  	{printf("Line:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount, yytext);};

//error statement of invalid ID
invaldid: idlist ID 
		  {printf("\nLine:%d, 1st char : %d, a syntax error that need a comma between two variables at \"%s\".\n",lineCount, charCount,yytext);}; 
array: TYPE SQUARE_L SQUARE_R ID ASSIGN NEW TYPE SQUARE_L INT SQUARE_R;

//object build
object_dec: classname ID ASSIGN NEW classname PARENTHESES_L PARENTHESES_R 
		  | TYPE ID PARENTHESES_L PARENTHESES_R compound;

//class definition
class_dec: CLASS classname CURLY_L dec_list SEMICOLON method CURLY_R
		 | CLASS classname CURLY_L dec_list SEMICOLON main CURLY_R 
		 | CLASS classname CURLY_L dec_list SEMICOLON CURLY_R 
		 | CLASS classname CURLY_L dec_list CURLY_R
		 | CLASS classname CURLY_L dec_list SEMICOLON stmt_list SEMICOLON CURLY_R;
classname: ID;

//method declaration
method: method_modifier TYPE ID PARENTHESES_L argument PARENTHESES_R CURLY_L stmt_list CURLY_R 
	  | TYPE ID PARENTHESES_L argument PARENTHESES_R CURLY_L stmt_list CURLY_R 
	  | method_modifier TYPE ID PARENTHESES_L PARENTHESES_R CURLY_L stmt_list CURLY_R 
	  | TYPE ID PARENTHESES_L PARENTHESES_R CURLY_L stmt_list CURLY_R 
	  | VOID ID PARENTHESES_L PARENTHESES_R argument CURLY_L stmt_list CURLY_R 
	  | VOID ID PARENTHESES_L PARENTHESES_R compound;
	  
method_modifier: PUBLIC 
			   | PROTECTED 
			   | PRIVATE;

//main declaration
main: MAIN PARENTHESES_L PARENTHESES_R compound 
	| MAIN PARENTHESES_L argument PARENTHESES_R compound 
	| TYPE MAIN PARENTHESES_L PARENTHESES_R compound 
	| VOID MAIN PARENTHESES_L PARENTHESES_R compound 
	| TYPE MAIN PARENTHESES_L argument PARENTHESES_R compound 
	| VOID MAIN PARENTHESES_L argument PARENTHESES_R compound;
argument: TYPE ID 
		| TYPE ID COMMA argument;

//statements
stmt_list: stmt 
		 | stmt_list SEMICOLON 
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
// compound: CURLY_L dec_list SEMICOLON stmt_list CURLY_R 
// 		| CURLY_L dec_list SEMICOLON stmt_list SEMICOLON CURLY_R 
// 		| CURLY_L stmt_list SEMICOLON CURLY_R 
// 		| CURLY_L stmt_list CURLY_R 
// 		| CURLY_L dec_list CURLY_R 
// 		| CURLY_L dec_list SEMICOLON CURLY_R 
// 		| CURLY_L dec_list SEMICOLON stmt_list dec_list SEMICOLON CURLY_R
// 		| loop;

compound: CURLY_L com_list CURLY_R
		| loop com_list;
com_list: dec_list SEMICOLON 
		| ID ASSIGN expression
		| ID ASSIGN expression com_list
		| ID ASSIGN expression SEMICOLON
		| ID ASSIGN expression SEMICOLON com_list
		| TYPE ID COMMA ID COMMA ID SEMICOLON compound
        | stmt_list
        | stmt_list SEMICOLON
		| dec_list SEMICOLON com_list
        | stmt_list com_list;


//simple
simple: name ASSIGN expression 
	  | PRINT PARENTHESES_L expression PARENTHESES_R 
	  | READ PARENTHESES_L name PARENTHESES_R 
	  | name DOUBLEPLUS 
	  | name DOUBLEMINUS 
	  | expression 
	  | PRINT PARENTHESES_L STRING factor PARENTHESES_R;
name: ID 
	| ID DOT ID;

//expression
expr_list: expression COMMA expr_list 
		 | expression;
expression: term 
		  | expression PLUS term 
		  | expression MINUS term;

//variables assignment
def: ID ASSIGN expr_list;
term: factor MULTIPLY factor 
	| factor DIVIDE factor 
	| factor
	| factor MULTIPLY factor DIVIDE factor
	| factor DIVIDE factor MULTIPLY factor;
factor: ID 
	  | const_expr 
	  | PARENTHESES_L expression PARENTHESES_R 
	  | prefixop ID 
	  | ID postfixop 
	  | method_invocation 
	  | ID SQUARE_L INT SQUARE_R;
prefixop: DOUBLEPLUS 
		| DOUBLEMINUS 
		| PLUS 
		| MINUS;
postfixop: DOUBLEPLUS 
		 | DOUBLEMINUS;
const_expr: INT 
		  | FLOAT;

//method_invocation 
method_invocation: name PARENTHESES_L expr_list PARENTHESES_R 
				 | name PARENTHESES_L PARENTHESES_R;
method_call: method_invocation SEMICOLON;

//conditional
conditional: IF PARENTHESES_L boolean_expr PARENTHESES_R simple 
		   | IF PARENTHESES_L boolean_expr PARENTHESES_R compound 
		   | IF PARENTHESES_L boolean_expr PARENTHESES_R simple ELSE simple 
		   | IF PARENTHESES_L boolean_expr PARENTHESES_R simple ELSE compound 
		   | IF PARENTHESES_L boolean_expr PARENTHESES_R simple ELSE conditional
		   | IF PARENTHESES_L boolean_expr PARENTHESES_R CURLY_L ELSE {printf("\n> A syntax error at \"%s\".", yytext);} com_list CURLY_R;

//loop
boolean_expr: expression CONDITION expression 
			| boolean_expr AND boolean_expr 
			| boolean_expr OR boolean_expr;

loop: WHILE PARENTHESES_L boolean_expr PARENTHESES_R simple 
	| WHILE PARENTHESES_L boolean_expr PARENTHESES_R compound 
	| FOR PARENTHESES_L forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt PARENTHESES_R simple
	| FOR PARENTHESES_L forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt PARENTHESES_R CURLY_L com_list CURLY_R 
	| PARENTHESES_L forinitopt SEMICOLON boolean_expr SEMICOLON forupdateopt PARENTHESES_R compound 
	| FOR PARENTHESES_L SEMICOLON boolean_expr SEMICOLON forupdateopt PARENTHESES_R simple;
forinitopt: idlist 
		  | TYPE idlist;
forupdateopt: ID postfixop 
			| ID ASSIGN expression;

//return
return: RETURN expression;
%%
int main(){
	printf("Line 1 : ");
	yyparse();//YACC??????yyparse()??????yylex() ???????????????parsing
	printf("\n");
	return 0;
}
void yyerror(const char *str){
	printf( "\nLine %d, 1st char: %d, %s at \"%s\".", lineCount, charCount, str, yytext);
} 





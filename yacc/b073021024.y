%{

	#include<stdio.h>
	void yyerror(const char*); // handles error
	int lookup(char s[]); // check symbol table
	int yylex(); // declare lex
	int f = -1; // for duplicate identifier
	char *yytext; 
	unsigned charCount, lineCount; // line num and position

%}

%union{
	char *name; // define type
}

//define token and type
%token <name> TYPE VOID STATIC FINAL CLASS MAIN NEW PUBLIC PROTECTED PRIVATE READ PRINT CONST IF ELSEIF ELSE SWITCH CASE BREAK DEFAULT FOR DO WHILE CONTINUE RETURN SEMICOLON COLON COMMA DOT square_brackets_l Brackets_l Brackets_r square_brackets_r Parentheses_l Parentheses_r EQUAL DOUBLEPLUS DOUBLEMINUS PLUS MINUS MULTIPLY DIVIDE INFIXOP SYMBOL AND OR INT FLOAT INVALID ID STRING 
%type <name> compound_list return forupdateopt forinitopt loop bool conditional method_call method_invocation const postfix prefix factor term def expression expr_list name  simple compound stmt stmt_list argument main method_type method class object array idlist dec dec_list


%%


//decaration
dec_list: dec 
		| dec_list SEMICOLON dec 
		| dec_list class 
		| dec_list dec;
dec: STATIC TYPE idlist 
   | TYPE idlist { // handles duplicate indentifier.
		int tmp = lookup($2);
		if(f == tmp)
			printf("\n> \'%s\' is a duplicate indentifier.",$2);
		f = tmp;
		}
   | FINAL TYPE idlist 
   | array 
   | main
   | method
   | class 
   | object
   | object dec { //handles SEMICOLON error
	   printf("\nLine %d, 1st char: %d, a syntax error at \"%s\"",lineCount,charCount-5,$2);}
   | def;

//variable
idlist: ID 
	  | idlist COMMA ID 
      | ID square_brackets_l const square_brackets_r EQUAL expression
	  | ID EQUAL expression 
	  | idlist COMMA ID EQUAL expression 
	  | ID ID SEMICOLON
		  {	  // handles comma error
			  printf("\nLine %d, 1st char: %d, a syntax error at \"%s\"",lineCount,charCount-2,$2);}; 

//array
array: TYPE square_brackets_l square_brackets_r ID EQUAL NEW TYPE square_brackets_l INT square_brackets_r;

//main
main: MAIN Parentheses_l Parentheses_r compound  // e.g. main()
	| MAIN Parentheses_l argument Parentheses_r compound // e.g. main(int argc)
	| TYPE MAIN Parentheses_l Parentheses_r compound // e.g. main(int argc)
	| VOID MAIN Parentheses_l Parentheses_r compound // e.g. viod main()
	| TYPE MAIN Parentheses_l argument Parentheses_r compound  // e.g. int main(int argc)
	| VOID MAIN Parentheses_l argument Parentheses_r compound; // e.g. viod main(int argc)
	// main declaration
argument: TYPE ID // e.g. int i
		| TYPE ID COMMA argument; // e.g. int i,j;
		//function argument


//method
method: method_type TYPE ID Parentheses_l argument Parentheses_r Brackets_l stmt_list Brackets_r 
		// e.g. public int test(int i) { ... }
	  | TYPE ID Parentheses_l argument Parentheses_r Brackets_l stmt_list Brackets_r 
	  	// e.g. int test(int i) { ... }
	  | method_type TYPE ID Parentheses_l Parentheses_r Brackets_l stmt_list Brackets_r 
	  	// e.g. public int test() { ... }
	  | TYPE ID Parentheses_l Parentheses_r Brackets_l stmt_list Brackets_r 
	    // e.g.  int test() { ... }
	  | VOID ID Parentheses_l Parentheses_r argument Brackets_l stmt_list Brackets_r 
	   // e.g.  viod test(int i) { ... }
	  | VOID ID Parentheses_l Parentheses_r compound;
	   // e.g.  viod test(int i) { ... }
	  //function declaration
method_type: PUBLIC 
		   | PROTECTED 
		   | PRIVATE;
method_invocation: name Parentheses_l expr_list Parentheses_r 
					// e.g. test(1,2)
				 | name Parentheses_l Parentheses_r;
				 	// e.g. test()
method_call: method_invocation SEMICOLON;
					// e.g. test(1,2);

//class
class: CLASS ID Brackets_l dec_list SEMICOLON method Brackets_r 
		// e.g. class test { <dec_list> ; <methed> }
	 | CLASS ID Brackets_l dec_list SEMICOLON main Brackets_r 
	    // e.g. class test { <dec_list> ; <main> }
	 | CLASS ID Brackets_l dec_list SEMICOLON Brackets_r 
	    // e.g. class test { <dec_list> ; }
	 | CLASS ID Brackets_l dec_list Brackets_r
	    // e.g. class test { <dec_list> }
	 | CLASS ID Brackets_l dec_list SEMICOLON stmt_list SEMICOLON Brackets_r;
	    // e.g. class test { <dec_list> ; ... }
	//class declaration

//object
object: ID ID EQUAL NEW ID Parentheses_l Parentheses_r
		// e.g. Point lowerLeft = new Point();
	  | TYPE ID Parentheses_l Parentheses_r compound;
	  	// e.g. int test() { ... }

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
compound: Brackets_l compound_list Brackets_r
			// e.g. {...}
		| loop;
			// for, while...
compound_list: dec_list SEMICOLON 
            | stmt_list
            | stmt_list SEMICOLON
            | dec_list SEMICOLON compound_list
            | stmt_list compound_list

// simple (one line)
 simple: name EQUAL expression 
		// a = ;b
      | name square_brackets_l const square_brackets_r postfix SEMICOLON
	  | PRINT Parentheses_l expression Parentheses_r 
	  | READ Parentheses_l name Parentheses_r
	  | name DOUBLEPLUS 
	  | name DOUBLEMINUS 
	  | PRINT Parentheses_l STRING factor Parentheses_r;
	  	// e.g. print("aa%s",a)
name: ID 
	| ID DOT ID;

//expression
expr_list: expression COMMA expr_list 
		 | expression;
expression: term 
		  | expression PLUS term 
		  	// e.g. ... +2/2
		  | expression MINUS term;
		  	// e.g. ... -2/2

//assignment
def: ID EQUAL expr_list;
	  //e.g.  a = 2+2/2
term: factor
	  // e.g. 2 
	| factor DIVIDE factor 
	  //e.g. a/2
	| factor MULTIPLY factor 
	  //e.g. a*2
	| factor MULTIPLY factor DIVIDE factor
	  //e.g. a*2/s
	| factor DIVIDE factor MULTIPLY factor;
	   //e.g. a/2*s
factor: ID 
	  | const 
	  | Parentheses_l expression Parentheses_r 
	  | prefix ID 
	  | ID postfix 
	  | method_invocation 
	  | ID square_brackets_l INT square_brackets_r;
prefix: DOUBLEPLUS // ++
		| DOUBLEMINUS  // --
		| PLUS 
		| MINUS;
postfix: DOUBLEPLUS // ++
	   | DOUBLEMINUS; // --
const: INT 
	 | FLOAT;

//loop
bool: expression INFIXOP expression 
			// a<b
			| bool AND bool
			 // a&&b
			| bool OR bool
			 // a||b
            | error Brackets_l{yyerror;};
			 // error detect
loop: WHILE Parentheses_l bool Parentheses_r  simple 
		// while(a<b) ...
	| WHILE Parentheses_l bool Parentheses_r compound
	    // while(a<b) {...}
	| FOR Parentheses_l forinitopt SEMICOLON bool SEMICOLON forupdateopt Parentheses_r  simple
	   // for(int i=0 ; i<2 ; i++) ...
	| FOR Parentheses_l forinitopt SEMICOLON bool SEMICOLON forupdateopt Parentheses_r Brackets_l compound_list Brackets_r
	  // for(int i=0 ; i<2 ; i++) {...}
	| Parentheses_l forinitopt SEMICOLON bool SEMICOLON forupdateopt Parentheses_r compound 
	  // for(int i=0 ; i<2 ; i++) {...}
	| FOR Parentheses_l SEMICOLON bool SEMICOLON forupdateopt Parentheses_r  simple;
	 // for( ; i<2 ; i++) {...}
forinitopt: idlist 
		  | TYPE idlist;
forupdateopt: ID square_brackets_l const square_brackets_r postfix
            | ID postfix 
			| ID EQUAL expression;

//conditional
conditional: IF Parentheses_l bool Parentheses_r  simple 
			// if (a<2) ...
		   | IF Parentheses_l bool Parentheses_r  simple ELSE  simple 
		    // if (a<2) ... else ...
		   | IF Parentheses_l bool Parentheses_r  simple ELSE compound 
		    // if (a<2) ... else {...}
		   | IF Parentheses_l bool Parentheses_r  simple ELSE conditional
		   	// if (a<2) ... else if(...) ...
		   | IF Parentheses_l bool Parentheses_r Brackets_l ELSE compound Brackets_r ;
		    // error detect

//return
return: RETURN expression;

%%

int main()
{
	printf("Line 1 : ");
	yyparse();
    printf("\n");
	return 0;
}

void yyerror(const char *str)
{
	printf("\nLine %d, 1st char: %d, %s at \"%s\".\n",lineCount,charCount,str,yytext);
}
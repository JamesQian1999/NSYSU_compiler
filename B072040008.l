%{
#include<stdio.h>
#include "y.tab.h"
unsigned charCount = 1, idCount = 0, lineCount = 1;
int cnt(char* x, int len);
void creat();
int lookup(char *x);
int insert(char*x);
void dump();
char* symbol_table[1000];
int top,i;
%}
type 	int|float|long|char|string|boolean|short

dot 	\.
plus	\+
dplus 	\+\+
minus	\-
dminus 	\-\-
m		\*
d		\/
assign	\=
condition 	\<|\<\=|\>\=|\>|\=\=|\!\=|\!
and		\&\&
or		\|\|

space 	[ \t] 
eol 	\n
comma	\,
colon	\:
semicolon	\;
p_l		\(
p_r		\)
s_l		\[
s_r		\]
c_l		\{
c_r		\}
/* You should write your own regular expression. */
id		[A-Za-z\_]+[0-9a-zA-Z\_\$]*
errid	[0-9\^\#]+[a-zA-Z\_\$]+
integer [-]?[0-9][0-9]*
float   [+-]?[0-9]+(\.[0-9]+)?([Ee][+-]?[0-9]+)?
string 	\"[^\'\"\\]*(\\[\'\"\\])*[^\'\"\\]*\"
errstring	\"[\'\"\\][^\'\"\\]*[\'\"\\]\"
comments	(\/\/.*\n)|(\/\*([^\*]|\*+[^\*\/])*\*+\/)
%%

{type} {
	charCount+=yyleng;
	printf("%s", yytext);
	return TYPE;
}
void {
	charCount+=yyleng;
	printf("%s", yytext);
	return VOID;
}

static {
	charCount+=yyleng;
	printf("%s", yytext);
	return STATIC;
}
final {
	charCount+=yyleng;
	printf("%s", yytext);
	return FINAL;
}
class {
	charCount+=yyleng;
	printf("%s", yytext);
	return CLASS;
}
main {
	charCount+=yyleng;
	printf("%s", yytext);
	return MAIN;
}
new {
	charCount+=yyleng;
	printf("%s", yytext);
	return NEW;
}
public {
	charCount+=yyleng;
	printf("%s", yytext);
	return PUBLIC;
}
protected {
	charCount+=yyleng;
	printf("%s", yytext);
	return PROTECTED;
}
private {
	charCount+=yyleng;
	printf("%s", yytext);
	return PRIVATE;
}
read {
	charCount+=yyleng;
	printf("%s", yytext);
	return READ;
}
print {
	charCount+=yyleng;
	printf("%s", yytext);
	return PRINT;
}
const {
	charCount+=yyleng;
	printf("%s", yytext);
	return CONST;
}
if {
	charCount+=yyleng;
	printf("%s", yytext);
	return IF;
}
elseif {
	charCount+=yyleng;
	printf("%s", yytext);
	return ELSEIF;
}
else {
	charCount+=yyleng;
	printf("%s", yytext);
	return ELSE;
}
switch {
	charCount+=yyleng;
	printf("%s", yytext);
	return SWITCH;
}
case {
	charCount+=yyleng;
	printf("%s", yytext);
	return CASE;
}
break {
	charCount+=yyleng;
	printf("%s", yytext);
	return BREAK;
}
default {
	charCount+=yyleng;
	printf("%s", yytext);
	return DEFAULT;
}
for {
	charCount+=yyleng;
	printf("%s", yytext);
	return FOR;
}
do {
	charCount+=yyleng;
	printf("%s", yytext);
	return DO;
}
while {
	charCount+=yyleng;
	printf("%s", yytext);
	return WHILE;
}
continue {
	charCount+=yyleng;
	printf("%s", yytext);
	return CONTINUE;
}
return {
	charCount+=yyleng;
	printf("%s", yytext);
	return RETURN;
}
semicolon {
	charCount+=yyleng;
	printf("%s", yytext);
	return SEMICOLON;
}
colon {
	charCount+=yyleng;
	printf("%s", yytext);
	return COLON;
}
{comma} {
	charCount+=yyleng;
	printf("%s", yytext);
	return COMMA;
}
{p_l} {
	charCount+=yyleng;
	printf("%s", yytext);
	return PARENTHESES_L;
}
{p_r} {
	charCount+=yyleng;
	printf("%s", yytext);
	return PARENTHESES_R;
}
{s_l} {
	charCount+=yyleng;
	printf("%s", yytext);
	return SQUARE_L;
}
{s_r} {
	charCount+=yyleng;
	printf("%s", yytext);
	return SQUARE_R;
}
{c_l} {
	charCount+=yyleng;
	printf("%s", yytext);
	return CURLY_L;
}
{c_r} {
	charCount+=yyleng;
	printf("%s", yytext);
	return CURLY_R;
}
{condition} {
	charCount += yyleng;
	printf("%s", yytext);
	return CONDITION;
}
{assign} {
	charCount+=yyleng;
	printf("%s", yytext);
	return ASSIGN;
}
{plus} {
	charCount+=yyleng;
	printf("%s", yytext);
	return PLUS;
}
{minus} {
	charCount+=yyleng;
	printf("%s", yytext);
	return MINUS;
}
{dplus} {
	charCount+=yyleng;
	printf("%s", yytext);
	return DOUBLEPLUS;
}
{dminus} {
	charCount+=yyleng;
	printf("%s", yytext);
	return DOUBLEMINUS;
}
{m} {
	charCount+=yyleng;
	printf("%s", yytext);
	return MULTIPLY;
}
{d} {
	charCount+=yyleng;
	printf("%s", yytext);
	return DIVIDE;
}
{and} {
	charCount+=yyleng;
	printf("%s", yytext);
	return AND;
}
{or} {
	charCount+=yyleng;
	printf("%s", yytext);
	return OR;
}
{space} {
	charCount++;
	printf("%s", yytext);
}
{eol}   {
	lineCount++;
	charCount = 1;
	printf("%sline %d : ", yytext, lineCount);
}
{id} {
	charCount += yyleng;
	printf("%s", yytext);
	return ID;
}
{errid} {
	charCount += yyleng;
	printf("%s", yytext);
	return ERRID;
}
{integer} {
	charCount += yyleng;
	printf("%s", yytext);
	return INT;
}
{float} {
	charCount += yyleng;
	printf("%s", yytext);
	return FLOAT;
}
{string} {
	charCount += yyleng;
	printf("%s", yytext);
	return STRING;
}
{dot} {
	charCount += yyleng;
	printf("%s", yytext);
	return DOT;
}
{comments} {
	for(i=0;i<yyleng;i++){
		printf("%c", yytext[i]);
		if(yytext[i]=='\n'){
			lineCount++;
			printf("line %d : ", lineCount);
		}
	}
	charCount += yyleng;
}
{errstring} {
	printf("%s", yytext);
	charCount += yyleng;
	//bad
}
%%
int yywrap(){
	return 1;
}
int cnt(char* x, int len){
	int i, cc=0;
	for(i=0;i<len;i++){
		if(x[i]=='\n')
			cc++;
	}
	return cc;
}
void creat(){
	memset(symbol_table, '\0', 100);
	top=0;
}
int lookup(char *x){
	int i;
	for(i=0;i<top;i++){
		if(!strcmp(symbol_table[i], x))
			return i;
	}
	insert(x);
	return -1;
}
int insert(char *x){
	char* tmp = malloc(sizeof(char)*(strlen(x)+1));
	strcpy(tmp, x);
	symbol_table[top++]=tmp; 
	return top-1;
}
void dump(){
	int i;
	printf("The symbol table contains:\n");
	for(i=0;i<top;i++)
		printf("%s\n", symbol_table[i]);
}
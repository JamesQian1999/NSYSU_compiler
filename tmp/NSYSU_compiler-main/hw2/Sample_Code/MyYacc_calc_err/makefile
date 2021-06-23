all:	clean y.tab.c lex.yy.c
	gcc lex.yy.c y.tab.c -ly -lfl -o calc

y.tab.c:
	bison -y -d calc.y

lex.yy.c:
	flex calc.l

clean:
	rm -f calc lex.yy.c y.tab.c y.tab.h

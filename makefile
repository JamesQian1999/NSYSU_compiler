PROG_lex = lex.yy.c
PROG_yacc = y.tab.c

all: $(PROG_lex) $(PROG_yacc)
	gcc $(PROG_lex) $(PROG_yacc) -ly -lfl -o demo

$(PROG_lex): B072040008.l
	flex B072040008.l

$(PROG_yacc): B072040008.y
	bison -y -d B072040008.y

clean:
	rm -f demo $(PROG_lex) $(PROG_yacc) y.tab.h
PROG_lex = lex.yy.c
PROG_yacc = y.tab.c

all:		$(PROG_lex) $(PROG_yacc)
		gcc $(PROG_lex) $(PROG_yacc) -ly -o demo

$(PROG_lex):	b073021024.l
		flex b073021024.l

$(PROG_yacc):	b073021024.y
		bison -y -d b073021024.y

clean:
		rm demo $(PROG_lex) $(PROG_yacc)


unsigned long long cpos = 1, tokc = 0, lc = 1;
void logger(unsigned long long _line, unsigned long long _pos, 
            const char *_type, const char *_str);
int newline_in_comment(const char * _str);
%}


/* The flex does not fit the POSIX regex... */
Reserved_word boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while
ID           [A-Za-z_\$][_[:alnum:]\$]*
Integer      \-?[0-9]+
Float        [+-]?([0-9]+(\.[0-9]+)?|\.[0-9]+)([eE][+-]?[0-9]+)?.
String       \"([^\\\"]|\\\")*\"
Whitespace   [\ \t]
Comments     \/\*[^*]*\*+(?:[^\/*][^*]*\*+)*\/|\/\/.*\n
Newline      \r?\n

/* Symbols */
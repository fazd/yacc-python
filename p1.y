%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
int power(int a, int b);
int divEnt(int a, int b);
%}

%union {int num; char id;}         /* Yacc definitions */
%start line
%token print
%token exit_command
%token AND
%token BREAK
%token CONTINUE
%token DEF
%token ELIF
%token ELSE
%token FOR
%token IF
%token IMPORT
%token IN
%token IS
%token NOT
%token OR
%token PASS
%token PRINT
%token RETURN
%token WHILE
%token TRUE
%token FALSE
%token RANGE
%token bitrightig
%token bitleftig
%token divEntig
%token potig
%token masig
%token menig
%token multig
%token divig
%token andig
%token orig
%token xorig
%token modig
%token pot
%token bitleft
%token bitright
%token menorig
%token mayorig
%token dif
%token distin
%token igual


%token divent
%token mod
%token and
%token or
%token xor
%token negac
%token menorque
%token mayorque
%token parabre
%token parcierr
%token corabre
%token corcierr

%token coma
%token dospunt
%token punt

%token tab

%token <num> number
%token <id> identifier
%type <num> line exp T F X term 
%type <id> assignment

%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment ';'	 	     {;}
		| exit_command ';'		     {exit(EXIT_SUCCESS);}
		| print exp ';'			     {printf("Printing %d\n", $2);}
		| line assignment ';'	     {;}
		| line print exp ';'	     {printf("Printing %d\n", $3);}
		| line exit_command ';'	     {exit(EXIT_SUCCESS);}
        | line AND ';'               {printf("estoy viendo un AND\n");}
        | line BREAK ';'             {printf("estoy viendo un BREAK\n");}
        | line CONTINUE ';'          {printf("estoy viendo un CONTINUE\n");}
        | line DEF ';'               {printf("estoy viendo un DEF\n");}
        | line ELIF ';'              {printf("estoy viendo un ELIF\n");}
        | line ELSE ';'              {printf("estoy viendo un ELSE\n");}
        | line FOR ';'               {printf("estoy viendo un FOR\n");}
        | line IF ';'                {printf("estoy viendo un IF\n");}
        | line IMPORT ';'            {printf("estoy viendo un IMPORT\n");}
        | line IN ';'                {printf("estoy viendo un IN\n");}
        | line IS ';'                {printf("estoy viendo un IS\n");}
        | line NOT ';'               {printf("estoy viendo un NOT\n");}
        | line OR ';'                {printf("estoy viendo un OR\n");}
        | line PASS ';'              {printf("estoy viendo un PASS\n");}
        | line RETURN ';'            {printf("estoy viendo un RETURN\n");}
        | line WHILE ';'             {printf("estoy viendo un WHILE\n");}
        | line TRUE ';'              {printf("estoy viendo un TRUE\n");}
        | line FALSE ';'             {printf("estoy viendo un FALSE\n");}
        | line RANGE ';'             {printf("estoy viendo un RANGE\n");}
        | line bitrightig ';'        {printf("estoy viendo un bitrightig\n");}
        | line bitleftig ';'         {printf("estoy viendo un bitleftig\n");}
        | line divEntig ';'          {printf("estoy viendo un divEntig\n");}
        | line potig ';'             {printf("estoy viendo un potig\n");}
        | line masig ';'             {printf("estoy viendo un masig\n");}
        | line menig ';'             {printf("estoy viendo un menig\n");}
        | line multig ';'            {printf("estoy viendo un multig\n");}
        | line divig ';'             {printf("estoy viendo un divig\n");}
        | line andig ';'             {printf("estoy viendo un andig\n");}
        | line orig ';'              {printf("estoy viendo un orig\n");}
        | line xorig ';'             {printf("estoy viendo un xorig\n");}
        | line modig ';'             {printf("estoy viendo un modig\n");}
        | line pot ';'               {printf("estoy viendo un pot\n");}
        | line bitleft ';'           {printf("estoy viendo un bitleft\n");}
        | line bitright ';'          {printf("estoy viendo un bitright\n");}
        | line menorig ';'           {printf("estoy viendo un menorig\n");}
        | line mayorig ';'           {printf("estoy viendo un mayorig\n");}
        | line dif ';'               {printf("estoy viendo un dif\n");}
        | line distin ';'            {printf("estoy viendo un distin\n");}
        | line igual ';'             {printf("estoy viendo un igual\n");}
        | line divent ';'            {printf("estoy viendo un divent\n");}
        | line mod ';'               {printf("estoy viendo un mod\n");}
        | line and ';'               {printf("estoy viendo un and\n");}
        | line or ';'                {printf("estoy viendo un or\n");}
        | line xor ';'               {printf("estoy viendo un xor\n");}
        | line negac ';'             {printf("estoy viendo un negac\n");}
        | line menorque ';'          {printf("estoy viendo un menorque\n");}
        | line mayorque ';'          {printf("estoy viendo un mayorque\n");}
        | line parabre ';'           {printf("estoy viendo un parabre\n");}
        | line parcierr ';'          {printf("estoy viendo un parcierr\n");}
        | line corabre ';'           {printf("estoy viendo un corabre\n");}
        | line corcierr ';'          {printf("estoy viendo un corcierr\n");}
        | line coma ';'              {printf("estoy viendo un coma\n");}
        | line dospunt ';'           {printf("estoy viendo un dospunt\n");}
        | line punt ';'              {printf("estoy viendo un punt\n");}
        | line tab ';'               {printf("estoy viendo un tab\n")}
        ;

assignment : identifier '=' exp  { updateSymbolVal($1,$3); }
		   ;

exp     : exp bitleft X     {$$ = $1  << $3;}
        | exp bitright X    {$$ = $1 >> $3;}
        | exp or X          {$$ = $1 | $3;}
        | exp and X         {$$ = $1 & $3;}
        | exp OR X          {$$ = $1 | $3;}
        | exp AND X         {$$ = $1 & $3;}
        | exp xor X         {$$ = $1 ^ $3;}
        | X                 {$$ = $1;}

X       : X '+' T           {$$ = $1 + $3;}
        | X '-' T           {$$ = $1 - $3;}
        | T                 {$$ = $1;}
        ;

T       : T '*' F           {$$ = $1 * $3;}
        | T '/' F           {$$ = $1 / $3;}
        | T divent F        {$$ = divEnt($1,$3);}
        | T pot F           {$$ = power($1,$3);}
        | T mod F           {$$ = $1 % $3;}
        | F                 {$$ = $1;}
        /* TODO: Agregar // */
        ;



F       : parabre exp parcierr       {$$ = $2;}
        | '-' F                      {$$ = -$2;}
        | term                       {$$ = $1;}
        ;



term   	: number                {$$ = $1;}
		| identifier			{$$ = symbolVal($1);} 
        ;

%%                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int power(int a, int b)
{
    int p = 1;
    for(int i = 1; i <=b; i++){
        p= p*a;
    }
    return p;
}

int divEnt(int a, int b)
{
    return a/b;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "Hay un error %s\n", s);} 
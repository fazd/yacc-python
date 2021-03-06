%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include<string.h> 

int symbols[500];
int arrNum[500];
int symbolVal(int symbol);
void updateSymbolVal(int symbol, int val);
int power(int a, int b);
int line = 0;
int divEnt(int a, int b);
%}

%union {int num; int id; char another;}         /* Yacc definitions */
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
%token gtg
%token endl

%token <num> number
%token <id> identifier
%type <num> line exp T F X term function 
%type <id> assignment  

%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment endl	      {line++;}
        | exit_command endl 	      {exit(EXIT_SUCCESS);}
        | print exp endl       	      {line++; printf("Printing %d\n", $2);}
        | line assignment endl 	      {line+=2;}
        | function endl               {line+=2;}
        | line function endl          {line++;}
        | line print exp endl	      {line++; printf("Printing %d\n", $3);}
        | line exit_command endl      {line++; exit(EXIT_SUCCESS);}
        | line endl                   {line++;}
        | line AND endl               {printf("estoy viendo un AND\n");}
        | line BREAK endl             {printf("estoy viendo un BREAK\n");}
        | line CONTINUE endl          {printf("estoy viendo un CONTINUE\n");}
        | line DEF endl               {printf("estoy viendo un DEF\n");}
        | line ELIF endl              {printf("estoy viendo un ELIF\n");}
        | line ELSE endl              {printf("estoy viendo un ELSE\n");}
        | line FOR endl               {printf("estoy viendo un FOR\n");}
        | line IF endl                {printf("estoy viendo un IF\n");}
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
        | line gtg ';'               {printf("estoy viendo una cadena\n");}
        ;

assignment : identifier '=' exp  { updateSymbolVal($1,$3); }
           | identifier '=' gtg  { ;} //esto es una cadena no tocar
           | identifier '=' identifier v_identifier
		   ;

exp     : exp bitleft X     {$$ = $1  << $3;}
        | exp bitright X    {$$ = $1 >> $3;}
        | exp or X          {$$ = $1 | $3;}
        | exp and X         {$$ = $1 & $3;}
        | exp OR X          {$$ = $1 | $3;}
        | exp AND X         {$$ = $1 & $3;}
        | exp xor X         {$$ = $1 ^ $3;}
        | exp menorig X     {$$ = $1 <= $3;}
        | exp mayorig X     {$$ = $1 >= $3;}
        | exp dif X         {$$ = $1 != $3;}
        | exp distin X      {$$ = $1 != $3;}
        | exp menorque X    {$$ = $1 < $3;}
        | exp mayorque X    {$$ = $1 > $3;}
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


term   	: number                        {$$ = $1;}
	| identifier			{$$ = symbolVal($1);} 
        ;

vec     : identifier                  {;}
        | identifier coma vec                    {;}
        ;

v_identifier : corabre vec  corcierr     {;}
             ;  

function : DEF identifier parabre vec parcierr dospunt endl line RETURN identifier {;}


%%                     /* C code */

int computeSymbolIndex(int token)
{       
	return token;
} 

/* returns the value of a given symbol */
int symbolVal(int symbol)
{
        int bucket = computeSymbolIndex(symbol);
	int type = symbols[bucket]; 
        if(type == 0){
                return arrNum[bucket]; 
        }
	
}

/* updates the value of a given symbol */
void updateSymbolVal(int symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	int type = symbols[bucket]; 
        if(type == 0){
                arrNum[bucket] = val; 
        }
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

void yyerror (char *s) {fprintf (stderr, "Hay un error en la linea %d %s\n",(line+1), s);} 
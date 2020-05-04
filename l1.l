%{
#include "p1.tab.h"
#include<stdio.h> 
#include<string.h> 
#include <ctype.h> 

int cont = 0;
int sw = 0;
int idcont=0;
int i = 0;
int found=0;
int asID=0;
int comment = 0;
int err = 0;
char array[200][70];
char wordaux[60];

void yyerror (char *s);
int yylex();
%}
%%
"print"				    {return print;}
"exit"				    {return exit_command;}
"and"                   {return AND;}
"break"                 {return BREAK;}
"continue"              {return CONTINUE;}
"def"                   {return DEF;}
"elif"                  {return ELIF;}
"else"                  {return ELSE;}
"for"                   {return FOR;}
"if"                    {return IF;}
"import"                {return IMPORT;}
"in"                    {return IN;}
"is"                    {return IS;}
"not"                   {return NOT;}
"or"                    {return OR;}
"pass"                  {return PASS;}
"return"                {return RETURN;}
"while"                 {return WHILE;}

"True"                  {return TRUE;}
"False"                 {return FALSE;}
"range"                 {return RANGE;}
">>="                   {return bitrightig;}
"<<="                   { return bitleftig; }
"//="                   { return divEntig; }
"**="                   { return potig; }

"+="                    { return masig; }
"-="                    { return menig; }
"*="                    { return multig; }
"/="                    { return divig; }
"&="                    { return andig; }
"|="                    { return orig; }
"^="                    { return xorig; }
"%="                    { return modig; }
"**"                    { return pot; }
"<<"                    { return bitleft; }
">>"                    { return bitright; }
"<="                    { return menorig; }
">="                    { return mayorig; }
"!="                    { return dif; }
"<>"                    { return distin; }
"=="                    { return igual; }
"//"                    { return divent; }
"%"                     { return mod; }
"&"                     { return and; }
"|"                     { return or; }
"^"                     { return xor; }
"~"                     { return negac; }
"<"                     { return menorque; }
">"                     { return mayorque; }
"("                     { return parabre; }
")"                     { return parcierr; }
"["                     { return corabre; }
"]"                     { return corcierr; }
","                     { return coma; }
":"                     { return dospunt; }
"."                     { return punt; }
"\t"                    { return tab; }
[a-zA-Z_][a-zA-Z0-9_]*	{
    for(i = 0; i < idcont; i++){
        if(strcmp(array[i],yytext)==0){
        asID = i+1;
        found = 1;
        break;
        }
    }
    if(found==0){
        strcpy(array[idcont],yytext);
        asID = idcont+1;
        idcont++;
    }
    found = 0;
    yylval.id = asID; return identifier;
    }

((['][^'".\n]+[']|["][^'".\n]+["])|[’][^'"\n]+[’]) {return gtg;}

[0-9]+                              {yylval.num = atoi(yytext); return number;}
[ \n]                               ;
[-+*/=;]                            {return yytext[0];}
.                                   {ECHO; yyerror ("unexpected character");}


%%
int yywrap (void) {return 1;}

%{
#include "p1.tab.h"
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

[a-zA-Z]			    {yylval.id = yytext[0]; return identifier;}
[0-9]+                  {yylval.num = atoi(yytext); return number;}
[ \n]                 ;
[-+*/=;]                {return yytext[0];}
.                       {ECHO; yyerror ("unexpected character");}


%%
int yywrap (void) {return 1;}

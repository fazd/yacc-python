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
"+"                     { return suma; }
"-"                     { return menos; }
"*"                     { return mult; }
"//"                    { return divent; }
"/"                     { return div; }
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
"="                     { return asig; }
";"                     { return puntoycom; }
","                     { return coma; }
":"                     { return dospunt; }
"."                     { return punt; }

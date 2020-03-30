%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "cparser.tab.hpp"
%}

DIGIT [0-9]
NONDIGIT [_A-Za-z]
HEXADIGIT [0-9A-Fa-z]
OCTADIGIT [0-7]
UNSIGNEDSUFFIX[uU]
LONGSUFFIX[Ll]
INTSUFFIX {UNSIGNEDSUFFIX}{LONGSUFFIX}?|{UNSIGNEDSUFFIX}?{LONGSUFFIX}
FLOATSUFFIX [flFL]
EXPONENTPART [Ee][+-]?{DIGIT}+

%%

auto {return T_AUTO;}
double {return T_DOUBLE;}
int {return T_INT;}
struct {return T_STRUCT;}
break {return T_BREAK;}
else {return T_ELSE;}
long {return T_LONG;}
switch {return T_SWITCH;}
case {return T_CASE;}
enum {return T_ENUM;}
register {return T_REGISTER;}
typedef {return T_TYPEDEF;}
char {return T_CHAR;}
extern {return T_EXTERN;}
return {return T_RETURN;}
union {return T_UNION;}
const {return T_CONST;}
float {return T_FLOAT;}
short {return T_SHORT;}
unsigned  {return T_UNSIGNED;}
continue {return T_CONTINUE;}
for {return T_FOR;}
signed {return T_SIGNED;}
void {return T_VOID;}
default {return T_DEFAULT;}
goto {/*return T_GOTO;*/}
sizeof {return T_SIZEOF;}
volatile {return T_VOLATILE;}
do {return T_DO;}
if {return T_IF;}
static {return T_STATIC;}
while {return T_WHILE;}

{NONDIGIT}({DIGIT}|{NONDIGIT})* {return T_IDENTIFIER;}

{DIGIT}+"."{EXPONENTPART}?{FLOATSUFFIX} {yylval.number = std::stod(yytext);
	return T_FLOAT;}
{DIGIT}*"."{DIGIT}+{EXPONENTPART}?{FLOATSUFFIX} {yylval.number = std::stod(yytext);
	return T_FLOAT;}
{DIGIT}+{EXPONENTPART}{FLOATSUFFIX} {yylval.number = std::stod(yytext);
	return T_FLOAT;}

{DIGIT}+"."{EXPONENTPART}? {yylval.number = std::stod(yytext);
	return T_DOUBLE;}
{DIGIT}*"."{DIGIT}+{EXPONENTPART}? {yylval.number = std::stod(yytext);
	return T_DOUBLE;}
{DIGIT}+{EXPONENTPART} {yylval.number = std::stod(yytext);
	return T_DOUBLE;}

{DIGIT}+{INTSUFFIX}? {yylval.number = std::stoi(yytext, nullptr, 10);
	return T_INT;}
0{OCTADIGIT}+{INTSUFFIX}? {yylval.number = std::stoi(yytext, nullptr, 8);
	return T_INT;}
0[xX]{HEXADIGIT}+{INTSUFFIX}? {yylval.number = std::stoi(yytext, nullptr, 16);
	return T_INT;}

L?'(\\.|[^\\'])+' {std::string charseq = yytext;
	yylval.number = charseq[1];
	return T_CHAR;}

L?\"([^\\\"]|\\.)*\" {yylval.string = new std::string(yytext, 1, strlen(yytext) - 2);
	return T_STRING;}




[+]             { return T_PLUS; }
[+][+]		{ return T_PLUS_PLUS; }
[+][=]            { return T_PLUS_EQUAL; }
[-]             { return T_MINUS; }
[-][-]		{ return T_MINUS_MINUS; }
[-][=]            { return T_MINUS_EQUAL; }
[*]             { return T_TIMES; }
[*][=]            { return T_TIMES_EQUAL; }
[/]             { return T_DIVIDE; }
[/][=]            { return T_DIVIDE_EQUAL; }
[%]		{ return T_PERCENTAGE;}
[=]		{ return T_EQUAL; }
[=][=]		{ return T_BOOL_EQUAL; }
[!][=]		{ return T_NOT_EQUAL; }
[~]		{ return T_TILDE;}
[!]		{ return T_EXCLAMATION;}
[%][=]		{ return T_PERCENTAGE_EQUAL;}
"^"[=]		{ return T_XOR_EQUAL;}
[|][=]		{ return T_OR_EQUAL;}
[&][=]		{ return T_AND_EQUAL;}
[<][<][=]		{ return T_LSHIFT_EQUAL;}
[>][>][=]		{ return T_RSHIFT_EQUAL;}

[#]		{ return T_HASH;}
[#][#]		{ return T_HASH_HASH;}
[:]		{ return T_COLON;}
[;]		{ return T_SEMICOLON;}

[|]		{ return T_BITWISE_OR; }	
[|][|]		{ return T_LOGICAL_OR; }	
[&]		{ return T_BITWISE_AND; }
[&][&]		{ return T_LOGICAL_AND; }

[(]             { return T_L_ROUND_BRACKET; }
[)]             { return T_R_ROUND_BRACKET; }
"["             { return T_L_SQUARE_BRACKET; }
"]"             { return T_R_SQUARE_BRACKET; }
[{]             { return T_L_CURLY_BRACKET; }
[}]             { return T_R_CURLY_BRACKET; }

[.]		{ return T_DOT;}
[,]		{ return T_COMMA;}
[?]		{ return T_QUESTION;}                          

[<]		{ return T_SMALLER; }
[<][<]		{ return T_SMALLER_SMALLER; }
[<][=]		{ return T_SMALLER_EQUAL;};
[>]		{ return T_BIGGER; }
[>][>]		{ return T_BIGGER_BIGGER; }
[>][=]		{ return T_BIGGER_EQUAL;}

[-][>]		{ return T_POINT_TO;}
"^"		{ return T_BITWISE_XOR;}

[ \t\r\n\f]+		{;}

.               { fprintf(stderr, "Invalid tokens\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}

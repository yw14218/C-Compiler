%code requires{
  #include "ast.hpp"
  #include <cassert>

  extern Statementptr g_root; // A way of getting the AST out

  int yylex(void);
  void yyerror(const char *);

  extern FILE *yyin;
}


%union{
  Statementptr states;
  Statementlistptr stateslist;
  double number;
  std::string *string;
}

%token T_AUTO T_DOUBLE T_INT T_STRUCT T_BREAK T_ELSE T_LONG T_SWITCH T_CASE T_ENUM T_REGISTER T_TYPEDEF T_EXTERN T_RETURN T_FLOAT T_SHORT T_UNSIGNED T_CONTINUE T_FOR T_SIGNED T_VOID T_DEFAULT T_SIZEOF T_VOLATILE T_DO T_IF T_STATIC T_WHILE T_CHAR T_EQUAL T_CONST
%token T_IDENTIFIER T_FLOAT_CONST T_INT_CONST T_CHAR_CONST T_STRING
%token T_PLUS T_PLUS_PLUS T_PLUS_EQUAL T_MINUS T_MINUS_MINUS T_MINUS_EQUAL T_TIMES T_TIMES_EQUAL T_DIVIDE T_DIVIDE_EQUAL T_BOOL_EQUAL T_NOT_EQUAL T_TILDE T_EXCLAMATION T_PERCENTAGE
%token T_HASH T_HASH_HASH T_COLON T_SEMICOLON T_BITWISE_OR T_LOGICAL_OR T_BITWISE_AND T_LOGICAL_AND T_COMMA T_LSHIFT_EQUAL T_RSHIFT_EQUAL
%token T_L_ROUND_BRACKET T_R_ROUND_BRACKET T_L_SQUARE_BRACKET T_R_SQUARE_BRACKET T_L_CURLY_BRACKET T_R_CURLY_BRACKET T_DOT T_QUESTION
%token T_SMALLER T_SMALLER_SMALLER T_BIGGER T_BIGGER_BIGGER T_SMALLER_EQUAL T_BIGGER_EQUAL T_POINT_TO T_BITWISE_XOR
%token T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_PERCENTAGE_EQUAL T_UNION

%type <string> T_STRING T_IDENTIFIER
%type <number> T_INT T_FLOAT T_DOUBLE T_CHAR

%type <states> PRIMARY_EXPRESSION POSTFIX_EXPRESSION UNARY_EXPRESSION CAST_EXPRESSION MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_OR_EXPRESSION LOGICAL_AND_EXPRESSION CONDITIONAL_EXPRESSION ASSIGNMENT_EXPRESSION EXPRESSION CONSTANT_EXPRESSION

%type <states> DECLARATION DECLARATION_SPECIFIERS STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER TYPE_QUALIFIER INIT_DECLARATOR INITIALIZER STRUCT_OR_UNION_SPECIFIER STRUCT_OR_UNION STRUCT_DECLARATION STRUCT_DECLARATOR ENUM_SPECIFIER ENUMERATOR

%type <states> DECLARATOR DIRECT_DECLARATOR POINTER PARAMETER_DECLARATION TYPE_NAME ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR TYPEDEF_NAME

%type <states> STATEMENT LABELED_STATEMENT COMPOUND_STATEMENT EXPRESSION_STATEMENT SELECTION_STATEMENT
 ITERATION_STATEMENT JUMP_STATEMENT EXTERNAL_DECLARATION FUNCTION_DEFINITION

%type <stateslist> ARGUMENT_EXPRESSION_LIST INIT_DECLARATOR_LIST STRUCT_DECLARATION_LIST  SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST ENUMERATOR_LIST TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST IDENTIFIER_LIST INITIALIZER_LIST DECLARATION_LIST STATEMENT_LIST TRANSLATION_UNIT


%start ROOT

%%

ROOT : TRANSLATION_UNIT { g_root = new root($1) ; }
     ;

PRIMARY_EXPRESSION: T_IDENTIFIER {$$ = new identifier(*$1);}
		|T_FLOAT{$$ = new doubleing($1);}
		|T_DOUBLE{$$ = new floating($1);}
		|T_INT{$$ = new integer($1);}
		|T_CHAR {$$ = new character($1);}
		|T_STRING {$$ = new stringliteral(*$1);}
		|T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET { $$ = $2;}
		; 

POSTFIX_EXPRESSION: PRIMARY_EXPRESSION{ $$ = $1;}
		|POSTFIX_EXPRESSION T_L_SQUARE_BRACKET EXPRESSION T_R_SQUARE_BRACKET{$$ = new arraysub($1, $3);}
		|POSTFIX_EXPRESSION T_DOT T_IDENTIFIER {$$ = new structor($1, new identifier(*$3)); }
		|POSTFIX_EXPRESSION T_L_ROUND_BRACKET ARGUMENT_EXPRESSION_LIST T_R_ROUND_BRACKET{$$ = new functioncall($1, new expressionlist($3));} 
		|POSTFIX_EXPRESSION T_L_ROUND_BRACKET T_R_ROUND_BRACKET{$$ = new functioncall($1);} 
		|POSTFIX_EXPRESSION T_POINT_TO T_IDENTIFIER {$$ = new pointerSymbol{$1, new identifier(*$3)};}
		|POSTFIX_EXPRESSION T_PLUS_PLUS {$$ = new unaryplusplus($1);}
		|POSTFIX_EXPRESSION T_MINUS_MINUS{$$ = new unaryminusminus($1);}
		;

ARGUMENT_EXPRESSION_LIST: ASSIGNMENT_EXPRESSION{ $$ = listgen($1);}
		|ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION{$$ = listcombine($1, $3);}
		;

UNARY_EXPRESSION: POSTFIX_EXPRESSION { $$ = $1;}
		|T_PLUS_PLUS UNARY_EXPRESSION { $$ = new plusplusunary($2);}
		|T_MINUS_MINUS UNARY_EXPRESSION { $$ = new minusminusunary($2);}
		|T_PLUS CAST_EXPRESSION { $$ = new plusunary($2);}
		|T_MINUS CAST_EXPRESSION { $$ = new minusunary($2);}
		|T_TIMES CAST_EXPRESSION { $$ = new timesunary($2);}
		|T_TILDE CAST_EXPRESSION { $$ = new invertunary($2);}
		|T_EXCLAMATION CAST_EXPRESSION { $$ = new exclamunary($2);}
		|T_BITWISE_AND CAST_EXPRESSION { $$ = new bitwiseandunary($2);}
		|T_SIZEOF UNARY_EXPRESSION{$$ = new sizeofunary($2);}
		|T_SIZEOF T_L_ROUND_BRACKET TYPE_NAME T_R_ROUND_BRACKET {$$ = new sizeofnameunary($3);}
		;

CAST_EXPRESSION: UNARY_EXPRESSION {$$ = $1;}
		|T_L_ROUND_BRACKET TYPE_NAME T_R_ROUND_BRACKET CAST_EXPRESSION {;}
		;

MULTIPLICATIVE_EXPRESSION: CAST_EXPRESSION { $$ = $1;}
		|MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION { $$ = new timesoperator($1, $3);}
		|MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION { $$ = new divideoperator($1, $3);}
		|MULTIPLICATIVE_EXPRESSION T_PERCENTAGE CAST_EXPRESSION { $$ = new percentageoperator($1, $3);}
		;

ADDITIVE_EXPRESSION: MULTIPLICATIVE_EXPRESSION{ $$ = $1;}
		|ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION { $$ = new plusoperator($1, $3);}
		|ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION { $$ = new minusoperator($1, $3);}
		;

SHIFT_EXPRESSION: ADDITIVE_EXPRESSION {$$ = $1;}
		|SHIFT_EXPRESSION T_SMALLER_SMALLER ADDITIVE_EXPRESSION { $$ = new lshiftoperator($1, $3);}
		|SHIFT_EXPRESSION T_BIGGER_BIGGER ADDITIVE_EXPRESSION { $$ = new rshiftoperator($1, $3);}
		;

RELATIONAL_EXPRESSION: SHIFT_EXPRESSION { $$ = $1;}
		|RELATIONAL_EXPRESSION T_SMALLER SHIFT_EXPRESSION { $$ = new smalleroperator($1, $3);}
		|RELATIONAL_EXPRESSION T_BIGGER SHIFT_EXPRESSION { $$ = new biggeroperator($1, $3);}
		|RELATIONAL_EXPRESSION T_SMALLER_EQUAL SHIFT_EXPRESSION { $$ = new sequaloperator($1, $3);}
		|RELATIONAL_EXPRESSION T_BIGGER_EQUAL SHIFT_EXPRESSION {$$ = new bequaloperator($1, $3);}
		;

EQUALITY_EXPRESSION: RELATIONAL_EXPRESSION { $$ = $1;}
		|EQUALITY_EXPRESSION T_BOOL_EQUAL RELATIONAL_EXPRESSION { $$ = new equalequaloperator($1, $3);}
		|EQUALITY_EXPRESSION T_NOT_EQUAL RELATIONAL_EXPRESSION { $$ = new notequaloperator($1, $3);}
		;

AND_EXPRESSION: EQUALITY_EXPRESSION {$$ = $1;}
		|AND_EXPRESSION T_BITWISE_AND EQUALITY_EXPRESSION {$$ = new bitwiseandoperator($1, $3);}
		;

EXCLUSIVE_OR_EXPRESSION: AND_EXPRESSION { $$ = $1;}
		|EXCLUSIVE_OR_EXPRESSION T_BITWISE_XOR AND_EXPRESSION { $$ = new xoroperator($1, $3);}
		;

INCLUSIVE_OR_EXPRESSION: EXCLUSIVE_OR_EXPRESSION { $$ = $1;}
		|INCLUSIVE_OR_EXPRESSION T_BITWISE_OR EXCLUSIVE_OR_EXPRESSION { $$ = new oroperator($1, $3);}
		;

LOGICAL_AND_EXPRESSION: INCLUSIVE_OR_EXPRESSION {$$ = $1;}
		|LOGICAL_AND_EXPRESSION T_LOGICAL_AND INCLUSIVE_OR_EXPRESSION { $$ = new logicalandoperator($1, $3);}
		;

LOGICAL_OR_EXPRESSION: LOGICAL_AND_EXPRESSION {$$ = $1;}
		|LOGICAL_OR_EXPRESSION T_LOGICAL_OR LOGICAL_AND_EXPRESSION { $$ = new logicaloroperator($1, $3);}
		;

CONDITIONAL_EXPRESSION: LOGICAL_OR_EXPRESSION {$$ = $1;}
		|LOGICAL_OR_EXPRESSION T_QUESTION EXPRESSION T_COLON CONDITIONAL_EXPRESSION {$$ = new conditionaloperator($1, $3, $5);}
		;

ASSIGNMENT_EXPRESSION: CONDITIONAL_EXPRESSION {$$ = $1;}
		|UNARY_EXPRESSION T_EQUAL ASSIGNMENT_EXPRESSION {$$ = new equalassignment($1, $3);}
		|UNARY_EXPRESSION T_AND_EQUAL ASSIGNMENT_EXPRESSION {$$ = new andequalassignment($1, $3);}
		|UNARY_EXPRESSION T_XOR_EQUAL ASSIGNMENT_EXPRESSION {$$ = new xorequalassignment($1, $3);}
		|UNARY_EXPRESSION T_OR_EQUAL ASSIGNMENT_EXPRESSION {$$ = new orequalassignment($1, $3);}
		|UNARY_EXPRESSION T_PERCENTAGE_EQUAL ASSIGNMENT_EXPRESSION {$$ = new percentageequalassignment($1, $3);}
		|UNARY_EXPRESSION T_LSHIFT_EQUAL ASSIGNMENT_EXPRESSION {$$ = new lshiftequalassignment($1, $3);}
		|UNARY_EXPRESSION T_RSHIFT_EQUAL ASSIGNMENT_EXPRESSION {$$ = new rshiftequalassignment($1, $3);}
		|UNARY_EXPRESSION T_PLUS_EQUAL ASSIGNMENT_EXPRESSION {$$ = new plusequalassignment($1, $3);}
		|UNARY_EXPRESSION T_MINUS_EQUAL ASSIGNMENT_EXPRESSION {$$ = new minusequalassignment($1, $3);}
		|UNARY_EXPRESSION T_TIMES_EQUAL ASSIGNMENT_EXPRESSION {$$ = new timesequalassignment($1, $3);}
		|UNARY_EXPRESSION T_DIVIDE_EQUAL ASSIGNMENT_EXPRESSION {$$ = new divideequalassignment($1, $3);}
		;

EXPRESSION: ASSIGNMENT_EXPRESSION {$$ = $1;}
		| EXPRESSION T_COMMA ASSIGNMENT_EXPRESSION
		;

CONSTANT_EXPRESSION: CONDITIONAL_EXPRESSION {$$ = $1;}
		;

STORAGE_CLASS_SPECIFIER: T_TYPEDEF {$$ = new typedefkey();}
		| T_EXTERN {;}
		| T_STATIC {$$ = new statickey();}
		| T_AUTO {$$ = new autokey();}
		| T_REGISTER {$$ = new registerkey();}
		;

DECLARATION: DECLARATION_SPECIFIERS T_SEMICOLON {$$ = new declaration($1);}
		|DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON{$$ = new declaration($1, $2);}
		;

DECLARATION_SPECIFIERS: STORAGE_CLASS_SPECIFIER {$$ = new storageclassdeclaration($1);}
		|STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS {$$ = new storageclassdeclaration($1,$2);}
		|TYPE_SPECIFIER {$$ = new typespecdeclaration($1);}
		|TYPE_SPECIFIER DECLARATION_SPECIFIERS{$$ = new typespecdeclaration($1,$2);}
		|TYPE_QUALIFIER {$$ = new typequaldeclaration($1);}
		|TYPE_QUALIFIER DECLARATION_SPECIFIERS{$$ = new typequaldeclaration($1,$2);}
		;
		
INIT_DECLARATOR_LIST: INIT_DECLARATOR { $$ = listgen($1);}
		| INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR { $$ = listcombine($1, $3);}
		;

INIT_DECLARATOR: DECLARATOR {$$ = new initdeclarator($1);}
		| DECLARATOR T_EQUAL INITIALIZER {$$ = new initdeclarator($1,$3);}
		| DECLARATOR T_L_CURLY_BRACKET INITIALIZER_LIST T_R_CURLY_BRACKET {}
		;

TYPE_SPECIFIER: T_VOID {$$ = new voidkey();}
		| T_CHAR {$$ = new charkey();}
		| T_SHORT {$$ = new shortkey();}
		| T_INT {$$ = new intkey();}
		| T_LONG {$$ = new longkey();}
		| T_FLOAT {$$ = new floatkey();}
		| T_DOUBLE {$$ = new doublekey();}
		| T_SIGNED {$$ = new signedkey();}
		| T_UNSIGNED {$$ = new unsignedkey();}
		| STRUCT_OR_UNION_SPECIFIER {$$ = $1;}
		| ENUM_SPECIFIER {$$ = $1;}
		//| T_IDENTIFIER {$$ = $1;}
		;

STRUCT_OR_UNION_SPECIFIER: STRUCT_OR_UNION T_IDENTIFIER {$$ = new structspec($1, new identifier(*$2));}
		| STRUCT_OR_UNION T_L_CURLY_BRACKET STRUCT_DECLARATION_LIST T_R_CURLY_BRACKET {$$ = new structspec($1, new declarationlist($3)); }
		| STRUCT_OR_UNION T_IDENTIFIER T_L_CURLY_BRACKET STRUCT_DECLARATION_LIST T_R_CURLY_BRACKET {$$ = new structspec($1, new identifier(*$2), new declarationlist($4));}
		;

STRUCT_OR_UNION: T_STRUCT {$$ = new structkey();}
		| T_UNION {;}
		;

STRUCT_DECLARATION_LIST: STRUCT_DECLARATION { $$ = listgen($1);}
		| STRUCT_DECLARATION_LIST STRUCT_DECLARATION { $$ = listcombine($1, $2);}
		;

STRUCT_DECLARATION: SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST T_SEMICOLON{$$ = new structdeclarator(new qualifierlist($1),new declarationlist($2));};

SPECIFIER_QUALIFIER_LIST: TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST { $$ = listcombine($2, $1);}
		| TYPE_SPECIFIER { $$ = listgen($1);}
		| TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST {$$ = listcombine($2, $1);}
		| TYPE_QUALIFIER { $$ = listgen($1);}
		;

STRUCT_DECLARATOR_LIST: STRUCT_DECLARATOR { $$ = listgen($1);}
		| STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR{ $$ = listcombine($1, $3);}
		;

STRUCT_DECLARATOR: DECLARATOR {$$ = new structdeclarator($1);}
		| T_COLON CONSTANT_EXPRESSION {$$ = new structcolondeclarator($2);}
		| DECLARATOR T_COLON CONSTANT_EXPRESSION {$$ = new structcolondeclarator($1, $3);}
 		;

ENUM_SPECIFIER: T_ENUM T_IDENTIFIER T_L_CURLY_BRACKET ENUMERATOR_LIST T_R_CURLY_BRACKET {$$ = new enumspecifier(new identifier(*$2), new enumeratorlist($4));}
		| T_ENUM T_L_CURLY_BRACKET ENUMERATOR_LIST T_R_CURLY_BRACKET {$$ = new enumspecifier(new enumeratorlist($3));}
		| T_ENUM T_IDENTIFIER {$$ = new enumspecifier(new identifier(*$2));}
		;

ENUMERATOR_LIST: ENUMERATOR{ $$ = listgen($1);}
		| ENUMERATOR_LIST T_COMMA ENUMERATOR { $$ = listcombine($1, $3);}
		;

ENUMERATOR: T_IDENTIFIER { $$ = new enumerator(new identifier(*$1));}
		| T_IDENTIFIER T_EQUAL CONSTANT_EXPRESSION {$$ = new enumerator(new identifier(*$1), $3);}
		;

TYPE_QUALIFIER: T_VOLATILE {;}
		| T_CONST{;}
		;

DECLARATOR: DIRECT_DECLARATOR {$$ = $1;}
		| POINTER DIRECT_DECLARATOR {$$ = new pointerdeclarator($2);}
		;

DIRECT_DECLARATOR: T_IDENTIFIER {$$ = new identifier(*$1);}
		| T_L_ROUND_BRACKET DECLARATOR T_R_ROUND_BRACKET {$$ = $2;}
		| DIRECT_DECLARATOR T_L_SQUARE_BRACKET T_R_SQUARE_BRACKET {$$ = new arraydeclarator($1);}
		| DIRECT_DECLARATOR T_L_SQUARE_BRACKET CONSTANT_EXPRESSION T_R_SQUARE_BRACKET {$$ = new arraydeclarator($1,$3);}
		| DIRECT_DECLARATOR T_L_ROUND_BRACKET PARAMETER_TYPE_LIST T_R_ROUND_BRACKET {$$ = new functiondeclarator($1, new parameterlist($3));}
		| DIRECT_DECLARATOR T_L_ROUND_BRACKET T_R_ROUND_BRACKET {$$ = new functiondeclarator($1);}
		| DIRECT_DECLARATOR T_L_ROUND_BRACKET IDENTIFIER_LIST T_R_ROUND_BRACKET {$$ = new  functiondeclarator($1, new identifierlist($3));}
		;

POINTER: T_TIMES {$$ = new pointer();}
		| T_TIMES POINTER {$$ = $2;}
		| T_TIMES TYPE_QUALIFIER_LIST {;}
		| T_TIMES TYPE_QUALIFIER_LIST POINTER{;}
		;

TYPE_QUALIFIER_LIST: TYPE_QUALIFIER {$$ = listgen($1);}
		| TYPE_QUALIFIER_LIST TYPE_QUALIFIER {$$ = listcombine($1, $2);}
		;

PARAMETER_TYPE_LIST: PARAMETER_LIST {$$ = $1;}
		;

PARAMETER_LIST: PARAMETER_DECLARATION {$$ = listgen($1);}
		| PARAMETER_LIST T_COMMA PARAMETER_DECLARATION {$$ = listcombine($1, $3);}
		;

PARAMETER_DECLARATION: DECLARATION_SPECIFIERS DECLARATOR {$$ = new declaration($1, $2);}
		| DECLARATION_SPECIFIERS {$$ = new declaration($1);}
		| DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR {$$ = new declaration($1, $2);}
		;

IDENTIFIER_LIST : T_IDENTIFIER {$$ = listgen(new identifier(*$1));}
		| IDENTIFIER_LIST T_COMMA T_IDENTIFIER {$$ = listcombine($1, new identifier(*$3)); }
		;

TYPE_NAME: SPECIFIER_QUALIFIER_LIST {}
		| SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR {$$ = $2;}
		;

ABSTRACT_DECLARATOR: POINTER
		| DIRECT_ABSTRACT_DECLARATOR
		| POINTER DIRECT_ABSTRACT_DECLARATOR {$$ = new pointer();}
		;

DIRECT_ABSTRACT_DECLARATOR: T_L_ROUND_BRACKET ABSTRACT_DECLARATOR T_R_ROUND_BRACKET {$$ = $2;}
		| DIRECT_ABSTRACT_DECLARATOR T_L_SQUARE_BRACKET CONSTANT_EXPRESSION T_R_SQUARE_BRACKET{;}
		| T_L_SQUARE_BRACKET CONSTANT_EXPRESSION T_R_SQUARE_BRACKET {;}
		| T_L_SQUARE_BRACKET T_R_SQUARE_BRACKET {;}
		| DIRECT_ABSTRACT_DECLARATOR T_L_SQUARE_BRACKET T_R_SQUARE_BRACKET {;}
		| DIRECT_ABSTRACT_DECLARATOR T_L_ROUND_BRACKET PARAMETER_TYPE_LIST T_R_ROUND_BRACKET {;}
		| T_L_ROUND_BRACKET PARAMETER_TYPE_LIST T_R_ROUND_BRACKET {;}
		| DIRECT_ABSTRACT_DECLARATOR T_L_ROUND_BRACKET T_R_ROUND_BRACKET {;}
		| T_L_ROUND_BRACKET T_R_ROUND_BRACKET {;}
		;

TYPEDEF_NAME: T_IDENTIFIER {$$ = new identifier(*$1);}
		;

INITIALIZER: ASSIGNMENT_EXPRESSION {$$ = new initializer($1);}
		| T_L_CURLY_BRACKET INITIALIZER_LIST T_R_CURLY_BRACKET {$$ = new initializer(new initializerlist($2));}
		| T_L_CURLY_BRACKET INITIALIZER_LIST T_COMMA T_R_CURLY_BRACKET {$$ = new initializer(new initializerlist($2));}
		;

INITIALIZER_LIST: INITIALIZER {$$ = listgen($1);}
		| INITIALIZER_LIST T_COMMA INITIALIZER {$$ = listcombine($1, $3);}
		;


STATEMENT: LABELED_STATEMENT {$$ = $1;}
		| COMPOUND_STATEMENT {$$ = $1;}
		| EXPRESSION_STATEMENT { $$ = $1;}
		| SELECTION_STATEMENT {$$ = $1;}
		| ITERATION_STATEMENT {$$ = $1;}
		| JUMP_STATEMENT {$$ = $1;}
		;

LABELED_STATEMENT: T_IDENTIFIER T_COLON STATEMENT {$$ = new labeledstatement(new identifier(*$1), $3);}
		| T_CASE CONSTANT_EXPRESSION T_COLON STATEMENT {$$ = new caselabeledstatement($2, $4);}	
		| T_DEFAULT T_COLON STATEMENT {$$ = new defaultlabeledstatement($3);}
		;

COMPOUND_STATEMENT: T_L_CURLY_BRACKET DECLARATION_LIST STATEMENT_LIST T_R_CURLY_BRACKET {$$ = new compoundstatement($2, $3);}
		| T_L_CURLY_BRACKET STATEMENT_LIST  T_R_CURLY_BRACKET {$$ = new compoundstatement($2); }
		| T_L_CURLY_BRACKET DECLARATION_LIST T_R_CURLY_BRACKET {$$ = new compoundstatement($2);}
		| T_L_CURLY_BRACKET T_R_CURLY_BRACKET {$$ = new compoundstatement();}
		;

DECLARATION_LIST: DECLARATION {$$ = listgen($1);}
		| DECLARATION_LIST DECLARATION {$$ = listcombine($1, $2);}
		;

STATEMENT_LIST: STATEMENT {$$ = listgen($1);}
		| STATEMENT_LIST STATEMENT {$$ = listcombine($1, $2);}
		;

EXPRESSION_STATEMENT: T_SEMICOLON {$$ = new emptyline();}
		| EXPRESSION T_SEMICOLON {$$ = $1;}
		;

SELECTION_STATEMENT: T_IF T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new ifelsestatement($3, $5);}
		   | T_IF T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET STATEMENT T_ELSE STATEMENT {$$ = new ifelsestatement($3, $5, $7);}
		| T_SWITCH T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new switchstatement($3, $5);}
		;

ITERATION_STATEMENT: T_WHILE T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new whilestatement($3, $5);}
		| T_DO STATEMENT T_WHILE T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET T_SEMICOLON{$$ = new dostatement($2, $5);}
		| T_FOR T_L_ROUND_BRACKET EXPRESSION T_SEMICOLON EXPRESSION T_SEMICOLON EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new forstatement($3, $5, $7, $9);}
		| T_FOR T_L_ROUND_BRACKET EXPRESSION T_SEMICOLON EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new forstatement($3, $5, $7);}
		| T_FOR T_L_ROUND_BRACKET EXPRESSION T_R_ROUND_BRACKET STATEMENT {$$ = new forstatement($3, $5);}
		;

JUMP_STATEMENT: T_CONTINUE T_SEMICOLON {$$ = new continuestatement();}
		| T_BREAK  T_SEMICOLON {$$ = new breakstatement();}
		| T_RETURN EXPRESSION T_SEMICOLON {$$ = new returnstatement($2);}
		| T_RETURN T_SEMICOLON {$$ = new returnstatement();}
		;

TRANSLATION_UNIT: EXTERNAL_DECLARATION {$$ = listgen($1);}
		| TRANSLATION_UNIT EXTERNAL_DECLARATION {$$ = listcombine($1, $2);}
		;

EXTERNAL_DECLARATION: FUNCTION_DEFINITION {$$ = $1;}
		| DECLARATION {$$ = $$ = new globaldeclaration($1);}
		;

FUNCTION_DEFINITION: DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT{$$ = new functiondefinition($1, $2, $3);}
		| DECLARATOR COMPOUND_STATEMENT{$$ = new functiondefinition($1, $2);}
		;

//PREPROCESSING DIRECTIVES NOT INCLUDED

%%
Statementptr g_root; 

Statementptr parseAST()
{
  g_root= 0;
  yyparse();
  return g_root;
}

#ifndef AST_HPP
#define AST_HPP

#include "Statement.hpp"
#include "Array/arraysub.hpp"
#include "Array/structorpointer.hpp"
#include "assignment/assignment.hpp"
#include "Function_call/functioncall.hpp"
#include "list/Statementlist.hpp"
#include "operator/operator.hpp" 
#include "primary_expression/character.hpp"
#include "primary_expression/floating.hpp" 
#include "primary_expression/integer.hpp"
#include "primary_expression/identifier.hpp"
#include "primary_expression/stringliteral.hpp"
#include "Unary/unary.hpp"
#include "emptyline.hpp"
#include "block/compoundstat.hpp"
#include "declaration/declaration.hpp"
#include "enum/enum.hpp"
#include "keywords/keywords.hpp"
#include "list/list.hpp"
#include "pointer/pointer.hpp"
#include "Statements/ifelsestatement.hpp"
#include "Statements/jumpstatement.hpp"
#include "Statements/labeledstatement.hpp"
#include "Statements/whiledoforstatement.hpp"
#include "Struct/struct.hpp"
extern const Statement *parseAST();

#endif

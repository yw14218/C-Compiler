#ifndef STATEMENT_HPP
#define STATEMENT_HPP

#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include"Context.hpp"

static int NumVariables = 0;
static std::string Funcnameadd;
static std::vector<std::string> Funcname;

class Statement;
typedef const Statement *Statementptr;

class Statement{
public:
	virtual ~Statement(){};
	virtual void translate(std::ostream &dst, std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const =0;
	virtual void treeprint(std::ostream &dst, std::string indent)const =0;
	virtual void compile(Context &input, int p = 2)const = 0;
	virtual double evaluate()const = 0;
};

#endif

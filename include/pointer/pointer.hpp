#ifndef POINTER_HPP
#define POINTER_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class pointer : public Statement {
public:
	pointer(){};
	virtual ~pointer(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<< "<pointer>"<<" *"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
};


#endif

#ifndef EMPTYLINE_HPP
#define EMPTYLINE_HPP


#include "Statement.hpp"
class emptyline : public Statement {
public:
	emptyline(){};
	virtual ~emptyline(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {}
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
};


#endif

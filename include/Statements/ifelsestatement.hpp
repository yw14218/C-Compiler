#ifndef IFELSESTATEMENT_HPP
#define IFELSESTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class ifelsestatement: public Statement{
public:
	ifelsestatement(Statementptr p1, Statementptr p2, Statementptr p3){left = p1;mid = p2;right = p3;};
	ifelsestatement(Statementptr p1, Statementptr p2){left = p1;mid = p2;};
	virtual ~ifelsestatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_if(){return mid;};
	Statementptr get_else(){return right;};
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;
};

class switchstatement: public Statement {
public:
	switchstatement(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~switchstatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_stat(){return right;};
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

#endif


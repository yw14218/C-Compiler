#ifndef IFELSESTATEMENT_HPP
#define IFELSESTATEMENT_HPP

#include "Statement.hpp"

class ifelsestatement: public Statement{
public:
	ifelsestatement(Statementptr p1, Statementptr p2, Statementptr p3){subs[0] = p1;subs[1] = p2;subs[2] = p3;};
	ifelsestatement(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~ifelsestatement(){};
	Statementptr get_condition(){return subs[0];};
	Statementptr get_if(){return subs[1];};
	Statementptr get_else(){return subs[2];};
};

class switchstatement: public Statement {
public:
	switchstatement(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~switchstatement(){};
	Statementptr get_condition(){return subs[0];};
	Statementptr get_stat(){return subs[1];};
};

#endif


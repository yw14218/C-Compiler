#ifndef COMPOUNDSTAT_HPP
#define COMPOUNDSTAT_HPP

#include "Statement.hpp"

class compoundstatement :public Statement{
public:
	compoundstatement(){};
	compoundstatement(std::vector<Statementptr> p1){subs = p1;};
	compoundstatement(std::vector<Statementptr> p1, std::vector<Statementptr> &p2){
	std::vector<Statementptr> tmp = p1;
	tmp.insert(tmp.end(),p2.begin(),p2.end());
	subs = tmp;};
	virtual ~compoundstatement(){};
	
};

class global : public Statement{
public:
	virtual ~global(){};
	global(std::vector<Statementptr> stats){subs = stats;};

};



#endif

#ifndef STATEMENT_HPP
#define STATEMENT_HPP

#include<iostream>
#include<vector>
#include<memory>
#include<string>

class Statement;
typedef const Statement *Statementptr;

class Statement{
public:
	virtual ~Statement(){};
protected:
	std::vector<Statementptr> subs;
};





#endif

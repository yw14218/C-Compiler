#ifndef STATEMENT_HPP
#define STATEMENT_HPP

#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include <memory>

class Statement
typedef const Statement *Statementptr;

class Statement{
public:
	virtual ~Statement() {};
        virtual translate(std::ostream &dst);
protected:
	std::vector<Statementptr> subs;
}





#endif

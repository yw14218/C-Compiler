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
	virtual void translate(std::ostream &dst)const =0;
	virtual void treeprint(std::ostream &dst)const =0;
};





#endif

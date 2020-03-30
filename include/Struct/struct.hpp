#ifndef STRUCT_HPP
#define STRUCT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class structkey : public Statement {
public:
	structkey(){};
	virtual ~structkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class structspec : public Statement {
public:
	structspec(Statementptr p1, Statementptr p2){left = p1;mid = p2;};
	structspec(Statementptr p1, Statementptr p2,  Statementptr p3){left = p1;mid = p2; right= p3;};
	virtual ~structspec(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return mid;}
	Statementptr get_p3(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;
};

class structdeclarator : public Statement {
public:
	structdeclarator(Statementptr p1){left = p1;};
	structdeclarator(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~structdeclarator(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class structcolondeclarator : public Statement {
public:
	structcolondeclarator(Statementptr p1){left = p1;};
	structcolondeclarator(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~structcolondeclarator(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};


#endif

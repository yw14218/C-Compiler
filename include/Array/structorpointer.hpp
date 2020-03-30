#ifndef STRUCTORPOINTER_HPP
#define STRUCTORPOINTER_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class structor : public Statement{
public:
	virtual ~structor(){};
	structor(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};


class pointerSymbol : public Statement{
public:
	virtual ~pointerSymbol(){};
	pointerSymbol(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_p1(){return left;};
	Statementptr get_p2(){return right;};
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

#endif

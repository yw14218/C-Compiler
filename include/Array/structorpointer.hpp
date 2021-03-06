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
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<structor> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
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
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<pointersymbol> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

#endif

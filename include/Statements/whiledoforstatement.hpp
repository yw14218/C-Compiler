
#ifndef WHILEDOFORSTATEMENT_HPP
#define WHILEDOFORSTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class whilestatement: public Statement {
public:
	whilestatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~whilestatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_stats(){return right;};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		dst << indent;
		dst << "while (";
		left -> translate(dst,"",addglobal,globalvariables);
		dst << "):"<<std::endl;
		right -> translate(dst,indent,addglobal,globalvariables);	
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"While Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};	
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class dostatement: public Statement {
public:
	dostatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~dostatement(){};
	Statementptr get_stats(){return left;};
	Statementptr get_condition(){return right;};	
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Do Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class forstatement: public Statement {
public:
	forstatement(Statementptr p1, Statementptr p2){leftleft = p1; left = p2;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3){leftleft = p1; left = p2;right = p3;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3, Statementptr p4){leftleft = p1; left = p2;right = p3; rightright = p4;} ;
	virtual ~forstatement(){};
	Statementptr get_stat1(){return leftleft;};
	Statementptr get_stat2(){return left;};
	Statementptr get_stat3(){return right;};
	Statementptr get_stat4(){return rightright;};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<for statement> ["<<'\n';
		leftleft->treeprint(dst, indent+"  ");
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		if(rightright != NULL)
			{rightright->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr leftleft;
	Statementptr left;
	Statementptr right;
	Statementptr rightright;
};

#endif

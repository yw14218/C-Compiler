#ifndef ENUM_HPP
#define ENUM_HPP

#include "Statement.hpp"
#include"Statementlist.hpp"

class enumerator : public Statement {
public:
	enumerator(Statementptr p1){left = p1;};
	enumerator(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~enumerator(){};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Enumerator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class enumspecifier : public Statement {
public:
	enumspecifier(Statementptr p1){left = p1;};
	enumspecifier(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~enumspecifier(){};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Enumspecifier> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;

};


#endif

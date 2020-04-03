#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class equalassignment : public Statement{
public:
	virtual ~equalassignment(){};
	equalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		dst << indent;		
		left->translate(dst,indent,addglobal,globalvariables); 
		dst << "=";
		right->translate(dst,indent,addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Equal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class timesequalassignment : public Statement{
public:
	virtual ~timesequalassignment(){};
	timesequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Times assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class divideequalassignment : public Statement{
public:
	virtual ~divideequalassignment(){};
	divideequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Divide assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class percentageequalassignment : public Statement{
public:
	virtual ~percentageequalassignment(){};
	percentageequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Percentage assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class plusequalassignment : public Statement{
public:
	virtual ~plusequalassignment(){};
	plusequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Plusequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class minusequalassignment : public Statement{
public:
	virtual ~minusequalassignment(){};
	minusequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Minusequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class lshiftequalassignment : public Statement{
public:
	virtual ~lshiftequalassignment(){};
	lshiftequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Leftshiftequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class rshiftequalassignment : public Statement{
public:
	virtual ~rshiftequalassignment(){};
	rshiftequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Rightshiftequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class andequalassignment : public Statement{
public:
	virtual ~andequalassignment(){};
	andequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Andequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class xorequalassignment : public Statement{
public:
	virtual ~xorequalassignment(){};
	xorequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Xorequal assignment> ["<<'\n';
		dst<<indent;left->treeprint(dst,indent+"  ");
		dst<<indent;right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class orequalassignment : public Statement{
public:
	virtual ~orequalassignment(){};
	orequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Orequal assignment> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
#endif

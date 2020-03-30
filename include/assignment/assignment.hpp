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
	//virtual void translate(std::ostream &dst){ dst << left->translate(dst) << "=" << right->translate(dst);}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Equal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Times assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Divide assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Percentage assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Plusequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Minusequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<lshiftequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Rshiftequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Andequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Xor assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Orequal assignment>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
#endif

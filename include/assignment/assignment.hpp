#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP

#include"Statement.hpp"
class equalassignment : public Statement{
public:
	virtual ~equalassignment(){};
	equalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst){ dst << left << "=" << right;}
private:
	Statementptr left;
	StatementPtr right;
};

class timesequalassignment : public Statement{
public:
	virtual ~timesequalassignment(){};
	timesequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};

class divideequalassignment : public Statement{
public:
	virtual ~divideequalassignment(){};
	divideequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};

class percentageequalassignment : public Statement{
public:
	virtual ~percentageequalassignment(){};
	percentageequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};

class plusequalassignment : public Statement{
public:
	virtual ~plusequalassignment(){};
	plusequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};

class minusequalassignment : public Statement{
public:
	virtual ~minusequalassignment(){};
	minusequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};

class lshiftequalassignment : public Statement{
public:
	virtual ~lshiftequalassignment(){};
	lshiftequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};
class rshiftequalassignment : public Statement{
public:
	virtual ~rshiftequalassignment(){};
	rshiftequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};
class andequalassignment : public Statement{
public:
	virtual ~andequalassignment(){};
	andequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};
class xorequalassignment : public Statement{
public:
	virtual ~xorequalassignment(){};
	xorequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};
class orequalassignment : public Statement{
public:
	virtual ~orequalassignment(){};
	orequalassignment(Statementptr p1, Statementptr p2){left = p1 ; right = p2;};
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	StatementPtr right;
};
#endif

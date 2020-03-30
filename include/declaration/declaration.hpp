#ifndef DECLARATION_HPP
#define DECLARATION_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class declaration : public Statement {
public:
	declaration(Statementptr p1){left = p1;};
	virtual ~declaration(){};
	declaration(Statementptr p1,Statementptr p2){left = p1; mid = p2;};
	declaration(Statementptr p1,Statementlistptr p2){left = p1; right = p2;};
	Statementptr get_p1(){return left;}
	Statementlistptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementlistptr right;
	Statementptr mid;
};

class storageclassdeclaration : public Statement {
public:
	storageclassdeclaration(Statementptr p1){left = p1;};
	storageclassdeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~storageclassdeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class typespecdeclaration : public Statement {
public:
	typespecdeclaration(Statementptr p1){left = p1;};
	typespecdeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~typespecdeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class typequaldeclaration : public Statement {
public:
	typequaldeclaration(Statementptr p1){left = p1;};
	typequaldeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~typequaldeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class initdeclarator : public Statement {
public:
	initdeclarator(Statementptr p1){left = p1;};
	initdeclarator(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~initdeclarator(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class pointerdeclarator : public Statement {
public:
	pointerdeclarator(Statementptr p1){left = p1;};
	virtual ~pointerdeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
};

class arraydeclarator : public Statement {
public:
	arraydeclarator(){};
	arraydeclarator(Statementptr p1){left = p1;};
	virtual ~arraydeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
};

class functiondeclarator : public Statement {
public:
	functiondeclarator(){};
	functiondeclarator(Statementptr p1){left = p1;};
	virtual ~functiondeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
};

class initializer : public Statement {
public:
	initializer(Statementptr p1){left = p1;};
	virtual ~initializer(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
};
#endif

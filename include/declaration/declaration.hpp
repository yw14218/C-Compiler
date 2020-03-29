#ifndef DECLARATION_HPP
#define DECLARATION_HPP

#include "Statement.hpp"

class declaration : public Statement {
public:
	declaration(Statementptr p1){subs[0] = p1;};
	declaration(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~declaration(){};
	declaration(Statementptr p1,std::vector<Statementptr> p2){subs[0] = p1;subs.insert(subs.end(), p2.begin(), p2.end());};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class storageclassdeclaration : public Statement {
public:
	storageclassdeclaration(Statementptr p1){subs[0] = p1;};
	storageclassdeclaration(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~storageclassdeclaration(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class typespecdeclaration : public Statement {
public:
	typespecdeclaration(Statementptr p1){subs[0] = p1;};
	typespecdeclaration(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~typespecdeclaration(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class typequaldeclaration : public Statement {
public:
	typequaldeclaration(Statementptr p1){subs[0] = p1;};
	typequaldeclaration(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~typequaldeclaration(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class initdeclarator : public Statement {
public:
	initdeclarator(Statementptr p1){subs[1] = p1;};
	initdeclarator(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~initdeclarator(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class pointerdeclarator : public Statement {
public:
	pointerdeclarator(Statementptr p1){subs[0] = p1;};
	virtual ~pointerdeclarator(){};
	Statementptr get_p1(){return subs[0];}
};

class arraydeclarator : public Statement {
public:
	arraydeclarator(){};
	arraydeclarator(Statementptr p1){subs[0] = p1;};
	virtual ~arraydeclarator(){};
	Statementptr get_p1(){return subs[0];}
};

class functiondeclarator : public Statement {
public:
	functiondeclarator(){};
	functiondeclarator(Statementptr p1){subs[0] = p1;};
	virtual ~functiondeclarator(){};
	Statementptr get_p1(){return subs[0];}
};

class initializer : public Statement {
public:
	initializer(Statementptr p1){subs[0] = p1;};
	virtual ~initializer(){};
	Statementptr get_p1(){return subs[0];}
};
#endif

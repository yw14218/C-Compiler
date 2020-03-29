#ifndef STRUCT_HPP
#define STRUCT_HPP

#include "Statement.hpp"

class structkey : public Statement {
public:
	structkey(){};
	virtual ~structkey(){};
	Statementptr get_p1(){return subs[0];}
};

class structspec : public Statement {
public:
	structspec(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	structspec(Statementptr p1, Statementptr p2,  Statementptr p3){subs[0] = p1;subs[1] = p2; subs[2]= p3;};
	virtual ~structspec(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
	Statementptr get_p3(){return subs[2];}
};

class structdeclarator : public Statement {
public:
	structdeclarator(Statementptr p1){subs[0] = p1;};
	structdeclarator(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~structdeclarator(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};

class structcolondeclarator : public Statement {
public:
	structcolondeclarator(Statementptr p1){subs[0] = p1;};
	structcolondeclarator(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~structcolondeclarator(){};
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};


#endif

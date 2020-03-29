#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP

#include"Statement.hpp"

class equalassignment : public Statement{
public:
	virtual ~equalassignment(){};
	equalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
	void translate(std::ostream &dst){ dst << subs[0] << "=" << subs[1];}
};

class timesequalassignment : public Statement{
public:
	virtual ~timesequalassignment(){};
	timesequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};

class divideequalassignment : public Statement{
public:
	virtual ~divideequalassignment(){};
	divideequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};

class percentageequalassignment : public Statement{
public:
	virtual ~percentageequalassignment(){};
	percentageequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};

class plusequalassignment : public Statement{
public:
	virtual ~plusequalassignment(){};
	plusequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};

class minusequalassignment : public Statement{
public:
	virtual ~minusequalassignment(){};
	minusequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};

class lshiftequalassignment : public Statement{
public:
	virtual ~lshiftequalassignment(){};
	lshiftequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};
class rshiftequalassignment : public Statement{
public:
	virtual ~rshiftequalassignment(){};
	rshiftequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};
class andequalassignment : public Statement{
public:
	virtual ~andequalassignment(){};
	andequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class xorequalassignment : public Statement{
public:
	virtual ~xorequalassignment(){};
	xorequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};
class orequalassignment : public Statement{
public:
	virtual ~orequalassignment(){};
	orequalassignment(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
};
#endif

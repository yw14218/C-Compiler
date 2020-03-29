#ifndef ENUM_HPP
#define ENUM_HPP

#include "Statement.hpp"

class enumerator : public Statement {
public:
	enumerator(Statementptr p1){subs[0] = p1;};
	enumerator(Statementptr p1, Statementptr p2){subs[0] = p1;subs[1] = p2;};
	virtual ~enumerator(){};
	Statementptr get_p1(){return subs[0];};
	Statementptr get_p2(){return subs[1];};
};

class enumspecifier : public Statement {
public:
	enumspecifier(Statementptr p1){subs[0] = p1;};
	enumspecifier(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~enumspecifier(){};
	Statementptr get_p1(){return subs[0];};
	Statementptr get_p2(){return subs[1];};

};


#endif

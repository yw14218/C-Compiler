#ifndef STRUCTORPOINTER_HPP
#define STRUCTORPOINTER_HPP

#include"Statement.hpp"

class structor : public Statement{
public:
	virtual ~structor(){};
	structor(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_p1(){return subs[0];}
	Statementptr get_p2(){return subs[1];}
};


class pointerSymbol : public Statement{
public:
	virtual ~pointerSymbol(){};
	pointerSymbol(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;};
	Statementptr get_p1(){return subs[0];};
	Statementptr get_p2(){return subs[1];};

};

#endif

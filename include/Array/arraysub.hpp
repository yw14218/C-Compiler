#ifndef ARRAYSUB_HPP
#define ARRAYSUB_HPP

#include"Statement.hpp"

class arraysub : public Statement{
public:
	virtual ~arraysub(){};
	arraysub(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_id(){return subs[0];};
	Statementptr get_index(){return subs[1];};
};


#endif

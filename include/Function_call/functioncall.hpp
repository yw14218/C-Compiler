#ifndef FUNCTIONCALL_HPP
#define FUNCTIONCALL_HPP

#include"Statement.hpp"

class functioncall : public Statement{
public:
	virtual ~functioncall(){};
	functioncall(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_id(){return subs[0];}
	Statementptr get_argument(){return subs[1];}
	void translate(std::ostream& dst){dst << subs[0] << "(" << subs[1] << ")";}
};

#endif

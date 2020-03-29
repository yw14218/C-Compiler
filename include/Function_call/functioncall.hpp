#ifndef FUNCTIONCALL_HPP
#define FUNCTIONCALL_HPP

#include"Statement.hpp"
#include"list.hpp"

class functioncall : public Statement{
public:
	virtual ~functioncall(){};
	functioncall(Statementptr p1, statementlistptr p2){left = p1 ; right = p2;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	virtual void translate(std::ostream& dst){dst << left << "(" ;right -> translate(std::cout);dst << ")";}
private:
	Statementptr left;
	Statementlistptr right;

};

#endif

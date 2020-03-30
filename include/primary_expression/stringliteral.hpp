#ifndef STRINGLITERAL_HPP
#define STRINGLITERAL_HPP

#include"Statement.hpp"

class stringliteral : public Statement{
public:
	virtual ~stringliteral(){};
	stringliteral(std::string id_in){id = id_in;}
	std::string getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
protected:
	std::string id;
};


#endif

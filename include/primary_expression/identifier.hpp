#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include"Statement.hpp"

class identifier : public Statement{
public:
	virtual ~identifier(){};
	identifier(std::string id_in){id = id_in;}
	std::string getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
protected:
	std::string id;
};


#endif

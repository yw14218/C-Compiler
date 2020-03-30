#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"Statement.hpp"

class character : public Statement{
public:
	virtual ~character(){};
	character(char id_in){id = id_in;}
	char getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
protected:
	char id;
};


#endif

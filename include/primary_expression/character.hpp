#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"Statement.hpp"

class character : public Statement{
public:
	virtual ~character(){};
	character(char id_in){id = id_in;}
	char getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
		virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<character> "<<id<<'\n';}
protected:
	char id;
};


#endif

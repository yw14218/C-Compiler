#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include"Statement.hpp"

class identifier : public Statement{
public:
	virtual ~identifier(){};
	identifier(std::string id_in){id = id_in;}
	std::string getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {dst<<"<identifier> "<<id;}
protected:
	std::string id;
};


#endif

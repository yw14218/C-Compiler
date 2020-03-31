#ifndef INTEGER_HPP
#define INTEGER_HPP

#include"Statement.hpp"

class integer : public Statement{
public:
	virtual ~integer(){};
	integer(int id_in){id = id_in;}
	int getid(){return id;}
	virtual void translate(std::ostream &dst)const override{dst << id;}
	virtual void treeprint(std::ostream &dst)const override {dst<<"<integer> "<<id;}
protected:
	int id;
};

#endif

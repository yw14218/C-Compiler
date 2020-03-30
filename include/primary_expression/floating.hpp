#ifndef FLOATING_HPP
#define FLOATING_HPP

#include"Statement.hpp"

class floating : public Statement{
public:
	virtual ~floating(){};
	floating(float id_in){id = id_in;}
	float getid(){return id;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {dst<<"<float> "<<id;}
protected:
	float id;
};


#endif

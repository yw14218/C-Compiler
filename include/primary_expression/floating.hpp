#ifndef FLOATING_HPP
#define FLOATING_HPP

#include"Statement.hpp"

class floating : public Statement{
public:
	virtual ~floating(){};
	floating(float id_in){id = id_in;}
	float getid(){return id;}
	virtual void translate(std::ostream &dst, std::string indent)const override{dst<<indent<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<float> "<<id<<'\n';}
protected:
	float id;
};


#endif

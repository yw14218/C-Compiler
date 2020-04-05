#ifndef FLOATING_HPP
#define FLOATING_HPP

#include"Statement.hpp"

class floating : public Statement{
public:
	virtual ~floating(){};
	floating(float id_in){id = id_in;}
	float getid(){return id;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{dst<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<float> "<<id<<'\n';}
	virtual void compile(Context &input, int p = 2)const override{
	input.print() <<"\tli\t" << "$t1"  << ", " << id << std::endl;}
	virtual double evaluate()const override{return id;}
protected:
	float id;
};


#endif

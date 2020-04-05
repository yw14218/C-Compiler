#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"Statement.hpp"

class character : public Statement{
public:
	virtual ~character(){};
	character(char id_in){id = id_in;}
	char getid(){return id;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{dst<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<character> "<<id<<'\n';}
	virtual void compile(Context &input, int p = 2)const override{
	input.print() <<"\tli\t" << "$t1" << ", " << 104 << std::endl;}
	virtual double evaluate()const override{return id;}
protected:
	char id;
};


#endif

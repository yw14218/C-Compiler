#ifndef INTEGER_HPP
#define INTEGER_HPP

#include"Statement.hpp"

class integer : public Statement{
public:
	virtual ~integer(){};
	integer(int id_in){id = id_in;}
	int getid(){return id;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{dst<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<integer> "<<id<<'\n';}
	virtual void compile(Context &input, int p = 2)const override{}
protected:
	int id;
};

#endif

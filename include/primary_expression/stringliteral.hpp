#ifndef STRINGLITERAL_HPP
#define STRINGLITERAL_HPP

#include"Statement.hpp"

class stringliteral : public Statement{
public:
	virtual ~stringliteral(){};
	stringliteral(std::string id_in){id = id_in;}
	std::string getid(){return id;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{dst<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<string> "<<id<<'\n';}
	virtual void compile(Context &input, int p = 2)const override{}
protected:
	std::string id;
};


#endif

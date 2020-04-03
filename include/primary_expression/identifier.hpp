#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include"Statement.hpp"

class identifier : public Statement{
public:
	virtual ~identifier(){};
	identifier(std::string &id_in){id = id_in;}
	std::string getid(){return id;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
	dst<<id;
	if(addglobal == true)
		{
			addglobal = false;
			globalvariables.push_back(id);
		}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<identifier> "<<id<<'\n';}
	virtual void compile(Context &input, int p = 2)const override{}
protected:
	std::string id;
};


#endif

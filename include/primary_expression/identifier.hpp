#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include"Statement.hpp"

extern std::string Funcnameadd;
extern std::vector<std::string> Funcname;

class identifier : public Statement{
public:
	virtual ~identifier(){};
	identifier(std::string &id_in){id = id_in; 
		if(Funcnameadd == "")		
		{Funcnameadd = id_in;}
	}
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
	virtual void compile(Context &input, int p = 2)const override{
		if(globalvariable == true || variableassigned == true)
		{
		input.print() << "\t.globl\t" << id << std::endl;
		input.print() << "\t.data\t" <<  std::endl;
		
		input.print() << id << ":" << std::endl;
		input.print() << "\t.word\t";
		globalvariable = false;
		variableassigned = false;
		}
		//std::map<std::string double> iterator it;
		//it = 
	}
	virtual double evaluate()const override{}
protected:
	std::string id;
};


#endif

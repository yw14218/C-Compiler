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
		
		if(input.variableadd == true)
		{
			input.variableadd = false;
			if(input.globalvariable == true)
			{
				input.addglobal(id, input.current_offset);
			}
			else
			{
				input.addlocal(id, input.current_offset);
			}
		}

		
		if(input.globalvariable == true || input.variableassigned == true)
		{
			input.print() << "\t.globl\t" << id << std::endl;
			input.print() << "\t.data\t" <<  std::endl;
			input.print() << id << ":" << std::endl;
			input.print() << "\t.word\t";
		}
		if(input.globalvariable == true && input.variableassigned == true ){}
		else{input.globalvariable = false;
			input.variableadd = false;
		}
		//if(input.localvariables[id] != NULL){
		//	input.print()<<"\tlw\t"<<"$"<<p<<","<<input.localvariables[id]<<"($FP)"<<std::endl;
		//}
		//if(input.globalvariables[id] != NULL){
		//	input.print()<<"\tlw\t"<<"$"<<p<<","<<input.localvariables[id]<<"$(fp)"<<std::endl;
		//}
		input.print()<<"\tli\t"<<"$t1"<<","<<" 0"<<std::endl;
	}
	virtual double evaluate()const override{}
	std::string get(){return id;}
protected:
	std::string id;
};


#endif

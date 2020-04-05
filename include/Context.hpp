#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <iostream>
#include <map>
#include <vector>

class Context {
public:
	Context(std::ostream *output){out = output;};
	std::ostream& print(){return *out;};
	std::map<std::string, double> globalvariables;
	std::map<std::string, double> localvariables;
	int tmpvalue;
	std::string tmpvariable; 
	void addglobal(std::string string, double in){globalvariables[string] = in;}
	void addlocal(std::string string, double in){localvariables[string] = in;}	
	bool globalvariable = false;
	bool variableassigned = false;
	bool variableadd = false; 
	int tmp_reg =4;
	int current_offset=8;
	int initial_offset=8;
	int devariable = 8;
	std::map<std::string, double> variables;
private:
	std::ostream *out;
};




#endif

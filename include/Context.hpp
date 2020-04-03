#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <iostream>

class Context {
public:
	Context(std::ostream *output){out = output;};
	std::ostream& print(){return *out;};
private:
	std::ostream *out;
};




#endif

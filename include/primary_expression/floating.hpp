#ifndef FLOATING_HPP
#define FLOATING_HPP

#include"Statement.hpp"

class floating : public Statement{
public:
	virtual ~floating(){};
	floating(float id_in){id = id_in;}
	float getid(){return id;}
        void translate(std::ostream &dst){ dst << id;}
protected:
	float id;
};


#endif

#ifndef INTEGER_HPP
#define INTEGER_HPP

#include"Statement.hpp"

class integer : public Statement{
public:
	virtual ~integer(){};
	integer(int id_in){id = id_in;}
	int getid(){return id;}
	void translate(std::ostream &dst){ dst << id;}
protected:
	int id;
};

#endif

#ifndef DOUBLEING_HPP
#define DOUBLEING_HPP

#include"Statement.hpp"

class doubleing : public Statement{
public:
	virtual ~doubleing(){};
	doubleing(double id_in){id = id_in;}
	double getid(){return id;}
	virtual void translate(std::ostream &dst)const override{dst<<id;}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {dst<<indent<<"<double> "<<id<<'\n';}
protected:
	double id;
};


#endif

#ifndef POINTER_HPP
#define POINTER_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class pointer : public Statement {
public:
	pointer(){};
	virtual ~pointer(){};
	virtual void translate(std::ostream &dst)const override{}
};


#endif

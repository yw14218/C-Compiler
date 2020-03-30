#ifndef EMPTYLINE_HPP
#define EMPTYLINE_HPP


#include "Statement.hpp"
class emptyline : public Statement {
public:
	emptyline(){};
	virtual ~emptyline(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {}
};


#endif

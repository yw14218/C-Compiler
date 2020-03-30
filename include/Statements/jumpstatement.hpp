#ifndef JUMPSTATEMENT_HPP
#define JUMPSTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class jumpstatement : public Statement {
public:
	jumpstatement(){};
	virtual ~jumpstatement(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<jump statement> "<<"jump";
	};
};

class breakstatement : public Statement {
public:
	breakstatement(){};
	virtual ~breakstatement(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<break statement> "<<"break";
	};
};

class returnstatement : public Statement {
public:
	returnstatement(){};
	returnstatement(Statementptr p1){left = p1;};
	Statementptr get_stat(){return left;};
	virtual ~returnstatement(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<break statement> "<<"break";
		if(left != NULL)
			dst<<"  ";left->treeprint(dst);dst<<'\n';
	};
private:
	Statementptr left;
};
class continuestatement : public Statement {
public:
	continuestatement(){};
	virtual ~continuestatement(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<continue statement> "<<"continue";
	};
};
#endif

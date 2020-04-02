#ifndef JUMPSTATEMENT_HPP
#define JUMPSTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class jumpstatement : public Statement {
public:
	jumpstatement(){};
	virtual ~jumpstatement(){};
	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<jump statement> "<<"jump"<<'\n';
	};
};

class breakstatement : public Statement {
public:
	breakstatement(){};
	virtual ~breakstatement(){};
	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<break statement> "<<"break"<<'\n';
	};
};

class returnstatement : public Statement {
public:
	returnstatement(){};
	returnstatement(Statementptr p1){left = p1;};
	Statementptr get_stat(){return left;};
	virtual ~returnstatement(){};
	virtual void translate(std::ostream &dst, std::string indent)const override{
		dst << indent;
		dst << "return ";
		if(left!=NULL){left -> translate(dst,"");}	
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<return statement> [ "<<'\n';
		if(left != NULL)
			{left->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
};
class continuestatement : public Statement {
public:
	continuestatement(){};
	virtual ~continuestatement(){};
	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Continue statement> continue"<<'\n';
	};
};
#endif

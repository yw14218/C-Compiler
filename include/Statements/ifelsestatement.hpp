#ifndef IFELSESTATEMENT_HPP
#define IFELSESTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class ifelsestatement: public Statement{
public:
	ifelsestatement(Statementptr p1, Statementptr p2, Statementptr p3){left = p1;mid = p2;right = p3;};
	ifelsestatement(Statementptr p1, Statementptr p2){left = p1;mid = p2;};
	virtual ~ifelsestatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_if(){return mid;};
	Statementptr get_else(){return right;};
	virtual void translate(std::ostream &dst, std::string indent)const override{
		dst << indent;
		dst << "if (";
		left -> translate(dst,indent);
		dst << "):" << std::endl;
		mid -> translate(dst, indent+"    ");
		if(right != NULL){
			dst << std::endl << "else:" << std::endl;
			right -> translate(dst, indent+"    ");		
		}
			
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<ifelse statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		mid->treeprint(dst,indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;
};

class switchstatement: public Statement {
public:
	switchstatement(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~switchstatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_stat(){return right;};
	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"Switch Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};

private:
	Statementptr left;
	Statementptr right;
};

#endif


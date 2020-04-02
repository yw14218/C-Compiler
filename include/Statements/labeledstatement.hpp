#ifndef LABELEDSTATEMENT_HPP
#define LABELEDSTATEMENT_HPP

#include "Statement.hpp" 
#include "Statementlist.hpp"

class labeledstatement: public Statement{
public:
	labeledstatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~labeledstatement(){};
	Statementptr get_label(){return left;};
	Statementptr get_stat(){return right;};
	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"Labeled Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
protected:
	Statementptr left;
	Statementptr right;

};

class caselabeledstatement : public Statement{
public:
	caselabeledstatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~caselabeledstatement(){};
	Statementptr get_label(){return left;};
	Statementptr get_stat(){return right;};;
  	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"CaseLabeled Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
protected:
	Statementptr left;
	Statementptr right;
};

class defaultlabeledstatement : public Statement{
public:
	defaultlabeledstatement(Statementptr p1){left = p1;};
	virtual ~defaultlabeledstatement(){};
	Statementptr get_stat(){return left;};
  	virtual void translate(std::ostream &dst, std::string indent)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"Default Statement> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
protected:
	Statementptr left;
};



#endif

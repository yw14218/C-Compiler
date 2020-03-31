#ifndef FUNCTIONCALL_HPP
#define FUNCTIONCALL_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class functioncall : public Statement{
public:
	virtual ~functioncall(){};
	functioncall(Statementptr p1){left = p1;}
	functioncall(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	//virtual void translate(std::ostream& dst){dst << left << "(" ;right -> translate(std::cout);dst << ")";}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Functioncall> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;

};

class functiondefinition : public Statement{
public:
	virtual ~functiondefinition(){};
	functiondefinition(Statementptr p1, Statementptr p2, Statementptr p3){left = p1 ; mid = p2;right = p3;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	Statementptr get_mid(){return mid;}
	//virtual void translate(std::ostream& dst){dst << left << "(" ;right -> translate(std::cout);dst << ")";}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Function definition>"<<" ["<<'\n';
		left->treeprint(dst, indent+"  ");
		mid->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;

};

#endif

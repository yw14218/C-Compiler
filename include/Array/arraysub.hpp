#ifndef ARRAYSUB_HPP
#define ARRAYSUB_HPP
#include"Statement.hpp"
#include"Statementlist.hpp"

class arraysub : public Statement{
public:
	virtual ~arraysub(){};
	arraysub(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_id(){return left;};
	Statementptr get_index(){return right;};
	virtual void translate(std::ostream &dst, std::string indent) const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Arraysub> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};


#endif

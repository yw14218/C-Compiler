#ifndef COMPOUNDSTAT_HPP
#define COMPOUNDSTAT_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class compoundstatement :public Statement{
public:
	compoundstatement(){};
	compoundstatement(Statementlistptr p1){left = p1;};
	compoundstatement(Statementlistptr p1, Statementlistptr p2){left = p1; right = p2;};
	virtual ~compoundstatement(){};
	Statementlistptr get_stat1(){return left;}
	Statementlistptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<Compound assignment>"<<" ["<<'\n';
		for(int i=0;i<left->size(),i++;)
		{
			dst<<'\n'<<"  ";
			(left->at(i))->treeprint(dst);
		}
		for(int i=0;i<right->size(),i++;)
		{
			dst<<'\n'<<"  ";
			(right->at(i))->treeprint(dst);
		}
		dst<<'\n'<<"]";
	};
private:
	Statementlistptr left;
	Statementlistptr right;
	
};

class global : public Statement{
public:
	virtual ~global(){};
	global(Statementlistptr p1){left = p1;};
	Statementlistptr get_stat1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<global>"<<" ["<<'\n';
		for(int i=0;i<left->size(),i++;)
		{
			dst<<'\n'<<"  ";
			(left->at(i))->treeprint(dst);
		}
		dst<<"]"<<'\n';
	};
private:
	Statementlistptr left;
};



#endif

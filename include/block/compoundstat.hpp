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
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		if(left != NULL)
		{
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->translate(dst,indent+"    ",addglobal,globalvariables);
			dst << std::endl;
		}
		}	
		if(right != NULL)
		{
		for(int i=0;i<right->size();i++)
		{
			(right->at(i))->translate(dst,indent+"    ",addglobal,globalvariables);
			dst << std::endl;
		}
		}
		if(left == NULL && right == NULL)
			{dst << "    pass"<<std::endl;	}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Compound statement> ["<<'\n';
		if(left != NULL)
		{
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->treeprint(dst, indent+"  ");
		}
		}	
		if(right != NULL)
		{
		for(int i=0;i<right->size();i++)
		{
			(right->at(i))->treeprint(dst, indent+"  ");
		}
		}
      		dst << indent << "]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		if(left != NULL)
		{
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->compile(input,p);
		}
		}	
		if(right != NULL)
		{
		for(int i=0;i<right->size();i++)
		{
			(right->at(i))->compile(input,p);
		}
		}
	}
	virtual double evaluate()const override{}
private:
	Statementlistptr left;
	Statementlistptr right;
	
};

class global : public Statement{
public:
	virtual ~global(){};
	global(Statementlistptr p1){left = p1;};
	Statementlistptr get_stat1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<global> ["<<'\n';
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->treeprint(dst, indent+"  ");
			dst<<'\n';
		}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementlistptr left;
};



#endif

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
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
	   if(right!=NULL){	
		dst << indent;		
		left -> translate(dst,"",addglobal,globalvariables);
		dst << "(";
		right -> translate(dst,"",addglobal,globalvariables);
		dst << ")";
           }
           else{dst << indent; left -> translate(dst,indent,addglobal,globalvariables); dst << "()";}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Functioncall> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;

};

class functiondefinition : public Statement{
public:
	virtual ~functiondefinition(){};
	functiondefinition(Statementptr p1, Statementptr p2, Statementptr p3){left = p1 ; mid = p2;right = p3;}
	functiondefinition(Statementptr p1, Statementptr p2){mid = p1 ; right = p2;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	Statementptr get_mid(){return mid;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		dst << "def ";
		mid -> translate(dst,"",addglobal,globalvariables);
		dst << std::endl;
		if(globalvariables.size() != 0)
		{
			for(int i=0;i<globalvariables.size();i++)
			{
				dst<<"    "<<"global "<<globalvariables[i]<<std::endl;
			}
		}	
		right ->translate(dst,"",addglobal,globalvariables);
		dst << std::endl;

	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Function definition>"<<" ["<<'\n';
		if(left != NULL)		
		{left->treeprint(dst, indent+"  ");}
		mid->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;

};

#endif

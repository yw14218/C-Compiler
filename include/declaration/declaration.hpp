#ifndef DECLARATION_HPP
#define DECLARATION_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

extern int NumVariables;

class declaration : public Statement {
public:
	declaration(Statementptr p1){left = p1;};
	virtual ~declaration(){};
	declaration(Statementptr p1,Statementptr p2){left = p1; mid = p2;};
	declaration(Statementptr p1,Statementlistptr p2){left = p1; right = p2;};
	Statementptr get_p1(){return left;}
	Statementlistptr get_p2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		dst << indent;
		left -> translate(dst,"",addglobal,globalvariables);
		if(NULL != mid)
		{mid->translate(dst,"",addglobal,globalvariables);}
		if(NULL != right)
		{
			for(int i=0;i<right->size();i++)
			{
				(right->at(i))->translate(dst, "",addglobal,globalvariables);
			}
		}
		}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Declaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(NULL != mid)
			{mid->treeprint(dst, indent+"  ");}
		if(NULL != right)
		{
			for(int i=0;i<right->size();i++)
			{
				(right->at(i))->treeprint(dst, indent+"  ");
			}
		}		
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
	if(mid != NULL)
		{
			mid->compile(input,p);
		}
	if(right != NULL)
		{
			for(int i=0;i<right->size();i++)
			{
				(right->at(i))->compile(input, p);
			}
		}
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementlistptr right;
	Statementptr mid;
};

class storageclassdeclaration : public Statement {
public:
	storageclassdeclaration(Statementptr p1){left = p1;};
	storageclassdeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~storageclassdeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Storageclassdeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class globaldeclaration: public Statement{
public:
	globaldeclaration(Statementptr p1){left = p1;}
	virtual ~globaldeclaration(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		addglobal = true;			
		left->translate(dst,"",addglobal,globalvariables);	
		std::cout<<std::endl;
		std::cout<<std::endl;
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<global declaration> ["<<'\n';		
		left->treeprint(dst, indent+"  ");	
	}
	virtual void compile(Context &input, int p = 2)const override{
		input.globalvariable = true;
		left->compile(input,p);	
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
};

class typespecdeclaration : public Statement {
public:
	typespecdeclaration(Statementptr p1){left = p1;};
	typespecdeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~typespecdeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Typespecdeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		left->compile(input,p);
		if(right != NULL)
		{
			right->compile(input,p);
		}	
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class typequaldeclaration : public Statement {
public:
	typequaldeclaration(Statementptr p1){left = p1;};
	typequaldeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~typequaldeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Typeequaldeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class declarator : public Statement {
public:
	declarator(Statementptr p1){left = p1;};
	virtual ~declarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<declarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
};

class initdeclarator : public Statement {
public:
	initdeclarator(Statementptr p1){left = p1;};
	initdeclarator(Statementptr p1, Statementptr p2){left = p1;right = p2;NumVariables++;};
	virtual ~initdeclarator(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		if(right == NULL){
			left -> translate(dst,"",addglobal,globalvariables);
			dst << "=0";
		}
		else{
			left -> translate(dst,"", addglobal,globalvariables);
			dst << "=";
			right -> translate(dst,"",addglobal,globalvariables);
		}	
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<initdeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		if(right == NULL)
		{
			left->compile(input,p);
		}
		if(right != NULL)
		{
			input.variableassigned = true;
			left->compile(input,p);
			right->compile(input,p);
		}
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class pointerdeclarator : public Statement {
public:
	pointerdeclarator(Statementptr p1){left = p1;NumVariables++;};
	virtual ~pointerdeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Pointerdeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
};

class arraydeclarator : public Statement {
public:
	arraydeclarator(){};
	arraydeclarator(Statementptr p1){left = p1;};
	arraydeclarator(Statementptr p1, Statementptr p2){left = p1; right = p2;NumVariables = NumVariables+right->evaluate();};
	virtual ~arraydeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Arraydeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");		
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class functiondeclarator : public Statement {
public:
	functiondeclarator(){};
	functiondeclarator(Statementptr p1){left = p1;};
	functiondeclarator(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~functiondeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,indent,addglobal,globalvariables);		
		dst << "(";
		if(right!=NULL){right -> translate(dst,indent,addglobal,globalvariables);}
		dst << "):";
		
			
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Function declarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		right->compile(input,p);	
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;
};

class initializer : public Statement {
public:
	initializer(Statementptr p1){left = p1;};
	virtual ~initializer(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,"",addglobal,globalvariables);		
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Initializer> ["<<'\n';
		if(left != NULL)
			{left->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		if(input.globalvariable == true || input.variableassigned == true)		
		{	
		double val = left->evaluate();
		input.print() << val << std::endl;
		input.print() << "\t.text" << std::endl; 
		input.print() << "\t.align\t2" << std::endl;
		}
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
};
#endif

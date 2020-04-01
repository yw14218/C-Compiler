#ifndef DECLARATION_HPP
#define DECLARATION_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class declaration : public Statement {
public:
	declaration(Statementptr p1){left = p1;};
	virtual ~declaration(){};
	declaration(Statementptr p1,Statementptr p2){left = p1; mid = p2;};
	declaration(Statementptr p1,Statementlistptr p2){left = p1; right = p2;};
	Statementptr get_p1(){return left;}
	Statementlistptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Storageclassdeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class typespecdeclaration : public Statement {
public:
	typespecdeclaration(Statementptr p1){left = p1;};
	typespecdeclaration(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~typespecdeclaration(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Typespecdeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Typeequaldeclaration> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class initdeclarator : public Statement {
public:
	initdeclarator(Statementptr p1){left = p1;};
	initdeclarator(Statementptr p1, Statementptr p2){left = p1;right = p2;};
	virtual ~initdeclarator(){};
	Statementptr get_p1(){return left;}
	Statementptr get_p2(){return right;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<initdeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class pointerdeclarator : public Statement {
public:
	pointerdeclarator(Statementptr p1){left = p1;};
	virtual ~pointerdeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Pointerdeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
};

class arraydeclarator : public Statement {
public:
	arraydeclarator(){};
	arraydeclarator(Statementptr p1){left = p1;};
	arraydeclarator(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~arraydeclarator(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Arraydeclarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");		
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
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
	virtual void translate(std::ostream &dst)const override{
		left -> translate(dst);		
		dst << "(";
		if(right!=NULL){right -> translate(dst);}
		dst << "):";
		
			
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Function declarator> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class initializer : public Statement {
public:
	initializer(Statementptr p1){left = p1;};
	virtual ~initializer(){};
	Statementptr get_p1(){return left;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Initializer> ["<<'\n';
		if(left != NULL)
			{left->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr left;
};
#endif

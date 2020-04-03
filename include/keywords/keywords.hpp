#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include"Statement.hpp"
#include"Statementlist.hpp" 

class typedefkey : public Statement{
public:
	typedefkey(){};
	virtual ~typedefkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"typedef"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class statickey : public Statement{
public:
	statickey(){};
	virtual ~statickey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"static"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class autokey : public Statement{
public:
	autokey(){};
	virtual ~autokey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"auto"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class registerkey: public Statement {
public:
	registerkey(){};
	virtual ~registerkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"register"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class voidkey: public Statement {
public:
	voidkey(){};
	virtual ~voidkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"void"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class charkey: public Statement {
public:
	charkey(){};
	virtual ~charkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"char"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class shortkey: public Statement {
public:
	shortkey(){};
	virtual ~shortkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"short"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class intkey: public Statement {
public:
	intkey(){};
	virtual ~intkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"int"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class longkey: public Statement {
public:
	longkey(){};
	virtual ~longkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"long"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}

};

class floatkey: public Statement {
public:
	floatkey(){};
	virtual ~floatkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"float"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class doublekey: public Statement {
public:
	doublekey(){};
	virtual ~doublekey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"double"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class signedkey: public Statement {
public:
	signedkey(){};
	virtual ~signedkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"signed"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

class unsignedkey: public Statement {
public:
	unsignedkey(){};
	virtual ~unsignedkey(){};
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"unsigned"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
};

#endif

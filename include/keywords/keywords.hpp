#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include"Statement.hpp"
#include"Statementlist.hpp" 

class typedefkey : public Statement{
public:
	typedefkey(){};
	virtual ~typedefkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"typedef"<<'\n';
	};
};

class statickey : public Statement{
public:
	statickey(){};
	virtual ~statickey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"static"<<'\n';
	};
};

class autokey : public Statement{
public:
	autokey(){};
	virtual ~autokey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"auto"<<'\n';
	};
};

class registerkey: public Statement {
public:
	registerkey(){};
	virtual ~registerkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"register"<<'\n';
	};
};

class voidkey: public Statement {
public:
	voidkey(){};
	virtual ~voidkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"void"<<'\n';
	};
};

class charkey: public Statement {
public:
	charkey(){};
	virtual ~charkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"char"<<'\n';
	};
};

class shortkey: public Statement {
public:
	shortkey(){};
	virtual ~shortkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"short"<<'\n';
	};
};

class intkey: public Statement {
public:
	intkey(){};
	virtual ~intkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"int"<<'\n';
	};
};

class longkey: public Statement {
public:
	longkey(){};
	virtual ~longkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"long"<<'\n';
	};

};

class floatkey: public Statement {
public:
	floatkey(){};
	virtual ~floatkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"float"<<'\n';
	};
};

class doublekey: public Statement {
public:
	doublekey(){};
	virtual ~doublekey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"double"<<'\n';
	};
};

class signedkey: public Statement {
public:
	signedkey(){};
	virtual ~signedkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"signed"<<'\n';
	};
};

class unsignedkey: public Statement {
public:
	unsignedkey(){};
	virtual ~unsignedkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<key> "<<"unsigned"<<'\n';
	};
};

#endif

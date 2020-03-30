#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include"Statement.hpp"
#include"Statementlist.hpp" 

class typedefkey : public Statement{
public:
	typedefkey(){};
	virtual ~typedefkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"typedef";
	};
};

class statickey : public Statement{
public:
	statickey(){};
	virtual ~statickey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"static";
	};
};

class autokey : public Statement{
public:
	autokey(){};
	virtual ~autokey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"auto";
	};
};

class registerkey: public Statement {
public:
	registerkey(){};
	virtual ~registerkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"register";
	};
};

class voidkey: public Statement {
public:
	voidkey(){};
	virtual ~voidkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"void";
	};
};

class charkey: public Statement {
public:
	charkey(){};
	virtual ~charkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"char";
	};
};

class shortkey: public Statement {
public:
	shortkey(){};
	virtual ~shortkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"short";
	};
};

class intkey: public Statement {
public:
	intkey(){};
	virtual ~intkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"int";
	};
};

class longkey: public Statement {
public:
	longkey(){};
	virtual ~longkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"long";
	};

};

class floatkey: public Statement {
public:
	floatkey(){};
	virtual ~floatkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"float";
	};
};

class doublekey: public Statement {
public:
	doublekey(){};
	virtual ~doublekey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"double";
	};
};

class signedkey: public Statement {
public:
	signedkey(){};
	virtual ~signedkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"signed";
	};
};

class unsignedkey: public Statement {
public:
	unsignedkey(){};
	virtual ~unsignedkey(){};
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<key> "<<"unsigned";
	};
};

#endif

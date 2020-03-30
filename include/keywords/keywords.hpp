#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include"Statement.hpp"
#include"Statementlist.hpp" 

class typedefkey : public Statement{
public:
	typedefkey(){};
	virtual ~typedefkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class statickey : public Statement{
public:
	statickey(){};
	virtual ~statickey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class autokey : public Statement{
public:
	autokey(){};
	virtual ~autokey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class registerkey: public Statement {
public:
	registerkey(){};
	virtual ~registerkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class voidkey: public Statement {
public:
	voidkey(){};
	virtual ~voidkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class charkey: public Statement {
public:
	charkey(){};
	virtual ~charkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class shortkey: public Statement {
public:
	shortkey(){};
	virtual ~shortkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class intkey: public Statement {
public:
	intkey(){};
	virtual ~intkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class longkey: public Statement {
public:
	longkey(){};
	virtual ~longkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class floatkey: public Statement {
public:
	floatkey(){};
	virtual ~floatkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class doublekey: public Statement {
public:
	doublekey(){};
	virtual ~doublekey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class signedkey: public Statement {
public:
	signedkey(){};
	virtual ~signedkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

class unsignedkey: public Statement {
public:
	unsignedkey(){};
	virtual ~unsignedkey(){};
	virtual void translate(std::ostream &dst)const override{}
};

#endif

#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

#include"Statement.hpp"

class typedefkey : public Statement{
public:
	typedefkey(){};
	virtual ~typedefkey(){};
};

class statickey : public Statement{
public:
	statickey(){};
	virtual ~statickey(){};
};

class autokey : public Statement{
public:
	autokey(){};
	virtual ~autokey(){};
};

class registerkey: public Statement {
public:
	registerkey(){};
	virtual ~registerkey(){};
};

class voidkey: public Statement {
public:
	voidkey(){};
	virtual ~voidkey(){};
};

class charkey: public Statement {
public:
	charkey(){};
	virtual ~charkey(){};
};

class shortkey: public Statement {
public:
	shortkey(){};
	virtual ~shortkey(){};
};

class intkey: public Statement {
public:
	intkey(){};
	virtual ~intkey(){};
};

class longkey: public Statement {
public:
	longkey(){};
	virtual ~longkey(){};
};

class floatkey: public Statement {
public:
	floatkey(){};
	virtual ~floatkey(){};
};

class doublekey: public Statement {
public:
	doublekey(){};
	virtual ~doublekey(){};
};

class signedkey: public Statement {
public:
	signedkey(){};
	virtual ~signedkey(){};
};

class unsignedkey: public Statement {
public:
	unsignedkey(){};
	virtual ~unsignedkey(){};
};

#endif

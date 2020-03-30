#ifndef UNARY_HPP
#define UNARY_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

class unaryplusplus : public Statement{
public:
	virtual ~unaryplusplus(){};
	unaryplusplus(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};


class unaryminusminus : public Statement{
public:
	virtual ~unaryminusminus(){};
	unaryminusminus(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class plusplusunary : public Statement{
public:
	virtual ~plusplusunary(){};
	plusplusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class minusminusunary : public Statement{
public:
	virtual ~minusminusunary(){};
	minusminusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class plusunary : public Statement{
public:
	virtual ~plusunary(){};
	plusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class minusunary : public Statement{
public:
	virtual ~minusunary(){};
	minusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class bitwiseandunary : public Statement{
public:
	virtual ~bitwiseandunary(){};
	bitwiseandunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class timesunary : public Statement{
public:
	virtual ~timesunary(){};
	timesunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class invertunary : public Statement{
public:
	virtual ~invertunary(){};
	invertunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class exclamunary : public Statement{
public:
	virtual ~exclamunary(){};
	exclamunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class sizeofunary : public Statement{
public:
	virtual ~sizeofunary(){};
	sizeofunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

class sizeofnameunary : public Statement{
public:
	virtual ~sizeofnameunary(){};
	sizeofnameunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr target;
};

#endif

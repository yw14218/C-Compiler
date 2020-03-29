#ifndef UNARY_HPP
#define UNARY_HPP

#include"Statement.hpp"

class unaryplusplus : public Statement{
public:
	virtual ~unaryplusplus(){};
	unaryplusplus(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};


class unaryminusminus : public Statement{
public:
	virtual ~unaryminusminus(){};
	unaryminusminus(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class plusplusunary : public Statement{
public:
	virtual ~plusplusunary(){};
	plusplusunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class minusminusunary : public Statement{
public:
	virtual ~minusminusunary(){};
	minusminusunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class plusunary : public Statement{
public:
	virtual ~plusunary(){};
	plusunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class minusunary : public Statement{
public:
	virtual ~minusunary(){};
	minusunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class bitwiseandunary : public Statement{
public:
	virtual ~bitwiseandunary(){};
	bitwiseandunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class timesunary : public Statement{
public:
	virtual ~timesunary(){};
	timesunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class invertunary : public Statement{
public:
	virtual ~invertunary(){};
	invertunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class exclamunary : public Statement{
public:
	virtual ~exclamunary(){};
	exclamunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class sizeofunary : public Statement{
public:
	virtual ~sizeofunary(){};
	sizeofunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

class sizeofnameunary : public Statement{
public:
	virtual ~sizeofnameunary(){};
	sizeofnameunary(Statementptr unaryin){subs[0] =unaryin;}
	Statementptr get_unary(){return subs[0];};
};

#endif

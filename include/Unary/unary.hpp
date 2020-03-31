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
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Unaryplusplus>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};


class unaryminusminus : public Statement{
public:
	virtual ~unaryminusminus(){};
	unaryminusminus(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Unaryminusminus>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class plusplusunary : public Statement{
public:
	virtual ~plusplusunary(){};
	plusplusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Plusplusunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class minusminusunary : public Statement{
public:
	virtual ~minusminusunary(){};
	minusminusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Minusminusunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class plusunary : public Statement{
public:
	virtual ~plusunary(){};
	plusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<plusunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class minusunary : public Statement{
public:
	virtual ~minusunary(){};
	minusunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<minusunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class bitwiseandunary : public Statement{
public:
	virtual ~bitwiseandunary(){};
	bitwiseandunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<bitwiseandunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};

private:
	Statementptr target;
};

class timesunary : public Statement{
public:
	virtual ~timesunary(){};
	timesunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Timesunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};

private:
	Statementptr target;
};

class invertunary : public Statement{
public:
	virtual ~invertunary(){};
	invertunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<invertunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class exclamunary : public Statement{
public:
	virtual ~exclamunary(){};
	exclamunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<"<!unary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class sizeofunary : public Statement{
public:
	virtual ~sizeofunary(){};
	sizeofunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"sizeofunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

class sizeofnameunary : public Statement{
public:
	virtual ~sizeofnameunary(){};
	sizeofnameunary(Statementptr unaryin){target =unaryin;}
	Statementptr get_unary(){return target;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<sizeofnameunary>"<<" ["<<'\n';
		target->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
private:
	Statementptr target;
};

#endif

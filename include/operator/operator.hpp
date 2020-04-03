#ifndef OPERATOR_HPP
#define OPERATOR_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"


class timesoperator : public Statement{
public:
	virtual ~timesoperator(){};
	timesoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst," ",addglobal,globalvariables);
		dst << "*";
		right -> translate(dst," ",addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Times operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};


class divideoperator : public Statement{
public:
	virtual ~divideoperator(){};
	divideoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}	

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Divide operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class percentageoperator : public Statement{
public:
	virtual ~percentageoperator(){};
	percentageoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Percentage operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class plusoperator : public Statement{
public:
	virtual ~plusoperator(){};
	plusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,indent,addglobal,globalvariables);
		dst << "+";
		right -> translate(dst,indent,addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Plus operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class minusoperator : public Statement{
public:
	virtual ~minusoperator(){};
	minusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,indent,addglobal,globalvariables);
		dst << "-";
		right -> translate(dst,indent,addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Minus operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class lshiftoperator : public Statement{
public:
	virtual ~lshiftoperator(){};
	lshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
 	
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Leftshift operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class rshiftoperator : public Statement{
public:
	virtual ~rshiftoperator(){};
	rshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Rightshift operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class smalleroperator : public Statement{
public:
	virtual ~smalleroperator(){};
	smalleroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst," ",addglobal,globalvariables);
		dst << "<";
		right -> translate(dst," ",addglobal,globalvariables);	
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Smaller operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class biggeroperator : public Statement{
public:
	virtual ~biggeroperator(){};
	biggeroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{		left -> translate(dst," ",addglobal,globalvariables);
		dst << ">";
		right -> translate(dst," ",addglobal,globalvariables);}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Bigger operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class sequaloperator : public Statement{
public:
	virtual ~sequaloperator(){};
	sequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Smallerequal operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class bequaloperator : public Statement{
public:
	virtual ~bequaloperator(){};
	bequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Biggerequal operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;

};
class equalequaloperator : public Statement{
public:
	virtual ~equalequaloperator(){};
	equalequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst," ",addglobal,globalvariables);
		dst << "==";
		right -> translate(dst," ",addglobal,globalvariables);	
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Equalequal operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class notequaloperator : public Statement{
public:
	virtual ~notequaloperator(){};
	notequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Notequal operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class bitwiseandoperator : public Statement{
public:
	virtual ~bitwiseandoperator(){};
	bitwiseandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Bitwiseand operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class logicalandoperator : public Statement{
public:
	virtual ~logicalandoperator(){};
	logicalandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,"",addglobal,globalvariables);
		dst << " and ";
		right -> translate(dst,"",addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Logicaland operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class logicaloroperator : public Statement{
public:
	virtual ~logicaloroperator(){};
	logicaloroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		left -> translate(dst,"",addglobal,globalvariables);
		dst << " or ";
		right -> translate(dst,"",addglobal,globalvariables);
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Logicalor operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class xoroperator : public Statement{
public:
	virtual ~xoroperator(){};
	xoroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"xor operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class oroperator : public Statement{
public:
	virtual ~oroperator(){};
	oroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Bitwiseor operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
};
class conditionaloperator : public Statement{
public:
	virtual ~conditionaloperator(){};
	conditionaloperator(Statementptr p1, Statementptr p2, Statementptr p3){left = p1 ; right = p2; mid = p3;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	Statementptr get_stat3(){return mid;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Conditional operator> ["<<'\n';
		left->treeprint(dst,indent+"  ");
		mid->treeprint(dst,indent+"  ");
		right->treeprint(dst,indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
private:
	Statementptr left;
	Statementptr right;
	Statementptr mid;
};

#endif

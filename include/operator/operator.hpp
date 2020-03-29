#ifndef OPERATOR_HPP
#define OPERATOR_HPP

#include"Statement.hpp"

class Operator : public Statement{
public:
	virtual ~Operator(){};
	Operator(Statementptr p1, Statementptr p2){left = p1 ; right = p2; }
  virtual void translate(std::ostream &dst)const override{}
protected:
	Statementptr left;
	Statementprt right;
};

class timesoperator : public Operator{
public:
	virtual ~timesoperator(){};
	timesoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  void translate(std::ostream &dst){ dst << left << "*" << right;}
};


class divideoperator : public Operator{
public:
	virtual ~divideoperator(){};
	divideoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  void translate(std::ostream &dst){ dst << left << "/" << right;}
};

class percentageoperator : public Operator{
public:
	virtual ~percentageoperator(){};
	percentageoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};

class plusoperator : public Operator{
public:
	virtual ~plusoperator(){};
	plusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  void translate(std::ostream &dst){ dst << left << "+" << right;}
};

class minusoperator : public Operator{
public:
	virtual ~minusoperator(){};
	minusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
        void translate(std::ostream &dst){ dst << left << "-" << right;}
};
class lshiftoperator : public Operator{
public:
	virtual ~lshiftoperator(){};
	lshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class rshiftoperator : public Operator{
public:
	virtual ~rshiftoperator(){};
	rshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class smalleroperator : public Operator{
public:
	virtual ~smalleroperator(){};
	smalleroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
        void translate(std::ostream &dst){ dst << left << "<" << right;}
};

class biggeroperator : public Operator{
public:
	virtual ~biggeroperator(){};
	biggeroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};

class sequaloperator : public Operator{
public:
	virtual ~sequaloperator(){};
	sequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};

class bequaloperator : public Operator{
public:
	virtual ~bequaloperator(){};
	bequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
        void translate(std::ostream &dst){ dst << left << "==" << right;}
};
class equalequaloperator : public Operator{
public:
	virtual ~equalequaloperator(){};
	equalequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class notequaloperator : public Operator{
public:
	virtual ~notequaloperator(){};
	notequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class bitwiseandoperator : public Operator{
public:
	virtual ~bitwiseandoperator(){};
	bitwiseandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class logicalandoperator : public Operator{
public:
	virtual ~logicalandoperator(){};
	logicalandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
        void translate(std::ostream &dst){ dst << left << " and " << right;}
};
class logicaloroperator : public Operator{
public:
	virtual ~logicaloroperator(){};
	logicaloroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
        void translate(std::ostream &dst){ dst << left << " or " << right;}
};
class xoroperator : public Operator{
public:
	virtual ~xoroperator(){};
	xoroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
};
class oroperator : public Operator{
public:
	virtual ~oroperator(){};
	oroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  void translate(std::ostream &dst){ dst << left << "*" << right;}
};
/*class conditionaloperator : public Operator{
public:
	virtual ~conditionaloperator(){};
	conditionaloperator(Statementptr p1, Statementptr p2, Statementptr &p3){left = p1 ; right = p2; subs[2] = p3;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	Statementptr get_stat3(){return subs[2];}
};*/


#endif

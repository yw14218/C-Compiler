#ifndef OPERATOR_HPP
#define OPERATOR_HPP

#include"Statement.hpp"

class timesoperator : public Statement{
public:
	virtual ~timesoperator(){};
	timesoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "*" << subs[1];}
};


class divideoperator : public Statement{
public:
	virtual ~divideoperator(){};
	divideoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "/" << subs[1];}
};

class percentageoperator : public Statement{
public:
	virtual ~percentageoperator(){};
	percentageoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};

class plusoperator : public Statement{
public:
	virtual ~plusoperator(){};
	plusoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "+" << subs[1];}
};

class minusoperator : public Statement{
public:
	virtual ~minusoperator(){};
	minusoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "-" << subs[1];}
};
class lshiftoperator : public Statement{
public:
	virtual ~lshiftoperator(){};
	lshiftoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class rshiftoperator : public Statement{
public:
	virtual ~rshiftoperator(){};
	rshiftoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class smalleroperator : public Statement{
public:
	virtual ~smalleroperator(){};
	smalleroperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "<" << subs[1];}
};

class biggeroperator : public Statement{
public:
	virtual ~biggeroperator(){};
	biggeroperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};

class sequaloperator : public Statement{
public:
	virtual ~sequaloperator(){};
	sequaloperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};

class bequaloperator : public Statement{
public:
	virtual ~bequaloperator(){};
	bequaloperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "==" << subs[1];}
};
class equalequaloperator : public Statement{
public:
	virtual ~equalequaloperator(){};
	equalequaloperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class notequaloperator : public Statement{
public:
	virtual ~notequaloperator(){};
	notequaloperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class bitwiseandoperator : public Statement{
public:
	virtual ~bitwiseandoperator(){};
	bitwiseandoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class logicalandoperator : public Statement{
public:
	virtual ~logicalandoperator(){};
	logicalandoperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "and" << subs[1];}
};
class logicaloroperator : public Statement{
public:
	virtual ~logicaloroperator(){};
	logicaloroperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "or" << subs[1];}
};
class xoroperator : public Statement{
public:
	virtual ~xoroperator(){};
	xoroperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
};
class oroperator : public Statement{
public:
	virtual ~oroperator(){};
	oroperator(Statementptr p1, Statementptr p2){subs[0] = p1 ; subs[1] = p2;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
        void translate(std::ostream &dst){ dst << subs[0] << "*" << subs[1];}
};
class conditionaloperator : public Statement{
public:
	virtual ~conditionaloperator(){};
	conditionaloperator(Statementptr p1, Statementptr p2, Statementptr &p3){subs[0] = p1 ; subs[1] = p2; subs[2] = p3;}
	Statementptr get_stat1(){return subs[0];}
	Statementptr get_stat2(){return subs[1];}
	Statementptr get_stat3(){return subs[2];}
};


#endif

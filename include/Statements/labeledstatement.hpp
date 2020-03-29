#ifndef LABELEDSTATEMENT_HPP
#define LABELEDSTATEMENT_HPP

#include "Statement.hpp" 

class labeledstatement: public Statement{
public:
	labeledstatement(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~labeledstatement(){};
	Statementptr get_label(){return subs[0];};
	Statementptr get_stat(){return subs[1];};
};

class caselabeledstatement : public Statement{
public:
	caselabeledstatement(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~caselabeledstatement(){};
	Statementptr get_label(){return subs[0];};
	Statementptr get_stat(){return subs[1];};;
};

class defaultlabeledstatement : public Statement{
public:
	defaultlabeledstatement(Statementptr p1){subs[0] = p1;};
	virtual ~defaultlabeledstatement(){};
	Statementptr get_stat(){return subs[0];};
};



#endif

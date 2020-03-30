
#ifndef WHILEDOFORSTATEMENT_HPP
#define WHILEDOFORSTATEMENT_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class whilestatement: public Statement {
public:
	whilestatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~whilestatement(){};
	Statementptr get_condition(){return left;};
	Statementptr get_stats(){return right;};
	virtual void translate(std::ostream &dst)const override{}
        //void translate(){ std::cout << "while (" << subs[0] << "):" << std::endl;
	//		  std::cout << "    " << subs[1] << std::endl;
//	}	
private:
	Statementptr left;
	Statementptr right;
};

class dostatement: public Statement {
public:
	dostatement(Statementptr p1, Statementptr p2){left = p1; right = p2;};
	virtual ~dostatement(){};
	Statementptr get_stats(){return left;};
	Statementptr get_condition(){return right;};	
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr left;
	Statementptr right;
};

class forstatement: public Statement {
public:
	forstatement(Statementptr p1, Statementptr p2){leftleft = p1; left = p2;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3){leftleft = p1; left = p2;right = p3;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3, Statementptr p4){leftleft = p1; left = p2;right = p3; rightright = p4;} ;
	virtual ~forstatement(){};
	Statementptr get_stat1(){return leftleft;};
	Statementptr get_stat2(){return left;};
	Statementptr get_stat3(){return right;};
	Statementptr get_stat4(){return rightright;};
	virtual void translate(std::ostream &dst)const override{}
private:
	Statementptr leftleft;
	Statementptr left;
	Statementptr right;
	Statementptr rightright;
};

#endif

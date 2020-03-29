
#ifndef WHILEDOFORSTATEMENT_HPP
#define WHILEDOFORSTATEMENT_HPP

#include "Statement.hpp"

class whilestatement: public Statement {
public:
	whilestatement(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~whilestatement(){};
	Statementptr get_condition(){return subs[0];};
	Statementptr get_stats(){return subs[1];};
        void translate(){ std::cout << "while (" << subs[0] << "):" << std::endl;
			  std::cout << "    " << subs[1] << std::endl;
	}	
};

class dostatement: public Statement {
public:
	dostatement(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	virtual ~dostatement(){};
	Statementptr get_stats(){return subs[0];};
	Statementptr get_condition(){return subs[1];};	
};

class forstatement: public Statement {
public:
	forstatement(Statementptr p1, Statementptr p2){subs[0] = p1; subs[1] = p2;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3){subs[0] = p1; subs[1] = p2;subs[2] = p3;};
	forstatement(Statementptr p1, Statementptr p2, Statementptr p3, Statementptr p4){subs[0] = p1;subs[1] = p2; subs[2] = p3; subs[3] = p4;} ;
	virtual ~forstatement(){};
	Statementptr get_stat1(){return subs[0];};
	Statementptr get_stat2(){return subs[1];};
	Statementptr get_stat3(){return subs[2];};
	Statementptr get_stat4(){return subs[3];};
};

#endif

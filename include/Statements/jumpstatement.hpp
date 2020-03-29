#ifndef JUMPSTATEMENT_HPP
#define JUMPSTATEMENT_HPP

#include "Statement.hpp"

class jumpstatement : public Statement {
public:
	jumpstatement(){};
	virtual ~jumpstatement(){};
};

class breakstatement : public Statement {
public:
	breakstatement(){};
	virtual ~breakstatement(){};
};

class returnstatement : public Statement {
public:
	returnstatement(){};
	returnstatement(Statementptr p1){subs[0] = p1;};
	virtual ~returnstatement(){};
};
class continuestatement : public Statement {
public:
	continuestatement(){};
	virtual ~continuestatement(){};
};
#endif

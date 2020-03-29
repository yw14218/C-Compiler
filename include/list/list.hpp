#ifndef LIST_HPP
#define LIST_HPP

#include "Statement.hpp"

class list : public Statement {
public:
	list(std::vector<Statementptr> p1){subs = p1;};
	virtual ~list(){};
	Statementlist get_list(){return subs;}
};


class expressionlist : public list {
public:
	using list::list;
};

class initializerlist : public list {
public:
	using list::list;
};

class declarationlist : public list {
public:	
	using list::list;
};

class qualifierlist : public list {
public:	
	using list::list;
};

class enumeratorlist : public list {
public:	
	using list::list;
};

class parameterlist : public list {
public:	
	using list::list;
};

class identifierlist : public list {
public:	
	using list::list;
};



#endif

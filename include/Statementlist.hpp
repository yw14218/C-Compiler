#ifndef STATEMENTLIST_HPP
#define STATEMENTLIST_HPP

#include"Statement.hpp"

#include<vector>

typedef std::vector<Statementptr> Statementlist;
typedef Statementlist* Statementlistptr;

inline Statementlistptr listgen(Statementptr input){
	Statementlistptr list = new Statementlist();
	list->push_back(input);
	return list;
};

inline Statementlistptr listcombine(Statementlistptr list, Statementptr input){
	list->push_back(input);
	return list;
};
	
#endif

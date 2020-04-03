#ifndef LIST_HPP
#define LIST_HPP

#include "Statement.hpp"
#include "Statementlist.hpp"

class list : public Statement {
public:
	list(Statementlistptr p1){statementlistptr = p1;};
	virtual ~list(){};
	Statementlistptr get_list(){return statementlistptr;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		int content = statementlistptr -> size();
		if(content == 0){return;}
		if(content == 1){dst << indent; statementlistptr -> at(0) -> translate(dst,"",addglobal,globalvariables);}
		else{
			for(int i =0; i<content-1;i++){
         			dst << indent; statementlistptr -> at(i) -> translate(dst,"",addglobal,globalvariables); dst << ",";
			}
			dst << indent; statementlistptr -> at(content-1) -> translate(dst,"",addglobal,globalvariables);
		}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<list> ["<<'\n';
		for(int i=0;i<statementlistptr->size();i++){
			(statementlistptr->at(i))->treeprint(dst, indent+"  ");
		}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}

protected:
  	Statementlistptr statementlistptr;
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

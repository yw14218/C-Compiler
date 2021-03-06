#ifndef ROOT_HPP
#define ROOT_HPP

class root : public Statement{
public:
	virtual ~root(){};
	root(Statementlistptr p1){left = p1;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		if(left != NULL)
		{
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->                                translate(dst,indent,addglobal,globalvariables);
		}
		}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override{
		dst<<indent<<"Root start ["<<'\n';
		if(left != NULL)
		{
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->treeprint(dst, indent+"  ");
		}
		}
      		dst << indent << "]"<<'\n';
	}
	virtual void compile(Context &input, int p = 2)const override{
		if(left != NULL){		
		for(int i=0;i<left->size();i++)
		{
			(left->at(i))->compile(input,p);
		}
		}
	}
	virtual double evaluate()const override{}

private:
	Statementlistptr left;
	std::vector<std::string> globalvariables;
};


#endif

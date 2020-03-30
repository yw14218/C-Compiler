#ifndef ROOT_HPP
#define ROOT_HPP

class root : public Statement{
public:
	virtual ~root(){};
	root(Statementlistptr p1){left = p1;}
	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override{}

private:
	Statementlistptr left;
};


#endif

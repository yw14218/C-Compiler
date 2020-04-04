#ifndef FUNCTIONCALL_HPP
#define FUNCTIONCALL_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"

extern std::string Funcnameadd;
extern std::vector<std::string> Funcname;
extern int NumVariables;

class functioncall : public Statement{
public:
	virtual ~functioncall(){};
	functioncall(Statementptr p1){left = p1;}
	functioncall(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
	   if(right!=NULL){	
		dst << indent;		
		left -> translate(dst,"",addglobal,globalvariables);
		dst << "(";
		right -> translate(dst,"",addglobal,globalvariables);
		dst << ")";
           }
           else{dst << indent; left -> translate(dst,indent,addglobal,globalvariables); dst << "()";}
	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Functioncall> ["<<'\n';
		left->treeprint(dst, indent+"  ");
		if(right != NULL)
			{right->treeprint(dst, indent+"  ");}
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr right;

};

class functiondefinition : public Statement{
public:
	virtual ~functiondefinition(){};
	functiondefinition(Statementptr p1, Statementptr p2, Statementptr p3){left = p1 ; mid = p2;right = p3;
		Funcname.push_back(Funcnameadd);
		Funcnameadd = "";
		}
	functiondefinition(Statementptr p1, Statementptr p2){mid = p1 ; right = p2;}
	Statementptr get_id(){return left;}
	Statementptr get_argument(){return right;}
	Statementptr get_mid(){return mid;}

	virtual void translate(std::ostream &dst,std::string indent, bool &addglobal, std::vector<std::string> &globalvariables)const override{
		dst << "def ";
		mid -> translate(dst,"",addglobal,globalvariables);
		dst << std::endl;
		if(globalvariables.size() != 0)
		{
			for(int i=0;i<globalvariables.size();i++)
			{
				dst<<"    "<<"global "<<globalvariables[i]<<std::endl;
			}
		}	
		right ->translate(dst,"",addglobal,globalvariables);
		dst << std::endl;

	}
	virtual void treeprint(std::ostream &dst, std::string indent)const override {
		dst<<indent<<"<Function definition>"<<" ["<<'\n';
		if(left != NULL)		
		{left->treeprint(dst, indent+"  ");}
		mid->treeprint(dst, indent+"  ");
		right->treeprint(dst, indent+"  ");
		dst<<indent<<"]"<<'\n';
	};
	virtual void compile(Context &input, int p = 2)const override{
		input.print() <<"\t.global\t" << Funcname[0] << std::endl;
		input.print() <<"\t.ent\t" << Funcname[0] << std::endl;
		input.print() << Funcname[0]<<":"<<std::endl;
		input.print() <<"\taddiu\t" << "$sp,$sp,-" << (NumVariables*4)+12 << std::endl;
		input.print() <<"\tsw\t" << "$31,"<< (NumVariables*4)+8<< "($sp)" << std::endl;
		input.print() <<"\tsw\t" << "$fp,"<< (NumVariables*4)+4<< "($sp)" << std::endl;
		input.print() <<"\tmove\t" << "$fp,$sp" << std::endl;
		if(left != NULL)
		{
			left->compile(input,p);
		}		
		mid->compile(input,p);
		right->compile(input,p);	
		input.print() <<"\tmove\t" << "$sp,$fp" << std::endl;
		input.print() <<"\tlw\t" <<"$fp," << (NumVariables*4)+4 << "($sp)" << std::endl;
		input.print() <<"\tlw\t" << "$31,"<< (NumVariables*4)+8<< "($sp)" << std::endl;
		input.print() <<"\taddiu\t" << "$sp,$sp," <<(NumVariables*4)+12 << std::endl;
		input.print()<<"\tj\t" <<"$31" << std::endl;
		input.print() <<"\tnop"<< std::endl;
		input.print() << std::endl;
		input.print() <<"\t.end\t" << Funcname[0] << std::endl;
		Funcname.erase(Funcname.begin());
	}
	virtual double evaluate()const override{}
private:
	Statementptr left;
	Statementptr mid;
	Statementptr right;

};

#endif

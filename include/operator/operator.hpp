#ifndef OPERATOR_HPP
#define OPERATOR_HPP

#include"Statement.hpp"
#include"Statementlist.hpp"


class timesoperator : public Statement{
public:
	virtual ~timesoperator(){};
	timesoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  //virtual void translate(std::ostream &dst){ dst << left << "*" << right;}
  	virtual void translate(std::ostream &dst)const override{
		left ->translate(dst);
		dst << "*";
		right ->translate(dst);
		}
	  virtual void treeprint(std::ostream &dst)const override {
		dst<<"<times operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};


class divideoperator : public Statement{
public:
	virtual ~divideoperator(){};
	divideoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  //virtual void translate(std::ostream &dst){ dst << left << "/" << right;}

	virtual void translate(std::ostream &dst)const override{
		left ->translate(dst);
		dst << "/";
		right ->translate(dst);
	}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<divide operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class percentageoperator : public Statement{
public:
	virtual ~percentageoperator(){};
	percentageoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "%";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<percentage operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class plusoperator : public Statement{
public:
	virtual ~plusoperator(){};
	plusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  //virtual void translate(std::ostream &dst){ dst << left << "+" << right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "+";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<plus operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class minusoperator : public Statement{
public:
	virtual ~minusoperator(){};
	minusoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
   //     virtual void translate(std::ostream &dst){ dst << left << "-" << right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "-";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<minus operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class lshiftoperator : public Statement{
public:
	virtual ~lshiftoperator(){};
	lshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	//virtual void translate(std::ostream &dst)const override{}
	virtual void translate(std::ostream &dst)const override{
		left ->translate(dst);
		dst << "<<";
		right ->translate(dst);
	}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<lshift operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class rshiftoperator : public Statement{
public:
	virtual ~rshiftoperator(){};
	rshiftoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	//virtual void translate(std::ostream &dst)const override{}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << ">>";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<rshift operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class smalleroperator : public Statement{
public:
	virtual ~smalleroperator(){};
	smalleroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "<";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<smaller operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class biggeroperator : public Statement{
public:
	virtual ~biggeroperator(){};
	biggeroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << ">";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<bigger operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class sequaloperator : public Statement{
public:
	virtual ~sequaloperator(){};
	sequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "<=";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<smallerequal operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};

class bequaloperator : public Statement{
public:
	virtual ~bequaloperator(){};
	bequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<biggerequal operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;

};
class equalequaloperator : public Statement{
public:
	virtual ~equalequaloperator(){};
	equalequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "==";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<equalequal operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class notequaloperator : public Statement{
public:
	virtual ~notequaloperator(){};
	notequaloperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << "!=";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<notequal operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class bitwiseandoperator : public Statement{
public:
	virtual ~bitwiseandoperator(){};
	bitwiseandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	//virtual virtual void translate(std::ostream &dst)const override{}
  	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<bitwiseand operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class logicalandoperator : public Statement{
public:
	virtual ~logicalandoperator(){};
	logicalandoperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << " and ";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<logicaland operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class logicaloroperator : public Statement{
public:
	virtual ~logicaloroperator(){};
	logicaloroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{
			left ->translate(dst);
			dst << " or ";
			right ->translate(dst);
		}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<logicalor operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class xoroperator : public Statement{
public:
	virtual ~xoroperator(){};
	xoroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	//virtual virtual void translate(std::ostream &dst)const override{}
  	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<xor operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class oroperator : public Statement{
public:
	virtual ~oroperator(){};
	oroperator(Statementptr p1, Statementptr p2){left = p1 ; right = p2;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
  	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<or operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
};
class conditionaloperator : public Statement{
public:
	virtual ~conditionaloperator(){};
	conditionaloperator(Statementptr p1, Statementptr p2, Statementptr p3){left = p1 ; right = p2; mid = p3;}
	Statementptr get_stat1(){return left;}
	Statementptr get_stat2(){return right;}
	Statementptr get_stat3(){return mid;}
	//virtual virtual void translate(std::ostream &dst)const override{}
  	virtual void translate(std::ostream &dst)const override{}
	virtual void treeprint(std::ostream &dst)const override {
		dst<<"<conditional operator>"<<" ["<<'\n';
		dst<<"  ";left->treeprint(dst);dst<<'\n';
		dst<<"  ";mid->treeprint(dst);dst<<'\n';
		dst<<"  ";right->treeprint(dst);dst<<'\n';
		dst<<"]"<<'\n';
	};
private:
	Statementptr left;
	Statementptr right;
	Statementptr mid;
};

#endif

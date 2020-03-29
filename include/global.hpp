#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include "statement.hpp"

class Global : public Statement
{
public:
  Global(StatementPtr tree){subs.push_back(tree);}
  void generatePython(std::ostream &os, PythonContext &context, int scopeDepth = 0) const{
       subs[0]->generatePython(grammar);
       std::cout << std::endl;
       std::cout<<"if __name__ == \"__main__\":"<<std::endl;
       std::cout<<"    import sys"<<std::endl;
       std::cout<<"    ret=main()"<<std::endl;
       std::cout<<"    sys.exit(ret)"<<std::endl;}
};

#endif



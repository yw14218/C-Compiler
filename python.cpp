#include "ast.hpp"

int main()
{
    const ASTNode *ast=parseAST();
    
    ast->translate(std::cout);
    std::cout<<std::endl;
    std::cout<<"# Boilerplat"<<std::endl;
    std::cout<<"if __name__ == \"__main__\":"<<std::endl;
    std::cout<<"    import sys"<<std::endl;
    std::cout<<"    ret=main()"<<std::endl;
    std::cout<<"    sys.exit(ret)"<<std::endl;

    return 0;
}

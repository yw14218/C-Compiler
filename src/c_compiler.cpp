#include "ast.hpp"

int main(int argc ,char *argv[])
{

    const Statement *ast=parseAST();
   	std::cout<< "START " << std::endl;	
	freopen (argv[2],"r",stdin);

    const Ast_Node *ast=parseAST();
	std::cout<< std::endl;	
	
	freopen (argv[4],"w",stdout);
    if(argv[1] == "--translate"){
        ast -> translate(std::cout);
        std::cout << std::endl;
    }

    return 0;
}

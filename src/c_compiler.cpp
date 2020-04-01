#include "ast.hpp"
extern FILE *yyin;

int main(int argc ,char *argv[]){
	std::cout<< "START " << std::endl;	
	yyin = freopen (argv[2],"r",stdin);
    Statementptr ast=parseAST();
   	//std::cout<< "Parse finished " << std::endl;
	std::string indent = "";
    freopen (argv[4], "w",stdout);
    if(argv[1] == "--translate"){
        ast -> translate(std::cout);
        std::cout << std::endl;
        std::cout<<"if __name__ == \"__main__\":"<<std::endl;
        std::cout<<"    import sys"<<std::endl;
        std::cout<<"    ret=main()"<<std::endl;
        std::cout<<"    sys.exit(ret)"<<std::endl;
    }
	if(std::string(argv[1]) == "--treeprint"){
	std::cout<<"treeprint start"<<std::endl;
	ast->treeprint(std::cout, indent);
    std::cout << std::endl;
	}
 
	//std::cout<<"finished"<<std::endl;
    return 0;
}

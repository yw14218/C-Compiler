#include "ast.hpp"

int main(int argc ,char *argv[])
{
    const Statement *ast=parseAST();
   	std::cout<< "START " << std::endl;
	freopen (argv[2],"r",stdin);
	freopen (argv[4],"w",stdout);
    if(argv[1] == "--translate"){
        ast -> translate(std::cout);
        std::cout << std::endl;
        std::cout<<"if __name__ == \"__main__\":"<<std::endl;
        std::cout<<"    import sys"<<std::endl;
        std::cout<<"    ret=main()"<<std::endl;
        std::cout<<"    sys.exit(ret)"<<std::endl;
    }

    return 0;
}

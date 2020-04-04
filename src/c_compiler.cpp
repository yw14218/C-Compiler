#include "ast.hpp"
extern FILE *yyin;
extern std::string Funcnameadd;
extern std::vector<std::string> Funcname;
extern int NumVariables;

int main(int argc ,char *argv[]){
	std::cout<< "START " << std::endl;	
	yyin = freopen (argv[2],"r",stdin);
    Statementptr ast=parseAST();
	std::cout<<Funcname.size()<<std::endl;
   	//std::cout<< "Parse finished " << std::endl;
	std::string indent = "";
    freopen (argv[4], "w",stdout);
    if(std::string(argv[1]) == "--translate"){
        std::vector<std::string> globalvar;
	bool addglobal = false;
        ast -> translate(std::cout,indent,addglobal,globalvar);
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
 	if(std::string(argv[1]) == "-S"){
	std::ostream& out = std::cout;	
	Context mips(&out);
	ast -> compile(mips);
	}
	//std::cout<<"finished"<<std::endl;
    return 0;
}

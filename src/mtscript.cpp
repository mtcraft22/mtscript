#include "tokens.hpp"
#include <ios>
#include <scanner.hpp>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main (int argc, char** argv){
    if (argc > 1){
        fstream archivo = fstream(argv[1]);
        
            cout << archivo.;
        
    }else{
        string line = "";
        while (line != "exit") {
            cout << "mtscript> ";
            cin >> line;
            cout << "ok> " << line << endl;
        }
    }
    return 0;
}
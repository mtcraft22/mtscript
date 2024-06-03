#include "tokens.hpp"
#include <scanner.hpp>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv){
    if (argc > 1){
        fstream archivo = fstream(argv[1]);
        std::string filedata;
        while (!archivo.eof()) {
            string pre ;
            archivo >> pre;
            filedata += pre;
        }
        scaner escaneador = scaner(filedata);
        escaneador.scan();
        for(Token i : escaneador.getTokens()){
            cout << i.to_string() << endl;
        }
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
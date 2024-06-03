#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv){
    if (argc > 1){
        fstream archivo = fstream(argv[1]);
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
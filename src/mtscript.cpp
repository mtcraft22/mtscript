#include "tokens.hpp"
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <ios>
#include <iostream>
#include <scanner.hpp>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  if (argc > 1) {
    ifstream archivo = ifstream(argv[1]);
    const unsigned long int size = filesystem::file_size(argv[1]);
    char filedata[size];
    archivo.read(filedata, filesystem::file_size(argv[1]));
    scaner escaneador = scaner(string(filedata));
    escaneador.scan();
    for (Token i : escaneador.getTokens()) {

      cout << i.To_string();
    }

  } else {
    string line = "";
    while (line != "exit") {
      cout << "mtscript> ";
      cin >> line;
      scaner escaneador = scaner(string(line));
      escaneador.scan();
      cout << "OK> ";
      for (Token i : escaneador.getTokens()) {

        cout << i.To_string();
      }
    }
  }
  return 0;
}
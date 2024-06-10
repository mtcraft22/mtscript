/*
    Copyright (C) 2024  mtcraft22

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "tokens.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <scanner.hpp>
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
    string apend = "";
    while (true) {
      cout << "mtscript> ";
      getline(cin,apend);
      apend += "\n";
      if (apend == "run\n"){
        break;
      }
      line += apend;
      apend = "";
    }
    scaner escaneador = scaner(string(line));
    escaneador.scan();
    for (Token i : escaneador.getTokens()) {

        cout << i.To_string();
      }
  }
  return 0;
}
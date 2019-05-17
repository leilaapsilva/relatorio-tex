#include "RemoveVogais.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

RemoveVogais::RemoveVogais() {
}

RemoveVogais::~RemoveVogais() {
}

void RemoveVogais::copia(string fileIn, string fileOut) {
    string line;
    ifstream input(fileIn.c_str());
    ofstream output;
    output.open(fileOut.c_str());

    if (input.is_open()) {
        while (getline(input, line)) {
            for (int i = 0; i < line.length(); i++) {
                char c = line.at(i);
                switch (c) {
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case ' ': break;
                    default:
                    {
                        output << c;
                        break;
                    }
                }
            }
            output << endl;
        }
    }

    input.close();
    output.close();
}

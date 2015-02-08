#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inputFile;
    inputFile.open("names.txt");
    string names[5162];

    while (!inputFile.eof()) {
        for (int i = 0; i < 5162; i++) {
            getline(inputFile, names[i]);
            cout << names[i] << endl;
        }
    }


    return 0;

}

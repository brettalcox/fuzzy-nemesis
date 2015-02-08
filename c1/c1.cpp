#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));
    unsigned short randomNumber;
    randomNumber = rand() % 5162 + 1;

    ifstream inputFile;
    inputFile.open("names.txt");
    string names[5162];

    while (!inputFile.eof()) {
        for (int i = 0; i < 5162; i++) {
            getline(inputFile, names[i]);
        }
    }

    cout << "Press enter for your random name!" << endl;
    getchar();
    cout << names[randomNumber] << endl;


    return 0;

}

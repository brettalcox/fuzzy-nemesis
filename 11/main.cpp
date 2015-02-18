#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include "GenRandom.h"
#include <fstream>

using namespace std;

int main()
{

    cout << "RANDOM PASSWORD GENERATOR" << endl << endl;
    int passwordLength;
    cout << "How long would you like your password to be?: ";
    cin >> passwordLength;

    GenRandom password;
    //srand(time(NULL));
    int selection;

    cout << endl << endl << "Password: ";

    fstream outputFile;
    outputFile.open("passwords.txt", ios::out | ios::app);
    for (int i = 0; i < 1000001; i++) {
        for (int i = 0; i < passwordLength + 1; i++) {
            selection = rand() % 4 + 1;
            password.randomType(selection);
        }
        outputFile << endl;
    }

    cout << endl << endl;

    return 0;
}

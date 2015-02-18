#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include "GenRandom.h"

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

    for (int i = 0; i < passwordLength + 1; i++) {
        selection = rand() % 4 + 1;
        password.randomType(selection);
    }

    cout << endl << endl;

    return 0;
}

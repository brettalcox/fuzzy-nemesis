#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(NULL));
    unsigned short randomNumber;
    randomNumber = rand() % 100 + 1;
    unsigned short guess;

    cout << "I'm thinking of a number between 1 and 100..." << endl << endl << "Guess?";
    cout << endl << endl << ": ";
    cin >> guess;

    return 0;
}

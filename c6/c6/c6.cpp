#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Hand.h"
using namespace std;

int main() {

    srand(time(NULL));
    unsigned short hand = rand() % 3 + 1;
    unsigned short userChoice;
    cout << "Welcome to Rock, Paper, Scissors!" << endl << endl;

    cout << "Rock, paper, or scissors?" << endl << endl;
    cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl << endl << ": ";
    cin >> userChoice;


    return 0;
}

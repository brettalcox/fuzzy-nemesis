#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Hand.h"
using namespace std;

int main() {

    srand(time(NULL));
    unsigned short hand = rand() % 3 + 1;
    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    return 0;
}

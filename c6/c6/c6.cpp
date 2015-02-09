#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Hand.h"
using namespace std;

int main() {

    Hand userPlayer, computerPlayer;
    bool wonTheGame = false;

    srand(time(NULL));
    unsigned short hand;
    unsigned short userChoice;
    cout << "Welcome to Rock, Paper, Scissors!" << endl << endl;

    do {
        hand = rand() % 3 + 1;
        computerPlayer.setState(hand);
        cout << "Rock, paper, or scissors?" << endl << endl;
        cout << "1 = Rock, 2 = Paper, 3 = Scissors" << endl << endl << ": ";
        cin >> userChoice;
        userPlayer.setState(userChoice);

        if ((userPlayer.getState() == 1) && (computerPlayer.getState() == 1)) {
            cout << "Tie! Go again!" << endl;
        }
        else if ((userPlayer.getState() == 1) && (computerPlayer.getState() == 2)) {
            cout << "Paper beats rock! Go again!" << endl;
            computerPlayer.addWin();
        }



    } while (!wonTheGame);
    return 0;
}

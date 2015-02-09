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

        //User choosing Rock

        if ((userPlayer.getState() == 1) && (computerPlayer.getState() == 1)) {
            cout << "Tie!" << endl;
        }
        else if ((userPlayer.getState() == 1) && (computerPlayer.getState() == 2)) {
            cout << "Paper beats rock!" << endl;
            computerPlayer.addWin();
        }
        else if ((userPlayer.getState() == 1) && (computerPlayer.getState() == 3)) {
            cout << "Rock beats scissors!" << endl;
            userPlayer.addWin();
        }

        //User choosing Paper

        if ((userPlayer.getState() == 2) && (computerPlayer.getState() == 1)) {
            cout << "Paper beats rock!" << endl;
            userPlayer.addWin();
        }
        else if ((userPlayer.getState() == 2) && (computerPlayer.getState() == 2)) {
            cout << "Tie!" << endl;
        }
        else if ((userPlayer.getState() == 2) && (computerPlayer.getState() == 3)) {
            cout << "Scissors beat paper!" << endl;
            computerPlayer.addWin();
        }

        //User choosing scissors

         if ((userPlayer.getState() == 3) && (computerPlayer.getState() == 1)) {
            cout << "Rock beats scissor!" << endl;
            computerPlayer.addWin();
        }
        else if ((userPlayer.getState() == 3) && (computerPlayer.getState() == 2)) {
            cout << "Scissors beat paper!" << endl;
            userPlayer.addWin();
        }
        else if ((userPlayer.getState() == 3) && (computerPlayer.getState() == 3)) {
            cout << "Tie!" << endl;
        }



    } while (!wonTheGame);
    return 0;
}

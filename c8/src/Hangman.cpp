#include "Hangman.h"
#include <iostream>
#include <iomanip>
using namespace std;

Hangman::Hangman()
{
    //ctor
}

Hangman::~Hangman()
{
    //dtor
}

void Hangman::addToHangman(int add) {

    switch (add) {
        case 0:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            break;
        case 1:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            break;
        case 2:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "   |   " << endl;
            break;
        case 3:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "  \\|   " << endl;
            break;
        case 4:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "  \\|/  " << endl;
            break;
        case 5:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "  \\|/  " << endl;
            cout << setw(7) << "   |   " << endl;
            break;
        case 6:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "  \\|/  " << endl;
            cout << setw(7) << "   |   " << endl;
            cout << setw(7) << "  /    " << endl;
            break;
        case 7:
            cout << setw(7) << "_______" << endl << setw(7) << "   |   " << endl;
            cout << setw(7) << "   O   " << endl;
            cout << setw(7) << "  \\|/  " << endl;
            cout << setw(7) << "   |   " << endl;
            cout << setw(7) << "  / \\  " << endl;
            break;
    }

}

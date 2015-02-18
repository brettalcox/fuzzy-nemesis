#include "GenRandom.h"

GenRandom::GenRandom()
{
    //ctor

    srand(time(NULL));

    for (char i = 65; i < 91; i++) {
        alphaUpper.push_back(i);
    }

    for (char i = 97; i < 123; i++) {
        alphaLower.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        number.push_back(i);
    }

    for (char i = 33; i < 48; i++) {
        symbol.push_back(i);
    }

    for (char i = 58; i < 65; i++) {
        symbol.push_back(i);
    }
}

GenRandom::~GenRandom()
{
    //dtor
}

char GenRandom::getAlphaUpper() {
    //srand(time(NULL));
    int random = rand() % 25;
    return alphaUpper.at(random);
}

char GenRandom::getAlphaLower() {
    //srand(time(NULL));
    int random = rand() % 25;
    return alphaLower.at(random);
}

int GenRandom::getNumber() {
    //srand(time(NULL));
    int random = rand() % 9;
    return number.at(random);
}

char GenRandom::getSymbol() {
    //srand(time(NULL));
    int random = rand() % 22;
    return symbol.at(random);
}

void GenRandom::randomType(int selection) {

    switch (selection) {
        case 1:
            cout << getAlphaUpper();
            break;
        case 2:
            cout << getAlphaLower();
            break;
        case 3:
            cout << getNumber();
            break;
        case 4:
            cout << getSymbol();
            break;
    }
}



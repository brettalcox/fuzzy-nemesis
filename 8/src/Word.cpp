#include "Word.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;

Word::Word()
{
    //ctor
}

Word::~Word()
{
    //dtor
}

void Word::setWordArray(vector<string> array) {
    WordArray = array;
}

string Word::selectWord() {
    srand(time(NULL));
    int sizeOfList;
    int selection;
    sizeOfList = WordArray.size();
    selection = rand() % sizeOfList + 1;

    wordLength = WordArray[selection].length();
    stringToVector(WordArray[selection]);
    return WordArray[selection];
}

int Word::returnWordLength() {
    return wordLength;
}

void Word::stringToVector(string word) {
    int startSlice = 0;
    for (int i = 0; i < wordLength; i++) {
        SelectedWord.push_back(word.substr(startSlice, 1));
        startSlice++;
    }
    for (int i = 0; i < returnWordLength(); i++) {
        HashedWord.push_back("-");
    }
}

vector<string> Word::getStringVector() {
    return SelectedWord;
}

vector<string> Word::getHashedVector() {
    return HashedWord;
}

void Word::setUsedLetter(string letter) {
    UsedLetters.push_back(letter);
}

vector<string> Word::getUsedLetterVector() {
    return UsedLetters;
}

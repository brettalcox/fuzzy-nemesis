#include "File.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>

File::File()
{
    //ctor
}

File::~File()
{
    //dtor
}

void File::openFile() {
    string line;
    ifstream wordList("words.txt");

    if (!wordList) {
        cout << "Error opening file" << endl;
    }

    while (getline(wordList, line)) {
        WordArray.push_back(line);
    }

}

string File::selectWord() {
    srand(time(NULL));
    int sizeOfList;
    int selection;
    sizeOfList = WordArray.size();
    selection = rand() % sizeOfList + 1;

    wordLength = WordArray[selection].length();
    stringToVector(WordArray[selection]);
    return WordArray[selection];
}

int File::returnWordLength() {
    return wordLength;
}

void File::stringToVector(string word) {
    int startSlice = 0;
    for (int i = 0; i < wordLength; i++) {
        SelectedWord.push_back(word.substr(startSlice, 1));
        startSlice++;
    }
    for (int i = 0; i < returnWordLength(); i++) {
        HashedWord.push_back("-");
    }
}

vector<string> File::getStringVector() {
    return SelectedWord;
}

vector<string> File::getHashedVector() {
    return HashedWord;
}

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

vector<string> File::getWordArray() {
    return WordArray;
}

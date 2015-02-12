#include "Sentence.h"
#include <vector>
#include <time.h>
#include <cstdlib>

Sentence::Sentence()
{
    //ctor

}

Sentence::~Sentence()
{
    //dtor
}

string Sentence::selectRandomWord(vector<string> chooseWord) {
    srand(time(NULL));
    int randomSelection = rand() % (chooseWord.size() - 1);
    string selectedWord = chooseWord.at(randomSelection);
    return selectedWord;
}

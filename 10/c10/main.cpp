#include <iostream>
#include "Sentence.h"
#include "OpenFile.h"

using namespace std;

int main()
{
    OpenFile open;
    open.openFiles();
    string noun, verb, preposition, sentence;

    Sentence randomSentence;
    string article = randomSentence.selectRandomWord(open.getArticles());
    noun = randomSentence.selectRandomWord(open.getNouns());
    verb = randomSentence.selectRandomWord(open.getVerbs());
    preposition = randomSentence.selectRandomWord(open.getPrepositions());
    sentence = article + " " + noun + " " + verb + " " + preposition;
    cout << sentence << endl << endl;

}

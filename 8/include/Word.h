#ifndef WORD_H
#define WORD_H
#include <string>
#include <vector>
using namespace std;


class Word
{
    public:
        Word();
        virtual ~Word();
        void setWordArray(vector<string>);
        string selectWord();
        int returnWordLength();
        vector<string> getStringVector();
        vector<string> getHashedVector();
        void setUsedLetter(string);
        vector<string> getUsedLetterVector();
    protected:
    private:
        vector<string> WordArray;
        vector<string> SelectedWord;
        vector<string> HashedWord;
        vector<string> UsedLetters;
        int wordLength;
        void stringToVector(string);
};

#endif // WORD_H

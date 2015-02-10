#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class File
{
    public:
        File();
        virtual ~File();
        void openFile();
        string selectWord();
        int returnWordLength();
        vector<string> getStringVector();
    protected:
    private:
        vector<string> WordArray;
        vector<string> SelectedWord;
        int wordLength;
        void stringToVector(string);
};

#endif // FILE_H

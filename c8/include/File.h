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
    protected:
    private:
        vector<string> WordArray;
        int wordLength;
};

#endif // FILE_H

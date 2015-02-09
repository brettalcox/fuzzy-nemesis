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
    protected:
    private:
        vector<string> WordArray;
};

#endif // FILE_H

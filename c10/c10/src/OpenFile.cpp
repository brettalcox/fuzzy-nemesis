#include "OpenFile.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

OpenFile::OpenFile()
{
    //ctor

}

OpenFile::~OpenFile()
{
    //dtor
}

void OpenFile::openFiles() {

ifstream inputFile;
    inputFile.open("nounlist.txt");
    string dummy;

    while (!inputFile.eof()) {
            getline(inputFile, dummy);
            nouns.push_back(dummy);
    }
    inputFile.close();

    inputFile.open("2syllableverbs.txt");
    while (!inputFile.eof()) {
            getline(inputFile, dummy);
            verbs.push_back(dummy);
    }
    inputFile.close();

    inputFile.open("prepositions.txt");
    while (!inputFile.eof()) {
            getline(inputFile, dummy);
            prepositions.push_back(dummy);
    }
    inputFile.close();

}

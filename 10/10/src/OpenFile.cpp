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

    inputFile.open("verb.txt");
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


    inputFile.open("article.txt");
    while (!inputFile.eof()) {
            getline(inputFile, dummy);
            articles.push_back(dummy);
    }
    inputFile.close();
}

vector<string> OpenFile::getArticles() { return articles; }
vector<string> OpenFile::getNouns() { return nouns; }
vector<string> OpenFile::getVerbs() { return verbs; }
vector<string> OpenFile::getPrepositions() { return prepositions; }

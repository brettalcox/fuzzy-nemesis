#ifndef GENRANDOM_H
#define GENRANDOM_H
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;


class GenRandom
{
    public:
        GenRandom();
        virtual ~GenRandom();
        char getAlphaUpper();
        char getAlphaLower();
        int getNumber();
        char getSymbol();
        void randomType(int);
    protected:
    private:
        vector<char> alphaUpper;
        vector<char> alphaLower;
        vector<int> number;
        vector<char> symbol;

};

#endif // GENRANDOM_H

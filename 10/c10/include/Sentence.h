#ifndef SENTENCE_H
#define SENTENCE_H
#include <vector>
#include <string>
using namespace std;


class Sentence
{
    public:
        Sentence();
        virtual ~Sentence();
        string selectRandomWord(vector<string>);
    protected:
    private:
};

#endif // SENTENCE_H

#ifndef OPENFILE_H
#define OPENFILE_H
#include <vector>
#include <string>
using namespace std;


class OpenFile
{
    public:
        OpenFile();
        virtual ~OpenFile();
        vector<string> getArticles();
        vector<string> getNouns();
        vector<string> getVerbs();
        vector<string> getPrepositions();
        void openFiles();
    protected:
    private:
        vector<string> articles;
        vector<string> nouns;
        vector<string> verbs;
        vector<string> prepositions;

};

#endif // OPENFILE_H

#ifndef LOVERS_H
#define LOVERS_H
#include <vector>


class Lovers
{
    public:
        Lovers();
        virtual ~Lovers();
    protected:
    private:
        vector<string> Lovers;
        vector<string> UsedChars;
        vector<int> CharCount;
};

#endif // LOVERS_H

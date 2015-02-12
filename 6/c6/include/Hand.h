#ifndef HAND_H
#define HAND_H


class Hand
{
    public:
        Hand();
        virtual ~Hand();

        void setState(int);
        unsigned short getState();
        void addWin();
        unsigned short getWin();

    protected:
    private:
        unsigned short state;
        unsigned short wins = 0;
};

#endif // HAND_H

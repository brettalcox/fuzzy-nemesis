#ifndef HAND_H
#define HAND_H


class Hand
{
    public:
        Hand();
        virtual ~Hand();
        void setState(int);
        unsigned short getState() const;
    protected:
    private:
        unsigned short state;
};

#endif // HAND_H

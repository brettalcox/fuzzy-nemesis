#ifndef HAND_H
#define HAND_H


class Hand
{
    public:
        Hand();
        virtual ~Hand();
        void setState(const Hand& state) const;
    protected:
    private:
        unsigned short state;
};

#endif // HAND_H

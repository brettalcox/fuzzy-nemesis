#include "Hand.h"

Hand::Hand()
{
    //ctor
}

Hand::~Hand()
{
    //dtor
}

void Hand::setState(int handState) {
    switch (handState) {
        case 1:
            state = 1;
            break;
        case 2:
            state = 2;
            break;
        case 3:
            state = 3;
            break;
        default:
            break;
    }
}

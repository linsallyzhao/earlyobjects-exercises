#ifndef INTRANGE2_H
#define INTRANGE2_H

#include <iostream>

class IntRange2
{
    private:
        int input, lower, upper;
    public:
        class TooLow
        {};
        class TooHigh
        {};

        IntRange2(int low, int high)
        {
            lower = low;
            upper = high;
        }

        int getInput()
        {
            std::cin >> input;
            if (input < lower)
                throw TooLow();
            else if (input > upper)
                throw TooHigh();
            return input;
        }
};

#endif


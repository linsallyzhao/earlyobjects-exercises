#ifndef INTRANGE_H
#define INTRANGE_H

#include <iostream>

class IntRange
{
    private:
        int input, lower, upper;
    public:
        class OutOfRange
        {};
        IntRange(int low, int high)
        {
            lower = low;
            upper = high;
        }

        int getInput()
        {
            std::cin >> input;
            if (input < lower || input > upper)
                throw OutOfRange();
            return input;
        }
};

#endif


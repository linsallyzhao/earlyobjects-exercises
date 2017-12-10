#ifndef INTRANGE3_H
#define INTRANGE3_H

#include <iostream>

class IntRange3
{
    private:
        int input, lower, upper;
    public:
        class OutOfRange
        {
            public:
                int value;
                OutOfRange(int i)
                {
                    value = i;
                }
        };

        IntRange3(int low, int high)
        {
            lower = low;
            upper = high;
        }

        int getInput()
        {
            std::cin >> input;
            if (input < lower || input > upper)
                throw OutOfRange(input);
            return input;
        }
};

#endif


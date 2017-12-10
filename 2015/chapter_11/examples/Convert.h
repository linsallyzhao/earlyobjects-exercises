#include <istream>

class IntClass
{
    private:
        int value;
    public:
        IntClass(int intValue)
        {
            value = intValue;
        }

        int getValue() const {return value; }
};



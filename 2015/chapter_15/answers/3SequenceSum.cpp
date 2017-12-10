#include <iostream>

class AbstractSeq
{
    public:
        virtual int fun(int k) = 0;
        void printSeq(int k, int m);
        int sumSeq(int k, int m);
};

void AbstractSeq::printSeq(int k, int m)
{
    for (k; k <= m; k++)
        std::cout << fun(k) << " ";
    std::cout << std::endl;
}
int AbstractSeq::sumSeq(int k, int m)
{
    int total = 0;
    for (k; k <= m; k++)
        total += fun(k);
    return total;
}

class Odd : public AbstractSeq
{
    public:
        virtual int fun(int k) { return 2 * k + 1; }
};

class Even : public AbstractSeq
{
    public:
        virtual int fun(int k) { return 2 * k; }
};

int main()
{
    Odd oddNum;
    oddNum.printSeq(0, 5);
    std::cout << "Sum of odd (0 to 5) " << oddNum.sumSeq(0, 5) << std::endl;

    Even evenNum;
    evenNum.printSeq(0, 5);
    std::cout << "Sum of even (0 to 5) " << evenNum.sumSeq(0, 5) << std::endl;

    return 0;
}

#include <iostream>
#include <string>

class Squares
{
    private:
        int length;
        int *sq;
    public:
        Squares(int len)
        {
            length = len;
            sq = new int[length];
            for (int k = 0; k < length; k++)
            {
                sq[k] = (k + 1) * (k + 1);
            }
            std::cout << "Construct an object of size " << length
                      << std::endl;
        }

        void print()
        {
            for (int k = 0; k < length; k++)
                std::cout << sq[k] << "  ";
            std::cout << std::endl;
        }

        ~Squares()
        {
            delete [] sq;
            std::cout << "Destructor for object of size " << length << std::endl;
        }
};

void outputSquares(Squares *sqPtr)
{
    std::cout << "The list of squares is: ";
    sqPtr->print();
}

int main()
{
    Squares sqs(5);
    std::cout << "The first 5 sqares are: ";
    sqs.print();

    Squares *sqPtr = new Squares(3);
    outputSquares(sqPtr);
    delete sqPtr;

    return 0;
}


#include <iostream>
#include <cmath>

int sumDigit(int num);
int main()
{
    for (int index = 1; index < 1000; index++)
    {
        if (sumDigit(index) == sumDigit(pow(index, 2)) &&
            sumDigit(index) == sumDigit(pow(index, 3)))
            std::cout << "match " << index << std::endl;
    }

    return 0;
}
int sumDigit(int num)
{
    int total = 0;
    for (int count = 9; count >= 0; count--)
    {
        if (num >= pow(10, count))
        {
            int facter = pow(10, count);
            total += num / facter;
            num = num - (num / facter * facter);
        }
    }
    return total;
}



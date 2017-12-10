#include <iostream>

class SimpleStat
{
    private :
        int largest,
            sum,
            count;

        bool isNewLargest(int);

    public :
        SimpleStat();
        bool addNumber(int);
        double getAverage();

        int getLargest()
        {
            return largest;
        }

        int getCount()
        {
            return count;
        }

};

SimpleStat::SimpleStat()
{
    largest = sum = count = 0;
}

bool SimpleStat::addNumber(int num)
{
    bool goodNum = true;
    if (num >= 0)
    {
        sum += num;
        count++;
        if (isNewLargest(num))
            largest = num;
    }
    else
        goodNum = false;

    return goodNum;
}

bool SimpleStat::isNewLargest(int num)
{
    if (num > largest)
        return true;
    else
        return false;
}

double SimpleStat::getAverage()
{
    if (count > 0)
        return static_cast<double>(sum) / count;
    else
        return 0;
}

int main()
{
    int num;

    SimpleStat statHelper;

    std::cout << "Please enter the set of num-negative integer\n"
              << "values you want to average. Separate them with \n"
              << "spaces and enter -1 after the last value. \n\n";

    std::cin >> num;
    while (num >= 0)
    {
        statHelper.addNumber(num);
        std::cin >> num;
    }

    std::cout << "\nYou entered " << statHelper.getCount() << " values. \n"
              << "The largest value was " << statHelper.getLargest() << std::endl
              << "The average value was " << statHelper.getAverage() << std::endl;

    return 0;
}


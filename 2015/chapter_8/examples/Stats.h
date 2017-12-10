#ifndef STATS_H
#define STATS_H
#include <iostream>

class Stats
{
    private:
        double data[30];
        int count;

    public:
        Stats()
        {
            count = 0;
        }
        bool storeValue(double n);
        double getOne(int index)
        {
            return data[index];
        }
        double total();
        double average();
        int highest();
        int lowest();
};

bool Stats::storeValue(double n)
{
    bool put = true;
    if (count < 29)
    {
        data[count] = n;
        count++;
    }
    else
    {
        std::cout << "Too many data!";
        put = false;
    }
    return put;
}

double Stats::total()
{
    double total = 0;
    for (int index = 0; index < count; index++)
    {
        total += data[index];
    }
    return total;
}

double Stats::average()
{
    double avg = total() / count;
    return avg;
}

int Stats::highest()
{
    int index = 0;
    double highest = data[0];
    int record = 0;
    for (index = 1; index < count; index++)
    {
        if (data[index] > highest)
        {
            highest = data[index];
            record = index;
        }
    }
    return record;
}

int Stats::lowest()
{
    int index = 0;
    double lowest = data[0];
    int record = 0;
    for (index = 1; index < count; index++)
    {
        if (data[index] < lowest)
        {
            lowest = data[index];
            record = index;
        }
    }
    return record;
}

#endif

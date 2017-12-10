#include <iostream>
#include <string>
#include <iomanip>

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
    double highest = data[0];
    int record = 0;
    for (index = 1; index < count; index++)
    {
        if (data[index] < highest)
        {
            highest = data[index];
            record = index;
        }
    }
    return record;
}

int main()
{
    std::string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    Stats rainfall;
    std::cout << "Please enter the rain fall data.\n";
    for (int i = 0; i < 12; i++)
    {
        double temp;
        std::cout << "Month #" << (i + 1) << ": ";
        std::cin >> temp;
        rainfall.storeValue(temp);
    }

    double total = rainfall.total();
    double avg = rainfall.average();
    int dryIndex = rainfall.lowest();
    int wetIndex = rainfall.highest();

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total rainfall: " << total << " inches \n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Average monthly rainfall: " << avg << " inches\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The least rain fell in " << month[dryIndex] << " with " 
              << rainfall.getOne(dryIndex) << " inches. \n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The most rain fell in " << month[wetIndex] << " with " 
              << rainfall.getOne(wetIndex) << " inches. \n";

    return 0;
}


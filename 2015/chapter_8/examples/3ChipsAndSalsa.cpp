#include <iostream>
#include <string>

int getHighest(int num[], int size);
int getLowest(int num[], int size);

int main()
{
    std::string name[] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sale[5];
    int total = 0;

    for (int index = 0; index < 5; index++)
    {
        std::cout << "Please enter the sale for " << name[index] << ": ";
        std::cin >> sale[index];
        total += sale[index];
    }

    for (int index = 0; index < 5; index++)
    {
        std::cout << "The sale for " << name[index] << " is " 
                  << sale[index] << " jars. \n";
    }
    std::cout << "The total sale was " << total << " jars. \n";

    int highIndex = getHighest(sale, 5);
    int lowIndex = getLowest(sale, 5);

    std::cout << "The best seller was " << name[highIndex] << ", "
              << sale[highIndex] << " jars. \n";
    std::cout << "The lowest was " << name[lowIndex] << ", "
              << sale[lowIndex] << " jars. \n";

    return 0;
}

int getHighest(int num[], int size)
{
    int index = 0;
    int highest = num[index];
    int record = 0;

    for (index = 1; index < size; index++)
    {
        if (num[index] > highest)
        {
            highest = num[index];
            record = index;
        }
    }

    return record;
}


int getLowest(int num[], int size)
{
    int index = 0;
    int lowest = num[index];
    int record = 0;

    for (index = 1; index < size; index++)
    {
        if (num[index] < lowest)
        {
            lowest = num[index];
            record = index;
        }
    }

    return record;
}


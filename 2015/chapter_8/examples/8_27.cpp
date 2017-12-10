#include <iostream>
#include <vector>

double avgVector(std::vector<int>);

int main()
{
    std::vector<int> values;
    int numValues;
    double average;

    std::cout << "How many values do you wish to average?";
    std::cin >> numValues;

    for (int count = 0; count < numValues; count++)
    {
        int tempValue;

        std::cout << "Enter an integer value: ";
        std::cin >> tempValue;
        values.push_back(tempValue);
    }

    average = avgVector(values);
    std::cout << "Average: " << average << std::endl;
    return 0;
}

double avgVector(std::vector <int> vect)
{
    int total = 0;
    double avg = 0.0;

    if (vect.empty())
        std::cout << "No values to average. \n";
    else
    {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }
    return avg;
}

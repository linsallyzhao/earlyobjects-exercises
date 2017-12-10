#include <iostream>
#include <vector>

void displayVector(std::vector<int>);
void sortVector(std::vector<int> &);

int main()
{
    const int SIZE = 6;

    std::vector<int> values(SIZE);

    std::cout << "Please enter " << SIZE << " integers separated be spaces.\n";

    for (int i = 0; i < SIZE; i++)
        std::cin >> values[i];

    std::cout << "\nThe unsorted values entered are:\n";
    displayVector(values);

    sortVector(values);

    std::cout << "The sorted values are: \n";
    displayVector(values);

    return 0;
}

void sortVector(std::vector<int> &numbers)
{
    int temp;
    bool swap;

    do
    {
        swap = false;
        for (unsigned count = 0; count < numbers.size() - 1; count++)
        {
            if (numbers[count] > numbers[count + 1])
            {
                temp = numbers[count];
                numbers[count] = numbers[count + 1];
                numbers[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

void displayVector(std::vector<int> numbers)
{
    for (unsigned count = 0; count < numbers.size(); count++)
        std::cout << numbers[count] << " ";
    std::cout << std::endl;
}


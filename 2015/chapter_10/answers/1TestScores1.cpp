#include <iostream>

void selectSort(int *, int);
double avgScore(int *, int);
void showScore(int *, int);

int main()
{
    int num;
    int *scores;
    double avg;
    std::cout << "How many scores do you have?";
    std::cin >> num;
    scores = new int[num];

    for (int index = 0; index < num; index++)
    {
        std::cout << "Please enter the score: ";
        std::cin >> *(scores + index);
    }

    selectSort(scores, num);
    avg = avgScore(scores, num);

    showScore(scores, num);
    std::cout << "The average score is " << avg << std::endl;

    return 0;
}

void selectSort(int *array, int size)
{
    int scan;
    int minIndex;
    int minValue;

    for (scan = 0; scan < (size - 1); scan++)
    {
        minIndex = scan;
        minValue = *(array + scan);
        for (int index = scan + 1; index < size; index++)
        {
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
            *(array + minIndex) = *(array + scan);
            *(array + scan) = minValue;
        }
    }
}

double avgScore(int *array, int size)
{
    double average = 0;
    int total = 0;
    for (int index = 0; index < size; index++)
    {
        total += *(array + index);
    }
    average = total / (size * 1.0);

    return average;
}

void showScore(int *array, int size)
{
    for (int index = 0; index < size; index++)
        std::cout << *(array + index) << "  ";
    std::cout << std::endl;
}




#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int score;
};

void selectSort(Student *, int);
double avgScore(Student *, int);
void showScore(Student *, int);

int main()
{
    int num;
    Student *stuPtr;
    double avg;
    std::cout << "How many scores do you have?\n";
    std::cin >> num;
    stuPtr = new Student[num];

    for (int index = 0; index < num; index++)
    {
        std::cin.ignore();
        std::cout << "Please enter the name of student: ";
        std::getline(std::cin, stuPtr[index].name);
        std::cout << "Please enter the score: ";
        std::cin >> (stuPtr + index)->score;
    }
    std::cout << "Original array:\n";
    showScore(stuPtr, num);

    selectSort(stuPtr, num);
    avg = avgScore(stuPtr, num);

    showScore(stuPtr, num);
    std::cout << "The average score is " << avg << std::endl;

    return 0;
}

void selectSort(Student *array, int size)
{
    int scan;
    int minIndex;
    int minValue;

    for (scan = 0; scan < (size - 1); scan++)
    {
        Student temp = *(array + scan);
        minIndex = scan;
        minValue = (array + scan)->score;
        for (int index = scan + 1; index < size; index++)
        {
            if ((array + index)->score < minValue)
            {
                minValue = (array + index)->score;
                minIndex = index;
                temp = *(array + index);
            }
        }
        *(array + minIndex) = *(array + scan);
        *(array + scan) = temp;
    }
}

double avgScore(Student *array, int size)
{
    double average = 0;
    int total = 0;
    for (int index = 0; index < size; index++)
    {
        total += (array + index)->score;
    }
    average = total / (size * 1.0);

    return average;
}

void showScore(Student *array, int size)
{
    for (int index = 0; index < size; index++)
        std::cout << (array + index)->name << ":    " << (array + index)->score
                  << std::endl;
}




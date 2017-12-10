#include <iostream>

int main()
{
    int numStudents,
        numTests;
    double average;

    std::cout << "This program average test scores. \n";
    std::cout << "How many students are there? \n";
    std::cin >> numStudents;

    std::cout << "How many test scores does each student have? ";
    std::cin >> numTests;
    std::cout << std::endl;

    for (int snum = 1; snum <= numStudents; snum++)
    {
        double total = 0.0;

        for (int test = 1; test <= numTests; test++)
        {
            int score;
            std::cout << "Enter score " << test << " for "
                      << "student " << snum << ": ";
            std::cin >> score;
            total += score;
        }
        average = total / numTests;
        std::cout << "The average score for student " << snum
                  << " is " << average << "\n\n";
    }
    return 0;
}

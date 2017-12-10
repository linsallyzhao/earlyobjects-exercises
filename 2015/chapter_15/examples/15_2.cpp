#include <iostream>
#include "Inheritance4.h"

int main()
{
    const int NUM_PEOPLE = 5;
    Person *arr[NUM_PEOPLE] = 
    {
        new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr."),
        new Student("Thomas Cruise", COMPUTER_SCIENCE, NULL),
        new Faculty("James Stock", BIOLOGY),
        new TFaculty("Sharon Rock", BIOLOGY, "Professor"),
        new TFaculty("Nicole Eweman", ARCHEOLOGY, "Dr.")
    };

    for (int k = 0; k < NUM_PEOPLE; k++)
        std::cout << arr[k]->getName() << std::endl;

    return 0;
}


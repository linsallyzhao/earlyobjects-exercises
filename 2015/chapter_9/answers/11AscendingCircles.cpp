#include <iostream>
#include <iomanip>
#include "Circle.h"

const int NUM_CIRCLES = 8;
void bubbleSort(Circle [], int);

int main()
{
    Circle circle[NUM_CIRCLES] = {Circle(2.5), Circle(4.0), Circle(1.0),
                                  Circle(3.0), Circle(6.0), Circle(5.5),
                                  Circle(3.5), Circle(2.0)};
    bubbleSort(circle, NUM_CIRCLES);

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nHere are the areas of the " << NUM_CIRCLES
              << " circles. \n";
    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        std::cout << "circle " << (index + 1) << std::setw(8)
                  << circle[index].findArea() << std::endl;
    }

    return 0;
}

void bubbleSort(Circle array[], int size)
{
    Circle temp;
    bool swap;
    do
    {
        swap = false;
        for (int index = 0; index < size - 1; index++)
        {
            if (array[index].getRadius() > array[index + 1].getRadius())
            {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                swap = true;
            }
        }
    } while(swap);
}

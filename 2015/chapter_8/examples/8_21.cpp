#include <iostream>
#include <fstream>
#include <iomanip>

const int NUM_SECTIONS = 3,
          ROWS_IN_SECTION = 5,
          SEATS_IN_ROW = 8;

typedef double seatTable[][ROWS_IN_SECTION][SEATS_IN_ROW];

void fillArray(seatTable);
void showArray(const seatTable);

int main()
{
    double seats[NUM_SECTIONS][ROWS_IN_SECTION][SEATS_IN_ROW];

    fillArray(seats);
    showArray(seats);
    return 0;
}
void fillArray(seatTable array)
{
    std::ifstream dataIn;
    dataIn.open("seats.dat");

    if(!dataIn)
        std::cout << "Error opening file. \n";
    else
    {
        for (int section = 0; section < NUM_SECTIONS; section++)
        {
            for (int row = 0; row < ROWS_IN_SECTION; row++)
            {
                for (int seat = 0; seat < SEATS_IN_ROW; seat++)
                    dataIn >> array[section][row][seat];
            }
        }
        dataIn.close();
    }
}

void showArray(const seatTable array)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    for (int section = 0; section < NUM_SECTIONS; section++)
    {
        std::cout << "\n\nSection" << (section + 1);
        for (int row = 0; row < ROWS_IN_SECTION; row++)
        {
            std::cout << "\nRow " << (row + 1) << ": ";
            for (int seat = 0; seat < SEATS_IN_ROW; seat++)
                std::cout << std::setw(7) << array[section][row][seat];
        }
    }
    std::cout << std::endl;
}

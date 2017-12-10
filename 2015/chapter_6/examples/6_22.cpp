#include <iostream>

void displayStars(int starsPerRow = 10, int numRows = 1);

int main()
{
    displayStars();
    std::cout << std::endl;
    displayStars(5);
    std::cout << std::endl;
    displayStars(7, 3);
    return 0;
}

void displayStars(int starsPerRow, int numRows)
{
    for (int row = 1; row <= numRows; row++)
    {
        for (int star = 1; star <= starsPerRow; star++)
            std::cout << '*';
        std::cout << std::endl;
    }
}

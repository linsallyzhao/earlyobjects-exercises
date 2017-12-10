#include <iostream>

int main()
{
    int height_in_inch = 73,
        height_in_whole_feet;

    height_in_whole_feet = height_in_inch / 12;

    std::cout << "The player's hight is " << height_in_whole_feet
              << " feets and " << height_in_inch % 12 << " inches. \n";
    
    return 0;
}

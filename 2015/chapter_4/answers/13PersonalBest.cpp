#include <iostream>
#include <string>

int main()
{
    std::string date1, date2, date3;
    double height1, height2, height3;

    std::cout << "Please enter the date of first record.\n";
    std::getline(std::cin, date1);
    std::cout << "Please enter the date of second record.\n";
    std::getline(std::cin, date2);
    std::cout << "Please enter the date of third record.\n";
    std::getline(std::cin, date3);

    std::cout << "Please enter the height of first record. \n";
    std::cin >> height1;
    std::cout << "Please enter the height of second record. \n";
    std::cin >> height2;
    std::cout << "Please enter the height of third record. \n";
    std::cin >> height3;

    if ((height1 < 2) || ( height2 < 2) || (height3 < 2))
        std::cout << "You input invalid height. \n";
    else if ((height1 > 5) || (height2 > 5) ||(height3 > 5))
        std::cout << "You input invalid height. \n";
    else if ((height1 >= height2) && (height2 >= height3))
        std::cout << "The order is " << date1 << ", " << height1
                  << ", " << date2 << ", " << height2
                  << ", " << date3 << ", " << height3 <<std::endl;
    else if ((height1 >= height3) && (height3 >= height2))
        std::cout << "The order is " << date1 << ", " << height1
                  << ", " << date3 << ", " << height3
                  << ", " << date2 << ", " << height2<< std::endl;
    else if ((height2 >= height3) && (height3 >= height1))
        std::cout << "The order is " << date2 << ", " << height2
                  << ", " << date3 << ", " << height3
                  << ", " << date1 << ", " << height1 << std::endl;
    else if ((height2 >= height1) && (height1 >= height3))
        std::cout << "The order is " << date2 << ", " << height2
                  << ", " << date1 << ", " << height1
                  << ", " << date3 << ", " << height3 << std::endl;
    else if ((height3 >= height2) && (height2 >= height1))
        std::cout << "The order is " << date3 << ", " << height3
                  << ", " << date2 << ", " << height2
                  << ", " << date1 << ", " << height1 << std::endl;
    else if ((height3 >= height1) && (height1 >= height2))
        std::cout << "The order is " << date3 << ", " << height3
                  << ", " << date1 << ", " << height1
                  << ", " << date2 << ", " << height2 << std::endl;
    return 0;
}




#include <iostream>
#include <string>

int main()
{
    std::string name1, name2, name3;
    double time1, time2, time3;

    std::cout << "Please enter the name if first runner.\n";
    std::getline(std::cin, name1);
    std::cout << "Please enter the name if second runner.\n";
    std::getline(std::cin, name2);
    std::cout << "Please enter the name if third runner.\n";
    std::getline(std::cin, name3);

    std::cout << "Please enter the time of first rummer. \n";
    std::cin >> time1;
    std::cout << "Please enter the time of second rummer. \n";
    std::cin >> time2;
    std::cout << "Please enter the time of third rummer. \n";
    std::cin >> time3;

    if ((time1 <= 0) || ( time2 <= 0) || (time3 <= 0))
        std::cout << "You input invalid time. \n";
    else if ((time1 <= time2) && (time2 <= time3))
        std::cout << "The order is " << name1 << ", " << name2 
                  << ", " << name3 << std::endl;
    else if ((time1 <= time3) && (time3 <= time2))
        std::cout << "The order is " << name1 << ", " << name3
                  << ", " << name2 << std::endl;
    else if ((time2 <= time3) && (time3 <= time1))
        std::cout << "The order is " << name2 << ", " << name3
                  << ", " << name1 << std::endl;
    else if ((time2 <= time1) && (time1 <= time3))
        std::cout << "The order is " << name2 << ", " << name1
                  << ", " << name3 << std::endl;
    else if ((time3 <= time2) && (time2 <= time1))
        std::cout << "The order is " << name3 << ", " << name2
                  << ", " << name1 << std::endl;
    else if ((time3 <= time1) && (time1 <= time2))
        std::cout << "The order is " << name3 << ", " << name1
                  << ", " << name2 << std::endl;
    return 0;
}




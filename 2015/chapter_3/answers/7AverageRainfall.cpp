#include <iostream>
#include <iomanip>

int main()
{
    std::string mon1, mon2, mon3;
    float val1, val2, val3, avg;

    std::cout << "Please enter the name of the first month \n";
    std::cin >> mon1;
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the rainfall for this month in inches \n";
    std::cin >> val1;
    std::cin.ignore(100, '\n');

    std::cout << "Please enter the name of the second month \n";
    std::cin >> mon2;
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the rainfall for this month in inches \n";
    std::cin >> val2;
    std::cin.ignore(100, '\n');

    std::cout << "Please enter the name of the third month \n";
    std::cin >> mon3;
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the rainfall for this month in inches \n";
    std::cin >> val3;
    std::cin.ignore(100, '\n');

    avg = (val1 + val2 + val3) / 3;

    std::cout << "The average monthly rainfall for "
              << mon1 << ", " << mon2 << ", and " << mon3 << " was "
              << std::fixed << std::setprecision(2)
              << avg << "inches. \n";

    return 0;
}

    



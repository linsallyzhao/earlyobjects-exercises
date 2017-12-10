#include <iostream>

int main()
{
    float total_sale = 4.6,
          east_coast_portion = .62,
          east_coast_sale;

    east_coast_sale = total_sale * east_coast_portion;

    std::cout << "East Coast division will generate "
              << east_coast_sale << " million sales this year. \n";

    return 0;
}

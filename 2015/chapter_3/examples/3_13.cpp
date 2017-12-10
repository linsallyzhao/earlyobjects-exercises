#include <iostream>

int main()
{
    int begInv,
        sold,
        store1,
        store2;

    std::cout << "One week ago, 2 new widget stores opened\n"
              << "at the same time with the same beginning\n"
              << "inventory. What was the beginning inventory? ";
    std::cin >> begInv;

    store1 = store2 = begInv;

    std::cout << "How many widgets has store 1 sold? \n";
    std::cin >> sold;
    store1 -= sold;

    std::cout << "How many widgets has store 2 sold? \n";
    std::cin >> sold;
    store2 -= sold;
    
    std::cout << "The curent inventory of each store: \n"
              << "Store 1: " << store1 << std::endl
              << "Store 2: " << store2 << std::endl;

    return 0;
}


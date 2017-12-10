#include <iostream>
#include <fstream>

const int DESC_SIZE = 31, NUM_RECORDS = 5;
struct Invtry
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    Invtry record;
    std::fstream inventory("invtry.dat", std::ios::in | std::ios::binary);
    if (!inventory)
    {
        std::cout << "Error opening file.";
        return 0;
    }

    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    while (!inventory.eof())
    {
        std::cout << "Description: ";
        std::cout << record.desc << std::endl;
        std::cout << "Quantity: " << record.qty << std::endl;
        std::cout << "Price: " << record.price << std::endl << std::endl;
        inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    }
    inventory.close();
    return 0;
}



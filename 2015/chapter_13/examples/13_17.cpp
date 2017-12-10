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
    Invtry record = {"", 0, 0.0};
    std::fstream inventory("invtry.dat", std::ios::out | std::ios::binary);
    if (!inventory)
    {
        std::cout << "Error opening file.";
        return 0;
    }

    for (int count = 0; count < NUM_RECORDS; count++)
    {
        std::cout << "Now writing record " << count << std::endl;
        inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
    }

    inventory.close();
    return 0;
}

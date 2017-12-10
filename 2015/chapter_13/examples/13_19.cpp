#include <iostream>
#include <fstream>

const int DESC_SIZE = 31;

struct Invtry
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    Invtry record;
    long recNum;

    std::fstream inventory("invtry.dat", std::ios::in
                            | std::ios::out | std::ios::binary);
    if (!inventory)
    {
        std::cout << "Error opening file.";
        return 0;
    }

    std::cout << "Which record do you want to edit?\n";
    std::cin >> recNum;
    inventory.seekg(recNum * sizeof(record), std::ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    std::cout << "Description: " << record.desc << std::endl;
    std::cout << "Quantity: " << record.qty << std::endl;
    std::cout << "Price: " << record.price << std::endl;
    std::cout << "Enter the new data: \n";
    std::cout << "Description: ";
    std::cin.ignore();
    std::cin.getline(record.desc, DESC_SIZE);
    std::cout << "Quantity: ";
    std::cin >> record.qty;
    std::cout << "Price: ";
    std::cin >> record.price;

    inventory.seekp(recNum * sizeof(record), std::ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    inventory.close();

    return 0;
}

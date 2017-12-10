#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

const int DESC_SIZE = 31;

struct Invtry
{
    char desc[DESC_SIZE];
    int quan;
    double whoPrice;
    double retPrice;
    char date[11];
    Invtry(std::string d = "", int q = 0, double w = 0,
            double r = 0, std::string da = "")
    {
        strcpy(desc, d.c_str());
        quan = q;
        whoPrice = w;
        retPrice = r;
        strcpy(date, da.c_str());
    }
};

int main()
{
    Invtry empty;
    long unit = sizeof(empty);
    double whoTotal = 0;
    double retTotal = 0;
    int quantity = 0;
    std::fstream file("inventory.dat", std::ios::in | std::ios::binary);
    while (!file.eof())
    {
        file.read(reinterpret_cast<char *>(&empty), unit);
        whoTotal += empty.whoPrice;
        retTotal += empty.retPrice;
        quantity += empty.quan;
    }
    file.close();
    std::cout << "Whole sale total: $" << whoTotal << std::endl;
    std::cout << "Retai sale total: $" << retTotal << std::endl;
    std::cout << "Total items: " << quantity << std::endl;

    return 0;
}

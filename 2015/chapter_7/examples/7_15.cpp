#include <iostream>
#include <iomanip>
#include <string>

struct InvItem
{
    int partNum;
    std::string description;
    int onHand;
    double price;
};

void getItemData(InvItem &);
void showItem(const InvItem &);

int main()
{
    InvItem part;

    getItemData(part);
    showItem(part);
    return 0;
}

void getItemData(InvItem &item)
{
    std::cout << "Enter the part number: ";
    std::cin >> item.partNum;
    std::cout << "Enter the part description: ";
    std::cin.get();
    std::getline(std::cin, item.description);

    std::cout << "Enter the quantity on hand: ";
    std::cin >> item.onHand;
    std::cout << "Enter the unit price: ";
    std::cin >> item.price;
}

void showItem(const InvItem &item)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "Part Number    : " << item.partNum << std::endl
              << "Description    : " << item.description << std::endl
              << "Unit On Hand   : " << item.onHand << std::endl
              << "Price          : " << item.price << std::endl;
}

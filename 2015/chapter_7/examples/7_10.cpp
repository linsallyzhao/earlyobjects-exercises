#include <iostream>
#include <iomanip>
#include <string>

class InventoryItem
{
    private :
        int partNum;
        std::string description;
        int onHand;
        double price;

    public :
        void storeInfo(int p, std::string d, int oh, double cost);
        int getPartNum() const
        {
            return partNum;
        }

        std::string getDescription() const
        {
            return description;
        }

        int getOnHand() const
        {
            return onHand;
        }

        double getPrice() const
        {
            return price;
        }

};

void InventoryItem::storeInfo(int p, std::string d, int oH, double cost)
{
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

InventoryItem createItem();
void showValues (const InventoryItem&);

int main()
{
    InventoryItem part = createItem();
    showValues(part);
    return 0;
}

InventoryItem createItem()
{
    InventoryItem tempItem;
    int partNum;
    std::string description;
    int qty;
    double price;

    std::cout << "Enter data for the new part number \n"
              << "Part number : ";
    std::cin >> partNum;
    std::cout << "Description: ";
    std::cin.get();
    std::getline(std::cin, description);

    std::cout << "Quantity on hand: ";
    std::cin >> qty;
    std::cout << "Unit price : ";
    std::cin >> price;

    tempItem.storeInfo(partNum, description, qty, price);
    return tempItem;
}

void showValues(const InventoryItem &item)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
    std::cout << "Part Number  : " << item.getPartNum() << std::endl
              << "Description  : " << item.getDescription() << std::endl
              << "Unit On Hand : " << item.getOnHand() << std::endl
              << "Price        : " << item.getPrice() << std::endl;
}



#include <iostream>
#include "Inventory.h"

int main()
{
    Inventory item1(800, 30, 2.5);
    std::cout << "Item num " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity " << item1.getQuantity() << std::endl
              << "Cost " << item1.getCost() << std::endl
              << "Total cost " << item1.getTotalCost() << std::endl;

    Inventory item;
    item.setItemNumber(350);
    item.setQuantity(10);
    item.setCost(1.9);
    std::cout << "Item num " << item.getItemNumber() << std::endl;
    std::cout << "Quantity " << item.getQuantity() << std::endl
              << "Cost " << item.getCost() << std::endl
              << "Total cost " << item.getTotalCost() << std::endl;

    return 0;
}


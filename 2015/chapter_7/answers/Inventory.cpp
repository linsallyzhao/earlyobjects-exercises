#include "Inventory.h"

Inventory::Inventory()
{
    itemNum = quantity = 0;
    cost = 0;
}

Inventory::Inventory(int num, int quan, double price)
{
    setItemNumber(num);
    setQuantity(quan);
    setCost(price);
}

void Inventory::setItemNumber(int n)
{
    if (n > 0)
        itemNum = n;
    else
        itemNum = 0;
}

void Inventory::setQuantity(int q)
{
    if (q > 0)
        quantity = q;
    else
        quantity = 0;
}

void Inventory::setCost(double c)
{
    if (c > 0)
        cost = c;
    else
        cost = 0;
}

int Inventory::getItemNumber()
{
    return itemNum;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getCost()
{
    return cost;
}

double Inventory::getTotalCost()
{
    return quantity * cost;
}

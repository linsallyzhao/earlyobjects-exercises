#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
    private:
        int itemNum;
        int quantity;
        double cost;

    public:
        Inventory();
        Inventory(int num, int quan, double price);
        void setItemNumber(int n);
        void setQuantity(int q);
        void setCost(double c);

        int getItemNumber();
        int getQuantity();
        double getCost();
        double getTotalCost();
};

#endif

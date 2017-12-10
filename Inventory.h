#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {
private:
    int itemNumber, quantity;
    double cost;

public:
    Inventory() {
        itemNumber = quantity = 0;
        cost = 0.0;
    }
    Inventory(int, int, double);
    void setItemNumber (int iN) {
        itemNumber = iN;
    }

    void setQuantity (int q) {
        quantity = q;
    }

    void setCost (double c) {
        cost = c;
    }

    int getItemNumber () {
        return itemNumber;
    }

    int getQuantity () {
        return quantity; 
    }

    double getCost() {
        return cost;
    }

    double getTotalCost () {
        return(cost * quantity);
    }


};
#endif

Inventory::Inventory (int iN, int quan, double c) {
    setItemNumber (iN);
    setQuantity (quan);
    setCost (c);
    std::cout << "The total cost of inventory is " << getTotalCost() << " dollars.\n";
}

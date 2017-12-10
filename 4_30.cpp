#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double PRICE_1 = 39.00,
                 PRICE_2 = 69.00,
                 PRICE_3 = 99.00,
                 PRICE_4 = 199.00,
                 PRICE_PER_DELIVERY = 20.00,
                 MAX_DELIVERY = 100.00;
    int numTree;
    int hight;
    int choice;
    double treePrice, treeTotal, deliveryCost = 0.0, plantCost = 0.0, totalCost = 0.0;

    cout << "This program is gonna calculate your cost of purchasing trees.\n";
    cout << "How many trees are you gonna buy?\n";
    cin >> numTree;
    cout << "How tall do you want your trees to be?\n";
    cin >> hight;
    cout << "Do you want to :\n";
    cout << "1. buy and carry\n";
    cout << "2. buy and deliver\n";
    cout << "3. buy, have them delivered and planted\n";
    cin >> choice;
    if (hight < 3)
        treePrice = PRICE_1;
    else if (hight < 6)
        treePrice = PRICE_2;
    else if (hight < 9)
        treePrice = PRICE_3;
    else treePrice = PRICE_4;

    treeTotal = treePrice * numTree;
    
    switch (choice)
    {
        case 1: deliveryCost = 0;
                break;
        case 2: if (numTree < 5) 
                    deliveryCost = numTree * PRICE_PER_DELIVERY;
                else deliveryCost = MAX_DELIVERY;
                break;
        case 3: plantCost = treeTotal * 0.5;
                break;
        default: cout << "Invalid choice\n";
    }

    totalCost = treeTotal + deliveryCost + plantCost;

    cout << fixed << showpoint << setprecision(2);

    cout << "\n\n          Green Fields Landscaping\n";
    cout << "          Everygreen Tree Purchase\n\n";
    cout << numTree << " trees @ $ " << setw(6) << treePrice << " each =  $" << setw(8)
         << treeTotal << endl;
    cout << "Delivery Charge            $" << setw(8) << deliveryCost << endl;
    cout << "Planting charge            $" << setw(8) << plantCost << endl;
    cout << "                            ________\n";
    cout << "Total Amount Due           $" << setw(8) << totalCost << endl;

    return 0;
}


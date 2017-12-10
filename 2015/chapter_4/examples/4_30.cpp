#include <iostream>
#include <iomanip>

int main()
{
    const double PRICE_1 = 39.00,
                 PRICE_2 = 69.00,
                 PRICE_3 = 99.00,
                 PRICE_4 = 199.00;

    const double PER_TREE_DELIVERY = 20.00,
                 MAX_DELIVERY = 100.00;

    int numTrees,
        height;

    char planted,
         delivered;

    double treeCost,
           totalTreeCost,
           deliveryCost = 0.0,
           plantingCost = 0.0,
           totalCharges;

    std::cout << "          Green FIelds Landscaping\n"
              << "          Evergreen Tree Purchase\n\n";
    std::cout << "Number of trees purchase: ";
    std::cin >> numTrees;
    std::cout << "Tree height to the nearest foot: ";
    std::cin >> height;
    std::cout << "Will Green Fields do the planting? (Y/N): ";
    std::cin >> planted;

    if (!(planted == 'Y' || planted == 'y'))
    {
        std::cout << "Do you want the trees delivered? (Y/N): ";
        std::cin >> delivered;
    }

    if (height < 3)
        treeCost = PRICE_1;
    else if (height <= 5)
        treeCost = PRICE_2;
    else if (height <=8)
        treeCost = PRICE_3;
    else 
        treeCost = PRICE_4;

    totalTreeCost = treeCost * numTrees;

    if ((planted == 'Y') || (planted == 'y'))
        plantingCost = totalTreeCost / 2;
    else if ((delivered == 'Y') || (delivered == 'y'))
        if (numTrees <= 5)
            deliveryCost = numTrees * PER_TREE_DELIVERY;
        else 
            deliveryCost = MAX_DELIVERY;

    totalCharges = totalTreeCost + deliveryCost + plantingCost;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\n\n          Gree Fields Landscaping\n"
              << "          Evergreen Tree Purchase\n\n";
    std::cout << std::setw(2) << numTrees << " trees @ $" << std::setw(6) << treeCost
              << " each =     $" << std::setw(8) << totalTreeCost << std::endl;
    std::cout << "Delivery charge               $"
              << std::setw(8) << deliveryCost << std::endl;
    std::cout << "Planting charge               $"
              << std::setw(8) << plantingCost << std::endl;
    std::cout << "                              __________" << std::endl;
    std::cout << "Total Amount Due              $"
              << std::setw(8) << totalCharges << std::endl << std::endl;

    return 0;
}

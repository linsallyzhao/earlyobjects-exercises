#include <iostream>

struct MonthlyBudget
{
    double house,
           utilities,
           household,
           transportation,
           food,
           medical,
           insurance,
           entertainment,
           clothing,
           miscellaneous;

};

int main()
{
    double hou, uti, houhol, tra, foo, med, ins, ent, clo, mis;
    MonthlyBudget plan = {500.00, 150.00, 65.00, 50.00, 250.00, 
                            30.00, 100.00, 150.00, 75.00, 50.00};
    std::cout << "Now enter the actual cost last month: "
              << "Housing : \n";
    std::cin >> hou;
    std::cout << "Utilities :\n";
    std::cin >> uti;
    std::cout << "Household expenses: \n";
    std::cin >> houhol;
    std::cout << "Transportation: \n";
    std::cin >> tra;
    std::cout << "Food: \n";
    std::cin >> foo;
    std::cout << "Medical: \n";
    std::cin >> med;
    std::cout << "Insurance: \n";
    std::cin >> ins;
    std::cout << "Entertainment:\n";
    std::cin >> ent;
    std::cout << "Clothing:\n";
    std::cin >> clo;
    std::cout << "Miscellaneous:\n";
    std::cin >> mis;
    MonthlyBudget real = {hou, uti, houhol, tra, foo, med, ins, ent, clo, mis};

    std::cout << "\nHere is your dismatch. Negative number means you spent too much. \n"
              << "Housing : " 
              << plan.house - real.house << std::endl;
    std::cout << "Utilities : " 
              << plan.utilities - real.utilities << std::endl;
    std::cout << "Household expenses: " 
              << plan.household - real.household << std::endl;
    std::cout << "Transportation: " 
              << plan.transportation - real.transportation << std::endl;
    std::cout << "Food: " 
              << plan.food - real.food << std::endl;
    std::cout << "Medical: "
              << plan.medical - real.medical << std::endl;
    std::cout << "Insurance: "
              << plan.insurance - real.insurance << std::endl;
    std::cout << "Entertainment: " 
              << plan.entertainment - real.entertainment << std::endl;
    std::cout << "Clothing: "
              << plan.clothing - real.clothing << std::endl;
    std::cout << "Miscellaneous: "
              << plan.miscellaneous - real.miscellaneous << std::endl;
    return 0;
}

 

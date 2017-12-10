#include <iostream>

int main()
{
    int  sample_size = 12468,
         buyer,
         citrus_lover;
    
    double buyer_rate = 0.14,
           citrus_lover_rate = 0.64 * buyer_rate;

    buyer = sample_size * buyer_rate;
    citrus_lover = sample_size * citrus_lover_rate;

    std::cout << "About " << buyer 
              << " people will buy energy drinks per week. \n";
    std::cout << "About " << citrus_lover 
              << " people prefer citrus flavored energy drinks. \n";

    return 0;
}

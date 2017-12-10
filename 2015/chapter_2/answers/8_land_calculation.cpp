#include <iostream>

int main()
{
    float acre = 43560,
          exchange_rate = 10.7639,  //aquare feet per square meter
          quater_acre_in_sqm;

    quater_acre_in_sqm = 0.25 * acre / exchange_rate;

    std::cout << "1/4 acre of land is " << quater_acre_in_sqm
              << " square meters. \n";

    return 0;
}

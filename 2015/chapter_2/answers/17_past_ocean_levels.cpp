#include <iostream>

int main()
{
    float mm_per_year = 1.8,
          years = 100,
          change_in_mm,
          change_in_cm,
          change_in_inch;

    change_in_mm = mm_per_year * years;
    change_in_cm = change_in_mm * 0.1;
    change_in_inch = change_in_cm * 0.3937;

    std::cout << "The ocean levels have risen " << change_in_cm
              << " centimeters, \nwhich equals to " << change_in_inch
              << " inches, in last century. \n";

    return 0;
}

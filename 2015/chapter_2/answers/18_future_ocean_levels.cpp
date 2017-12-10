#include <iostream>

int main()
{
    float speed_in_mm = 3.1,
          years = 20,
          rising_in_cm,
          rising_in_inch;

    rising_in_cm = speed_in_mm * years * 0.1;
    rising_in_inch = rising_in_cm * 0.3937;

    std::cout << "The ocean will rise " << rising_in_cm
              << " cm, \nwhich equals to " << rising_in_inch
              << " inches, in the next " << years << " years. \n";

    return 0;
}

#include <iostream>

int main()
{
    double weight, height, BMI;

    std::cout << "Please enter your weight in pound and height in inches.\n";
    std::cin >> weight >> height;

    if ((weight > 500) || (height > 120))
        std::cout << "Your input is not valid. \n";
    else
    {
        BMI = weight * 703 / (height * height);
        if ((BMI > 18.5) && (BMI < 25))
            std::cout << "Optimal weight!\n";
        else if (BMI < 18.5)
            std::cout << "Underweight. \n";
        else if (BMI > 25 )
            std::cout << "Overweight. \n";
    }
    return 0;
}

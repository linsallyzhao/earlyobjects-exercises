#include <iostream>

int main()
{
    double length;

    std::cout << "Please enter the wavelength in meters of the electromagnetic wave.\n";
    std::cin >> length;

    if (length < 0)
        std::cout << "Please be serious\n";
    else if (length <= 1E-11)
        std::cout << "Gamma Rays\n";
    else if (length <= 1E-8)
        std::cout << "X Rays\n";
    else if (length <= 4E-7)
        std::cout << "Ultraviolet\n";
    else if (length <= 7E-7)
        std::cout << "Visible Light\n";
    else if (length <= 1E-3)
        std::cout << "Infrared\n";
    else if (length <= 1E-2)
        std::cout << "Microwaves\n";
    else
        std::cout << "Radio Waves\n";
    return 0;
}

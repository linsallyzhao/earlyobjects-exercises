#include <iostream>
#include <string>

int main()
{
    char package;
    const double Abase = 9.95,
                 Acut = 5,
                 Aprice = 0.08,
                 Bbase = 14.95,
                 Bcut = 10,
                 Bprice = 0.06,
                 Cbase = 19.95;

    double cost, time;
    std::string name;
    
    std::cout << "Please enter your name\n";
    std::getline(std::cin, name);
    std::cout << "Please enter your package\n";
    std::cin >> package;
    std::cout << "How many hour did you use last month?\n";
    std::cin >> time;

    switch (package)
    {
        case 'a':
        case 'A': if (time <= Acut)
                      cost = Abase;
                  else
                      cost = Abase + (time - Acut) * 60 * Aprice;
                  break;
        case 'b':
        case 'B': if (time <= Bcut)
                      cost = Bbase;
                  else
                      cost = Bbase + (time - Bcut) * 60 * Bprice;
                  break;
        case 'c':
        case 'C': cost = Cbase;
                  break;
        default : std::cout << "Is that what we sold you?\n";
    }
    std::cout << "Dear " << name << ", " << std::endl
              << "You used " << time << " hours in package " << package
              << " last month. \nYour total due cost is $" << cost << std::endl;

    return 0;
}
                  


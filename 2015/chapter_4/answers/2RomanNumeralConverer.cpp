#include <iostream>

int main()
{
    int num;

    std::cout << "Please enter a integer between 1 to 10. \n";
    std::cin >> num;

    switch (num)
    {
        case 1: std::cout << "I\n";
                break;
        case 2: std::cout << "II\n";
                break;
        case 3: std::cout << "III\n";
                break;
        case 4: std::cout << "IV\n";
                break;
        case 5: std::cout << "V\n";
                break;
        case 6: std::cout << "VI\n";
                break;
        case 7: std::cout << "VII\n";
                break;
        case 8: std::cout << "VIII\n";
                break;
        case 9: std::cout << "IX\n";
                break;
        case 10: std::cout << "X\n";
                break;
        default : std::cout << "Give me a valid number dude!\n";
    }
    return 0;
}

#include <iostream>

int main()
{
    float startTime,time, cost;

    std::cout << "Whend did you start the call? (in float point form)\n";
    std::cin >> startTime;
    std::cout << "How long did it last?\n";
    std::cin >> time;

    if ((time > 0) && (startTime > 0) && (startTime < 23.59))
    {
        if (startTime <= 6.59)
            cost = time * 0.12;
        else if (startTime <= 19.00)
            cost = time * 0.55;
        else
            cost = time * 0.35;
        std::cout << "Your total cost is $" << cost << std::endl;
    }
    else
        std::cout << "Faulty input\n";
    return 0;
}


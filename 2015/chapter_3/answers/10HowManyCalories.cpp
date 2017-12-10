#include <iostream>

int main()
{
    float numPerSer,
          numPerBag = 40, 
          numOfSer = 10,
          calPerCok,
          calPerSer = 300,
          numEaten,
          totalCal;

    numPerSer = numPerBag / numOfSer;
    calPerCok = calPerSer / numPerSer;

    std::cout << "Please neter the number of coockies you ate. \n";
    std::cin >> numEaten;

    totalCal = numEaten * calPerCok;

    std::cout << "You consumed " << totalCal << " calories. \n";

    return 0;

}

   

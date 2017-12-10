#include <iostream>
#include <fstream>

int main()
{
    char weather[3][30];
    std::ifstream dataIn;
    dataIn.open("RainOrShine.dat");

    if (!dataIn)
    {
        std::cout << "Error opening file\n";
    }
    else
    {
        for (int month = 0; month < 3; month++)
        {
            for (int day = 0; day < 30; day++)
            {
                dataIn >> weather[month][day];
            }
        }
    }
    dataIn.close();

    int summary[3][3] = {0};
    int row = 0, col = 0;

    for (int month = 0; month < 3; month++)
    {
        for (int day = 0; day < 30; day++)
        {
            if (weather[month][day] == 'R')
                summary[row][col]++;
            else if (weather[month][day] == 'S')
                summary[row][col+1]++;
            else
                summary[row][col+2]++;
        }
        row++;
    }

    int rainy = summary[0][0] + summary[1][0] + summary[2][0];
    int sunny = summary[0][1] + summary[1][1] + summary[2][1];
    int cloudy = summary[0][2] + summary[1][2] + summary[2][2];

    std::cout << "There are " << rainy << " days in three months. \n";
    std::cout << "There were " << summary[0][0] << " rainy days in month June. \n";

    int highRain = summary[0][0];
    int record = 0;
    for (int i = 0; i < 3; i++)
    {
        if (summary[i][0] > highRain)
        {
            highRain = summary[i][0];
            record = i;
        }
    }
    std::cout << "The most rainy months had " << highRain << " days of rain.\n";
    std::cout << "Month " << record << " is the most rainy month. \n";

    return 0;
}








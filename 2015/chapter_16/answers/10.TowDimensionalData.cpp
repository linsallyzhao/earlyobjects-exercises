#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream infile("data");
    if (!infile)
        std::cout << "Cannot open file!\n";
    else
    {
        int num;
        infile >> num;
        std::vector<int> index;
        std::vector<std::string> name;
        std::vector<int> numCity;
        std::vector<std::string> city0, city1, city2;
        std::vector<std::vector<std::string> > City;
        City.push_back(city0);
        City.push_back(city1);
        City.push_back(city2);


        int ind;
        std::string na;
        for (int count = 0; count < num; count++)
        {
            infile >> ind;
            index.push_back(ind);
            infile >> na;
            name.push_back(na);
        }

        int numberOfCity;
        std::string cityName;

        for (int count = 0; count < num; count++)
        {
            infile >> ind;
            infile >> numberOfCity;
            numCity.push_back(numberOfCity);
            if(numberOfCity != 0)
            {
                for (int n = 0; n < numberOfCity; n++)
                {
                    infile >> cityName;
                    City[count].push_back(cityName);
                }
            }
        }

        infile.close();

        std::cout << "Please input your name:\n";
        std::string userName;
        std::cin >> userName;
        int count = 0;
        while(userName != name[count])
            count++;
        if (numCity[count] != 0)
        {
            for (int n = 0; n < numCity[count]; n++)
                std::cout << City[count][n] << " ";
        }
        else
            std::cout << "No city interested.\n";

    }
    return 0;
}



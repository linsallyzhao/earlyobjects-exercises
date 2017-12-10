#include <iostream>
#include <iomanip>

class Population
{
    private:
        int population,
            births,
            deaths;

    public:
        Population(int p, int b, int d);
        Population();
        bool setPopulation(int po);
        bool setBirths(int bir);
        bool setDeaths(int dea);
        double getBirthRate();
        double getDeathRate();
};

Population::Population(int p, int b, int d)
{
    if (p > 2)
        population = p;
    else
        population = 2;
    if (b > 0)
        births = b;
    else
        births = 0;
    if (d > 0)
        deaths = d;
    else
        deaths = 0;
}

Population::Population()
{
    population = births = deaths = 0;
}

bool Population::setPopulation(int po)
{
    bool valid = true;
    if (po > 2)
        population = po;
    else
    {
        population = 2;
        valid = false;
    }
    return valid;
}

bool Population::setBirths(int bir)
{
    bool valid = true;
    if (bir > 0)
        births = bir;
    else
    {
        births = 0;
        valid = false;
    }
    return valid;
}
bool Population::setDeaths(int dea)
{
    bool valid = true;
    if (dea > 0)
        deaths = dea;
    else
    {
        deaths = 0;
        valid = false;
    }
    return valid;
}

double Population::getBirthRate()
{
    return 1.0 * births / population;
}

double Population::getDeathRate()
{
    return 1.0 * deaths / population;
}

int main()
{
    Population china(1000, 70, 80);
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "China birth rate " << china.getBirthRate() << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "China death rate " << china.getDeathRate() << std::endl;

    Population japan;
    japan.setPopulation(500);
    japan.setBirths(30);
    japan.setDeaths(20);
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Japan birth rate " << japan.getBirthRate();
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nJapan death rate " << japan.getDeathRate();

    Population UK(-100, -3, -3);
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nUK birth rate " << UK.getBirthRate();
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nUK death rate " << UK.getDeathRate();

   
    Population US;
    US.setPopulation(-500);
    US.setBirths(-30);
    US.setDeaths(-20);
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nUS birth rate " << US.getBirthRate();
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nUS death rate " << US.getDeathRate();
    return 0;
}

#include <iostream>
#include <string>

class Product
{
    private:
        std::string name;
        int quant;

    public:
        Product(std::string n = "", int q = 0)
        {
            name = n;
            quant = q;
        }
        void setName(std::string n)
        {
            name = n;
        }
        void setQuant(int q)
        {
            quant = q;
        }

        std::string getName()
        {
            return name;
        }
        int getQuant()
        {
            return quant;
        }
};

Product getHighest(Product source[], int size);
Product getLowest(Product source[], int size);

int main()
{
    std::string name[] = {"mild", "medium", "sweet", "hot", "zesty"};
    Product salsa[5];
    int total = 0;

    for (int index = 0; index < 5; index++)
    {
        int temp;
        std::cout << "Please enter the sale for " << name[index] << ": ";
        std::cin >> temp;
        salsa[index].setName(name[index]);
        salsa[index].setQuant(temp);
        total += temp;
    }

    for (int index = 0; index < 5; index++)
    {
        std::cout << "The sale for " << salsa[index].getName() << " is " 
                  << salsa[index].getQuant() << " jars. \n";
    }
    std::cout << "The total sale was " << total << " jars. \n";

    Product high, low;
    high = getHighest(salsa, 5);
    low = getLowest(salsa, 5);

    std::cout << "The best seller was " << high.getName() << ", "
              << high.getQuant() << " jars. \n";
    std::cout << "The lowest was " << low.getName() << ", "
              << low.getQuant() << " jars. \n";

    return 0;
}

Product getHighest(Product sou[], int size)
{
    int index = 0;
    int highest = sou[0].getQuant();
    int record= 0;

    for (index = 1; index < size; index++)
    {
        if (sou[index].getQuant() > highest)
        {
            highest = sou[index].getQuant();
            record = index;
        }
    }

    return sou[record];
}


Product getLowest(Product s[], int size)
{
    int index = 0;
    int lowest = s[index].getQuant();
    int record = 0;

    for (index = 1; index < size; index++)
    {
        if (s[index].getQuant() < lowest)
        {
            lowest = s[index].getQuant();
            record = index;
        }
    }

    return s[record];
}


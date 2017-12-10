#include <iostream>
#include <string>

class Inventory
{
    private:
        std::string itemCode;
        std::string description;
        double price;

    public:
        Inventory()
        {
            itemCode = "XXX";
            description = " ";
            price = 0.0;
        }
        Inventory(std::string c, std::string d, double p)
        {
            itemCode = c;
            description = d;
            price = p;
        }
        std::string getCode() const
        {
            std::string code = itemCode;
            return code;
        }
        std::string getDescription() const
        {
            std::string d = description;
            return d;
        }
        double getPrice() const
        {
            return price;
        }
};

int search(const Inventory[], int , std::string);

int main()
{
    const int SIZE = 6;

    Inventory silverware[SIZE] = 
                                { Inventory("S15", "soup spoon", 2.35),
                                  Inventory("S12", "teaspoon", 2.19),
                                  Inventory("F15", "dinner fork", 3.19),
                                  Inventory("F09", "salad fork", 2.25),
                                  Inventory("K33", "knife", 2.35),
                                  Inventory("K41", "steak knife", 4.15)};
    std::string desiredCode;
    int pos;
    char doAgain;

    do
    {
        std::cout << "\nEnter an item code: ";
        std::cin >> desiredCode;

        pos = search(silverware, SIZE, desiredCode);

        if (pos ==  -1)
            std::cout << "That code does not exist in the array\n";
        else
        {
            std::cout << "This " << silverware[pos].getDescription()
                      << " cost $" << silverware[pos].getPrice() << std::endl;
        }

        std::cout << "\nLook up another price (Y/N)? ";
        std::cin >> doAgain;

    } while (doAgain == 'Y' || doAgain == 'y');
    return 0;
}

int search(const Inventory object[], int size, std::string value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (object[index].getCode() == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

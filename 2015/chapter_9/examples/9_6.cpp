#include <iostream>
#include <string>
#include <iomanip>

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

void displayInventory(const Inventory[], int);
void bubbleSort(Inventory[], int);

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

    std::cout << "Here is the original data\n";
    displayInventory(silverware, SIZE);

    bubbleSort(silverware, SIZE);

    std::cout << "\nHere is the sorted data\n";
    displayInventory(silverware, SIZE);

    return 0;
}

void displayInventory(const Inventory object[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << std::setw(5) << std::left << object[index].getCode()
                  << std::setw(13) << std::left << object[index].getDescription()
                  << "$" << std::right << object[index].getPrice() << std::endl;
    }
}

void bubbleSort(Inventory array[], int size)
{
    Inventory temp;
    bool swap;

    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if ( array[count].getCode() > array[count + 1].getCode())
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);

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

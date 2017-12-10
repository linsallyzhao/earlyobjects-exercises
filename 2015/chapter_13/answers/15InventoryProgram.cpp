#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

const int DESC_SIZE = 31;

struct Invtry
{
    char desc[DESC_SIZE];
    int quan;
    double whoPrice;
    double retPrice;
    char date[11];
    Invtry(std::string d = "", int q = 0, double w = 0,
            double r = 0, std::string da = "")
    {
        strcpy(desc, d.c_str());
        quan = q;
        whoPrice = w;
        retPrice = r;
        strcpy(date, da.c_str());
    }
};

void add(std::string);
void display(std::string, long unit);
void change(std::string, long unit);

int main()
{
    Invtry empty;
    Invtry hammer("Hammer", 10, 2.5, 3, "20015/03/09");
    long unit = sizeof(empty);
    std::fstream file("inventory.dat", std::ios::out | std::ios::binary);
    file.write(reinterpret_cast<char *>(&hammer), unit);
    file.write(reinterpret_cast<char *>(&empty), unit);
    file.close();
    char choice;
    std::cout << "Do you want to Add(a) or Display(d) or Change(c) a record?\n";
    std::cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
            case 'a': add("inventory.dat");
                      break;
            case 'd': display("inventory.dat", unit);
                      break;
            case 'c': change("inventory.dat", unit);
        }
        std::cout << "Do you want to Add(a) or Display(d) or Change(c) a record?\n";
        std::cin >> choice;
    }

    return 0;
}

void add(std::string name)
{
    Invtry record;
    std::cout << "Input the info for new item\n";
    std::cout << "Desc?\n";
    std::cin.ignore();
    std::cin.getline(record.desc, DESC_SIZE);
    std::cout << "How many?\n";
    std::cin >> record.quan;
    std::cout << "Wholesale price?\n";
    std::cin >> record.whoPrice;
    std::cout << "Retail price?\n";
    std::cin >> record.retPrice;
    std::cout << "Date to add?\n";
    std::cin.ignore();
    std::cin.getline(record.date, 10);
    std::fstream file(name.c_str(), std::ios::app| std::ios::binary);
    file.write(reinterpret_cast<char *>(&record), sizeof(record));
    file.close();
}

void display(std::string name, long unit)
{
    int num;
    std::cout << "Which one you want to see?\n";
    std::cin >> num;
    std::fstream file(name.c_str(), std::ios::in | std::ios::binary);
    file.seekg(num * unit, std::ios::beg);
    Invtry record;
    file.read(reinterpret_cast<char *>(&record), unit);
    file.close();
    std::cout << "Description: " << record.desc << std::endl;
    std::cout << "Quantity: " << record.quan << std::endl;
    std::cout << "Wholesale price: " << record.whoPrice << std::endl;
    std::cout << "Retail Price: " << record.retPrice << std::endl;
    std::cout << "Date: " << record.date << std::endl;
}

void change(std::string name, long unit)
{
    int num;
    std::cout << "Which one do you want to change?\n";
    std::cin >> num;

    Invtry record;

    std::fstream file(name.c_str(),
                      std::ios::in | std::ios::out | std::ios::binary);
    file.seekg(num * unit, std::ios::beg);
    std::cout << "This is your old one\n";
    file.read(reinterpret_cast<char *>(&record), unit);
    std::cout << "Description: " << record.desc << std::endl;
    std::cout << "Quantity: " << record.quan << std::endl;
    std::cout << "Wholesale price: " << record.whoPrice << std::endl;
    std::cout << "Retail Price: " << record.retPrice << std::endl;
    std::cout << "Date: " << record.date << std::endl;

    std::cout << "Input the info for new item\n";
    std::cout << "Desc?\n";
    std::cin.ignore();
    std::cin.getline(record.desc, DESC_SIZE);
    std::cout << "How many?\n";
    std::cin >> record.quan;
    std::cout << "Wholesale price?\n";
    std::cin >> record.whoPrice;
    std::cout << "Retail price?\n";
    std::cin >> record.retPrice;
    std::cout << "Date to add?\n";
    std::cin.ignore();
    std::cin.getline(record.date, 10);
    file.clear();
    file.seekp(num * unit, std::ios::beg);
    file.write(reinterpret_cast<char *>(&record), sizeof(record));
}


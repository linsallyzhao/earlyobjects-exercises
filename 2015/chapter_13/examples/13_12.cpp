#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};

int main()
{
    Info person;
    char response;

    std::string input;
    std::fstream people("people.dat", std::ios::out | std::ios::binary);
    if (!people)
    {
        std::cout << "Enter opening file. Program aborting. \n";
        return 0;
    }

    do
    {
        std::cout << "Enter person information:\n";
        std::cout << "Name: ";
        std::getline(std::cin, input);
        strcpy(person.name, input.c_str());
        std::cout << "Age: ";
        std::cin >> person.age;
        std::cin.ignore();
        std::cout << "Address line 1: ";
        std::getline(std::cin, input);
        strcpy(person.address1, input.c_str());
        std::cout << "Address line 2: ";
        std::getline(std::cin, input);
        strcpy(person.address2, input.c_str());
        std::cout << "Phone: ";
        std::getline(std::cin, input);
        strcpy(person.phone, input.c_str());
        people.write(reinterpret_cast<char *>(&person), sizeof(person));
        std::cout << "Do you want to enter another record? ";
        std::cin  >> response;
        std::cin.ignore();
    }while (toupper(response) == 'Y');

    people.close();
    return 0;
}


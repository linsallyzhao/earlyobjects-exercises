#include <iostream>
#include <fstream>

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

    std::fstream people("people.dat", std::ios::in | std::ios::binary);
    if (!people)
    {
        std::cout << "Error opening file. Program aborting. \n";
        return 0;
    }

    std::cout << "Here are the people in the file:\n";
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    while (!people.eof())
    {
        std::cout << "Name: " << person.name << std::endl;
        std::cout << "Age: " << person.age << std::endl;
        std::cout << "Address line 1: " << person.address1 << std::endl;
        std::cout << "Address line 2: " << person.address2 << std::endl;
        std::cout << "Phone: " << person.phone << std::endl;
        std::cout << "\nStrike any key to see the next record.\n";
        std::cin.get(response);
        people.read(reinterpret_cast<char *>(&person), sizeof(person));
    }
    std::cout << "That all the informatino in the file!\n";
    people.close();
    return 0;
}


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

long byteNum(int);
void showRec(Info);

int main()
{
    Info person;

    std::fstream people("people.dat", std::ios::in | std::ios::binary);
    if (!people)
    {
        std::cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    std::cout << "Here is record 1:\n";
    people.seekg(byteNum(1), std::ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    std::cout << "Here is record 0:\n";
    people.seekg(byteNum(0), std::ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    people.close();

    return 0;
}

long byteNum(int recNum)
{
    return sizeof(Info) * recNum;
}

void showRec(Info record)
{
    std::cout << "Name: " << record.name << std::endl;
    std::cout << "Age: " << record.age << std::endl;
    std::cout << "Address line 1: " << record.address1 << std::endl;
    std::cout << "Address line 2: " << record.address2 << std::endl;
    std::cout << "Phone: " << record.phone << std::endl;
}

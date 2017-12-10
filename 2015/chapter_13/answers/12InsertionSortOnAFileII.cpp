#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

struct Person
{
    char name[10];
    int age;
    Person(std::string n = "")
    {
        strcpy(name, n.c_str());
        age = 10;
    }
};

int main()
{
    std::fstream file("people.dat", std::ios::out |std::ios::binary);
    Person list[10] = {Person("Anny"), Person("Bob"), Person("Calro"),
                       Person("Jim"), Person("Kite"), Person("Luke"),
                       Person("Mogs"), Person("Ned"), Person("Tim"),
                       Person("Willian")};
    file.write(reinterpret_cast<char *>(list), sizeof(list));
    file.close();

    file.open("people.dat",
               std::ios::out | std::ios::in | std::ios::binary);
    std::cout << "Here is my list\n";
    Person ints[10];
    file.read(reinterpret_cast<char *>(ints), sizeof(list));
    for (int index = 0; index < 10; index++)
        std::cout << ints[index].name << ":    "
                  << ints[index].age << std::endl;

    std::string insert;
    std::cout << "\nEnter the kid's name you want to insert\n";
    std::getline(std::cin, insert);
    Person newKid(insert);
    long unit = sizeof(list[0]);
    Person com;

    for (int index = 9; index >= 0; index--)
    {
        file.clear();
        file.seekg(unit * index, std::ios::beg);
        file.read(reinterpret_cast<char *>(&com), unit);
        std::string tar(com.name);

        if (tar <= insert)
        {
            Person *after= new Person[9 - index];
            file.clear();
            file.seekp(unit * (1+index), std::ios::beg);
            file.read(reinterpret_cast<char *>(after), (9 - index) * unit);

            Person *before = new Person [index + 1];
            file.clear();
            file.seekp(0L, std::ios::beg);
            file.read(reinterpret_cast<char *>(before), (1 + index) * unit);

            Person temp[11];
            for (int count = 0; count <= index; count++)
                temp[count] = before[count];
            temp[index+1] = newKid;
            for (int count = (index + 2); count < 11; count++)
                temp[count] = after[count - 2 - index];

            file.clear();
            file.seekp(0L, std::ios::beg);
            file.write(reinterpret_cast<char *>(temp), 11 * unit);

            delete []after;
            delete []before;

            std::cout << "This is the new list\n";
            Person newlist[11];
            file.clear();
            file.seekg(0L, std::ios::beg);
            file.read(reinterpret_cast<char *>(newlist), sizeof(newlist));
            for (int index = 0; index < 11; index++)
                std::cout << newlist[index].name << ":    "
                          << newlist[index].age << std::endl;
            file.close();
            return 0;
        }
    }
    Person temp[11];
    temp[0] = newKid;
    for (int count = 1; count < 11; count++)
        temp[count] = ints[count-1];

    file.clear();
    file.seekp(0L, std::ios::beg);
    file.write(reinterpret_cast<char *>(temp), 11 * unit);

    std::cout << "This is the new list\n";
    Person newlist[11];
    file.clear();
    file.seekg(0L, std::ios::beg);
    file.read(reinterpret_cast<char *>(newlist), sizeof(newlist));
    for (int index = 0; index < 11; index++)
        std::cout << newlist[index].name << ":    "
                  << newlist[index].age << std::endl;
    file.close();
    return 0;

}





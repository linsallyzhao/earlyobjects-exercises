#include <iostream>
#include <string>

class Date
{
    std::string month;
    int day, year;
    int personID;
public:
    Date(std::string m, int d, int y, int id):
    month(m), day(d), year(y), personID(id)
    {
        std::cout << "Date-Of-Birth object for person "
                  << personID << " has been created.\n";
    }

    ~Date()
    {
        std::cout << "Date-Of-Birth object for person "
                  << personID << " has been destroyed. \n";
    }
};

class Country
{
    std::string name;
public:
    Country(std::string name) : name(name)
    {
        std::cout << "A Country object has been created. \n";
    }

    ~Country()
    {
        std::cout << "A Country object has been destroyed. \n";
    }
};

class Person
{
    std::string name;
    Date dateOfBirth;
    int personID;
    Country *pCountry;
public:
    Person(std::string name, std::string month, int day, int year, Country *pC):
    name(name),
    dateOfBirth(month, day, year, Person::uniquePersonID),
    personID(Person::uniquePersonID),
    pCountry(pC)
    {
        std::cout << "Person object " 
                  << personID << " has been created. \n";
        Person::uniquePersonID++;
    }

    ~Person()
    {
        std::cout << "Person object " << personID 
                  << " has been destroyed. \n";
    }

    static int uniquePersonID;
};

int Person::uniquePersonID = 1;

int main()
{
    Country usa("USA");
    Person *p = new Person("Perter Lee", "Jan", 1, 1985, &usa);
    Person p1("Eva Gustafson", "May", 15, 1992, &usa);
    std::cout << "Now there are two people. \n";
    delete p;
    std::cout << "Now there is only one. \n";
    return 0;
}




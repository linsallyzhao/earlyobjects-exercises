#include <iostream>
#include <string>

using namespace std;

class Date {
    string month;
    int day, year;
    int personID;

public:
    Date(string m, int d, int y, int id): month(m), day(d), year(y), personID(id){
        cout << "Date-of-birth object for person " << personID << " has been created.\n";
    }

    ~Date() {
        cout << "Date-of-birth object for person " << personID << " has been destroyed.\n";
    }

};

class Country {
    string name;
public:
    Country(string name) : name(name) {
        cout <<"A Country object has been created.\n";
    }
    ~Country() {
        cout << "A Country object has been destroyed.\n";
    }
};

class Person {
    string name;
    Date dateOfBirth;
    int personID;
    Country *pCountry;

public:
    Person(string name, string month, int day, int year, Country *pC): 
    name(name),
    dateOfBirth(month, day, year, Person::uniquePersonID),
    personID(Person::uniquePersonID),
    pCountry(pC) {
        cout << "Person object " << personID << " has been created.\n";
        Person::uniquePersonID++;
    }
    ~Person() {
        cout << "Person object " << personID << " has been destroyed.\n";
    }

    static int uniquePersonID;
};

int Person::uniquePersonID = 1;

int main() {    
    Country usa("EDO");
    Person *p = new Person("Bruce Lee", "January", 1, 1985, &usa);
    Person p1("Eva Gustafson", "May", 15, 1992, &usa);
    cout << "Now there are two people.\n";
    delete p;
    p = 0;
    cout << "Now there is only one.\n";
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

class Person
{
    std::string fname, lname;
    char mi;
    int age;
public:
    std::string getFname() const {return fname;}
    std::string getLname() const {return lname;}
    char getMi() const {return mi;}
    int getAge() const {return age;}

    void setFname(std::string name){fname = name;}
    void setLname(std::string name){lname = name;}
    void setMi(char ch){mi = ch;}

    void load(std::ifstream &inFile);
    void store(std::ofstream &outFile);

    Person(std::string fname = "", char mi = 0,
            std::string lname = "", int age = 0);

    void display()
    {
        std::cout << fname << " " << mi << " " << lname << std::endl
                  << "Age: " << age << std::endl;
    }
};


#include <string>
#include <iostream>

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum Classificaton { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
    protected:
        std::string name;
    public:
        Person() {setName(""); }
        Person(std::string pName) { setName(pName); }
        void setName(std::string pName)
        {   name = pName;
            std::string *pStr = &name;
            std::cout << "\nThis is in Person. This is address of name\n"
                      << pStr << std::endl;
        }
        std::string getName() const { return name; }
};

class Student: public Person
{
    private:
        Discipline major;
        Person *advisor;
    public:
        Student(std::string sname, Discipline d, Person *adv);
        void setMajor(Discipline d) { major = d; }
        Discipline getMajor() const { return major; }
        void setAdvisor(Person *p) { advisor = p; }
        Person *getAdvisor() const { return advisor; }
};

class Faculty: public Person
{
    private:
        Discipline department;
    public:
        Faculty(std::string fname, Discipline d)
        {
            name = fname;
            std::cout << "\nThis is Faculty\n";
            std::string *sPtr = &name;
            std::cout << "\nand this is address of name in Faculty\n"
                      << sPtr << std::endl;
            department = d;
        }
        void setDepartment(Discipline d) { department = d; }
        Discipline getDepartment() { return department; }
};



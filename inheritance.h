#include <string>
using namespace std;

enum Discipline {ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

class Person {
    protected:
        string name;
    public:
        Person() {name = " "; }
        Person (string pName) { setName(pName);}
        void setName (string pName) { name = pName;}
        string getName() const {return name; }
};

class Student:public Person {
    private:
        Discipline major;
        Person *advisor;
    public:
        Student(string name, Discipline d, Person *adv);
        void setMajor(Discipline d) {major = d; }
        Discipline getMajor() const {return major;}
        void setAdvisor(Person *p) {advisor = p; }
        Person *getAdvisor() const {return advisor; }
};

class Faculty:public Person {
    private:
        Discipline department;
    public:
        Faculty(string fname, Discipline d) {
            name =fname;
            department = d;
        }
        void setDepartment (Discipline d) { department = d; }
        Discipline getDepartment() const {return department; }

};



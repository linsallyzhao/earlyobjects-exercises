#include <string>

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
    protected:
        std::string name;
    public:
        Person() {setName(""); }
        Person(std::string pName) { setName(pName); }
        void setName(std::string pName) { name = pName; }
        virtual std::string getName() const {return name; }
};

class Student: public Person
{
    private:
        Discipline major;
        Person *advisor;
    public:
        Student(std::string sname, Discipline d, Person *adv)
            :Person(sname)
        {
            major = d;
            advisor = adv;
        }
        void setMajor(Discipline d) { major = d; }
        Discipline getMajor() const {return major; }
        void setAdvisor(Person *p) { advisor = p; }
        Person *getAdvisor() const {return advisor; }
};

class Faculty:public Person
{
    private:
        Discipline department;
    public:
        Faculty(std::string fname, Discipline d) :Person(fname)
    {
        department = d;
    }
        void setDepartment(Discipline d) { department = d; }
        Discipline getDepartment() const { return department; }
};

class TFaculty : public Faculty
{
    private:
        std::string title;
    public:
        TFaculty(std::string fname, Discipline d, std::string title)
            :Faculty(fname, d)
        {
            setTitle(title);
        }
        void setTitle(std::string title) { this->title = title; }
        virtual std::string getName() const
        {
            return title + " " + Person::getName();
        }
};



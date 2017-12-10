#include <string>

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum Classificaton { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
    protected:
        std::string name;
    public:
        Person() {setName(""); }
        Person(std::string pName) { setName(pName); }
        void setName(std::string pName) { name = pName; }
        std::string getName() const { return name; }
};

class Faculty: public Person
{
    private:
        Discipline department;
    public:
        Faculty(std::string fname, Discipline d): Person(fname)
        {
            department = d;
        }
        void setDepartment(Discipline d) { department = d; }
        Discipline getDepartment() { return department; }
};

class TFaculty: public Faculty
{
    private:
        std::string title;
    public:
        TFaculty(std::string fname, Discipline d, std::string title)
            : Faculty(fname, d)
        {
            setTitle(title);
        }

        void setTitle(std::string title) { this->title = title; }
        std::string getName() const
        {return title + " " + Person::getName(); }
};


class Student: public Person
{
    private:
        Discipline major;
        TFaculty *advisor;
    public:
        Student(std::string sname, Discipline d, TFaculty *adv);
        void setMajor(Discipline d) { major = d; }
        Discipline getMajor() const { return major; }
        void setAdvisor(TFaculty *p) { advisor = p; }
        TFaculty *getAdvisor() const { return advisor; }
};

#include "Inheritance2.h"

Student::Student(std::string sname, Discipline d, Person *adv)
    : Person(sname)
{
    major = d;
    advisor = adv;
}


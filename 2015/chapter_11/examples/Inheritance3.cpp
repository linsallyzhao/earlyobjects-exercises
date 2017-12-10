#include "Inheritance3.h"

Student::Student(std::string sname, Discipline d, TFaculty *adv)
    : Person(sname)
{
    major = d;
    advisor = adv;
}


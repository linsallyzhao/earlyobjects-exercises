#include "inheritance.h"

Student::Student (string sname, Discipline d, Person *adv) {
    name = sname;
    major = d;
    advisor = adv;
}

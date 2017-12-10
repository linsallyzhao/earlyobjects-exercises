#include <iostream>
#include "Inheritance.h"

const std::string dName[] = {
    "Archeology", "Biology", "Computer Science"
};

const std::string cName[] = {
    "Freshman", "Sophomore", "Junior", "Senior"
};

int main()
{
    Faculty prof;
    prof.setName("Indiana Jones");

    prof.setDepartment(ARCHEOLOGY);
    std::cout << "Professor " << prof.getName()
              << " teaches in the Department of ";

    Discipline dept = prof.getDepartment();

    std::cout << dName[dept] << std::endl;

    return 0;
}


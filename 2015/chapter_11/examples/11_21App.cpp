#include <iostream>
#include "Inheritance2.h"

const std::string dName[] = {
    "Archeology", "Biology", "Computer Science"
};

const std::string cName[] = {
    "Freshman", "Sophomore", "Junior", "Senior"
};

int main()
{
    Faculty prof("Indiana Jones", ARCHEOLOGY);
    Student st("Sean Bolster", ARCHEOLOGY, &prof);

    std::cout << "Professor " << prof.getName()
              << " teaches in the Department of ";

    Discipline dept = prof.getDepartment();

    std::cout << dName[dept] << std::endl;

    Person *pAdvisor = st.getAdvisor();
    std::cout << st.getName() << "\'s advisor is "
              << pAdvisor->getName() << ". ";

    return 0;
}


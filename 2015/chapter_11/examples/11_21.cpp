#include <iostream>
#include "Inheritance3.h"

const std::string dName[] = {
    "Archeology", "Biology", "Computer Science"
};

const std::string cName[] = {
    "Freshman", "Sophomore", "Junior", "Senior"
};

int main()
{
    TFaculty prof("Indiana Jones", ARCHEOLOGY, "Dr.");
    Student st("Sean Bolster", ARCHEOLOGY, &prof);

    std::cout << prof.getName()
              << " teaches " << dName[prof.getDepartment()] << ". \n";

    TFaculty *pAdvisor = st.getAdvisor();
    std::cout << st.getName() << "\'s advisor is "
              << pAdvisor->getName() << ". ";

    return 0;
}


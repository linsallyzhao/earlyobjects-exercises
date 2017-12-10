#include <iostream>
#include "Inheritance4.h"

int main()
{
    Person *pp;
    Faculty *pf;
    TFaculty *ptf;
    ptf = new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr.");

    std::cout << "Get name through a pointer to TFaculty: ";
    std::cout << ptf->getName() << std::endl;

    pf = ptf;
    std::cout << "Get name through a pointer to Faculty: ";
    std::cout << pf->getName() << std::endl;

    pp = ptf;
    std::cout << "Get name through a cast to pointer to TFaculty: ";
    std::cout << static_cast<TFaculty *>(pp)->getName() << std::endl;

    TFaculty *ptf1;
    ptf1 = static_cast<TFaculty *>(pp);
    std::cout << "Get name through a pointer to TFaculty: ";
    std::cout << ptf1->getName() << std::endl;

    return 0;
}



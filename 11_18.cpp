#include <iostream>
#include "Inheritance.h"

using namespace std;

const string dName[] = {"Archeology", "Biology", "Computer Science"};
const string cName[] = {"Freshman", "Sophomore", "Junior", "Senior"};

int main() {
    Faculty prof;
    prof.setName("Indiana Jones");
    prof.setDepartment(ARCHEOLOGY);
    cout << "Professor " << prof.getName() << " teaches in the Department of ";
    Discipline dept = prof.getDepartment();
    cout << dName[dept] << endl;

    return 0;
}

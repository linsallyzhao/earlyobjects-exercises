#include <iostream>
#include "inheritance2.cpp"
using namespace std;

const string dName[] = {"Archeology", "Biology", "Computer Science"};
const string cName[] = {"Freshman", "Sophomore", "Junior", "Senior"};

int main() {
    TFaculty prof("Indiana Jones", ARCHEOLOGY, "Dr.");
    Student st("Sean Bolster", ARCHEOLOGY, &prof);
    cout << prof.getName() << " teaches " 
         << dName[prof.getDepartment()] << ". " << endl;

    Person *pAdvisor = st.getAdvisor();
    cout << st.getName() << "\'s advisor is " << pAdvisor->getName() << ". ";


    return 0;
}

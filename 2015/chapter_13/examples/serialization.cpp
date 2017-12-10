#include "serialization.h"

Person::Person(std::string fname, char mi, std::string lname, int age)
{
    this->fname = fname;
    this->lname = lname;
    this->mi = mi;
    this->age = age;
}

void Person::store(std::ofstream &outFile)
{
    outFile.write(&mi, sizeof(mi));
    outFile.write(reinterpret_cast<char *>(&age), sizeof(age));

    int firstNameLength = fname.length();
    outFile.write(reinterpret_cast<char *>(&firstNameLength),
                            sizeof(int));
    outFile.write(fname.data(), firstNameLength);
    int lastNameLength = lname.length();
    outFile.write(reinterpret_cast<char *>(&lastNameLength), 
                            sizeof(int));
    outFile.write(lname.data(), lastNameLength);
}

void Person::load(std::ifstream &inFile)
{
    const int BUFFER_SIZE = 256;
    static char buffer[256];

    inFile.read(&mi, sizeof(mi));
    inFile.read(reinterpret_cast<char *>(&age), sizeof(age));

    int firstNameLength;
    inFile.read(reinterpret_cast<char *>(&firstNameLength), sizeof(int));
    inFile.read(buffer, firstNameLength);
    buffer[firstNameLength] = '\0';
    fname = buffer;

    int lastNameLength;
    inFile.read(reinterpret_cast<char *>(&lastNameLength), sizeof(int));
    inFile.read(buffer, lastNameLength);
    buffer[lastNameLength] = '\0';
    lname = buffer;
}


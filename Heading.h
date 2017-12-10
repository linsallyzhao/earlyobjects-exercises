#ifndef HEADING_H
#define HEADING_H

class Heading {
private:
    std::string comName, repName;

public:
    Heading(std::string = "ABC Industries", std::string = "Report");
    void printOneline();
    void printBox();

};
#endif

Heading::Heading(std::string com, std::string rep) {
    comName = com;
    repName = rep;
}

void Heading::printOneline() {
    std::cout << comName << " " << repName << std::endl;
}

void Heading::printBox() {
    int totalLong = 50;
    std::cout << std::endl;
    for (int count = 1; count <= totalLong; count++) 
        std::cout << "*" ;
    std::cout << std::endl;
    int space1 = (totalLong - comName.length()) / 2;
    int space2 = (totalLong - repName.length()) / 2;
    for (int sp = 1; sp <= space1; sp++) 
        std::cout << " ";
    std::cout << comName << std::endl;
    for (int num = 1; num <= space2; num++) 
        std::cout << " ";
    std::cout << repName << std::endl;

    for (int count = 1; count <= totalLong; count++) 
        std::cout << "*" ;
    std::cout << std::endl;
}



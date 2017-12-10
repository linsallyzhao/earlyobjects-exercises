#include <iostream>
#include <string>

class Address
{
    private:
        std::string street;
    public:
        Address() { street = ""; }
        Address(std::string st) {setStreet(st); }
        void setStreet (std::string st) {street = st; }
        std::string getStreet() const {return street; }
};

int main()
{
    Address mary("123 Main St");
    Address joan = mary;
    std::cout << "Mary lives at " << mary.getStreet() << std::endl;
    std::cout << "Joan lives at " << joan.getStreet() << std::endl;

    joan.setStreet("1600 Pennsylvania Ave");
    std::cout << "Now Mary lives at " << mary.getStreet() << std::endl
              << "Now Joan lives at " << joan.getStreet() << std::endl;

    return 0;
}

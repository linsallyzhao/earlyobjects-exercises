#include <iostream>
#include <string>

int main()
{
    std::string s1 = "There once was a person named ",
                s2 = " who lived in ",
                s3 = "\nand who loved ",
                s4 = ". At the age of ",
                s5 = ", ",
                s6 = " graduated \nfrom high school and went to work in a ",
                s7 = " factory. \n",
                s8 = " got married and had ",
                s9 = " children and a pet ",
                s10= " named ",
                s11= ". \nEvery weekend the family and ",
                s12= " had fun ",
                s13= " together. ";

    std::string name, city, activity, animal, product, petName;
    int age, kids;

    std::cout << "Enter the following information and I\'ll"
              << " tell you a story. \n\n";
    std::cout << "Your name: ";
    std::getline(std::cin, name);

    std::cout << "The name of a city: ";
    std::getline(std::cin, city);

    std::cout << "A physical activity (e.g. jogging, playing baseball): ";
    std::getline(std::cin, activity);

    std::cout << "An animal: ";
    std::getline(std::cin, animal);

    std::cout << "A food or product you can buy: ";
    std::getline(std::cin, product);

    std::cout << "An adjective noun (e.g. blue car): ";
    std::getline(std::cin, petName);

    std::cout << "A number between 10 and 50: ";
    std::cin >> age;

    std::cout << "A number between 0 and 15: ";
    std::cin >> kids;

    std::cout << std::endl << s1 << name << s2 << city << s3 << activity
              << s4 << age << s5 << name << s6 << product << s7
              << name << s8 << kids << s9 << animal << s10 << petName
              << s11 << petName << s12 << activity << s13 << std::endl;

    return 0;

}

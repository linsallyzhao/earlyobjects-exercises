#include <iostream>
#include <iomanip>
#include <string>

struct PayRoll
{
    int empNumber;
    std::string name;
    double hours,
           payRate;
};

int main()
{
    PayRoll employee;
    double grossPay;

    std::cout << "Enter the employee's number: ";
    std::cin >> employee.empNumber;

    std::cout << "Enter the employee's name : ";
    std::cin.ignore();
    std::getline(std::cin, employee.name);

    std::cout << "Hours worked this week: ";
    std::cin >> employee.hours;

    std::cout << "Enployee's hourly pay rate: " ;
    std::cin >> employee.payRate;

    grossPay = employee.hours * employee.payRate;

    std::cout << "\nHere is the employee's payroll data: \n";
    std::cout << "Name:             " << employee.name << std::endl
              << "Employee number:  " << employee.empNumber << std::endl
              << "Hours worked:     " << employee.hours << std::endl
              << "Hourly pay rate:  " << employee.payRate << std::endl
              << std::fixed << std::showpoint << std::setprecision(2)
              << "Gross Pay:        " << grossPay << std::endl;

    return 0;
}

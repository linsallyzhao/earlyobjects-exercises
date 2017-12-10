#include <iostream>

int main()
{
    int books,
        months;
    double booksPerMonth;

    std::cout << "How many books do you plan to read? ";
    std::cin >> books;
    std::cout << "How many months will it take you to read them? ";
    std::cin >> months;

    booksPerMonth = double(books) / months;
    std::cout << "That is " << booksPerMonth << " books per month. \n";

    return 0;


}

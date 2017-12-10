#include <iostream>
#include <string>

int main()
{
    std::string newname, front, end;
    int numStudent;

    std::cout << "How many students are there in your class?\n";
    std::cin >> numStudent;
    std::cin.ignore(50, '\n');

    while ((numStudent < 1) || (numStudent > 25))
    {
        std::cout << "The size of class is invalid. Please enter again.\n";
        std::cin >> numStudent;
    }

    std::cout << "Pleasse enter first name of your student\n";
    std::cin >> newname;
    front = newname;
    end = newname;

    for (int count = 1; count <= numStudent - 1; count++)
    {
        if (newname < front)
            front = newname;
        if (newname > end)
            end = newname;
        std::cout << "Next name please\n";
        std::cin >> newname;
    }
    std::cout << "The front of the line is " << front << std::endl
              << "The end of the line is " << end << std::endl;
    return 0;
}


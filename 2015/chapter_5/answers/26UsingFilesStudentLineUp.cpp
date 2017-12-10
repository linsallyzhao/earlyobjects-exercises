#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream infile;
    std::string newname, front, end;
    int numStudent;
    infile.open("LineUp");

    infile >> newname;
    front = newname;
    end = newname;

    while (infile >> newname)
    {
        if (newname < front)
            front = newname;
        if (newname > end)
            end = newname;
    }
    infile.close();
    std::cout << "The front of the line is " << front << std::endl
              << "The end of the line is " << end << std::endl;
    return 0;
}


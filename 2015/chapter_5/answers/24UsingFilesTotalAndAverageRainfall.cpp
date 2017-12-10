#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream infile;
    std::string start, end;
    double rain, total = 0, avg;
    int num = 1;
    infile.open("Railfall");
    infile >> start;
    infile >> end;

    while (infile >> rain)
    {
        num++;
        total += rain;
    }
    infile.close();
    avg = total / num;

    std::cout << "During the month of " << start << "-" << end
              << " the total rain fall was " << total << " inches and\n"
              << "the average monthly rainfall was " << avg << " inches. \n";
    return 0;
}
     

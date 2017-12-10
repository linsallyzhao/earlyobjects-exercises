#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outputFile;

    outputFile.open("test");
    std::cout << "Now writing data to the file. \n";

    outputFile << "Bach\n";
    outputFile << "Beethhoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    outputFile.close();

    std::cout << "Done.\n";
    return 0;
}

#include <fstream>
#include <iostream>

int main()
{
    std::fstream inFile("encrypted.txt", std::ios::in);
    std::fstream outFile("decrypted.txt", std::ios::out);

    if (!inFile)
    {
        std::cout << "Error opening file\n";
        return 0;
    }

    else
    {
        char ch = 0;
        while (!inFile.eof())
        {
            inFile.get(ch);
            outFile.put(ch - 10);
        }
    }
    inFile.close();
    outFile.close();

    return 0;
}

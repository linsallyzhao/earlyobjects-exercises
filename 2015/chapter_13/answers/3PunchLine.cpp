#include <iostream>
#include <fstream>
#include <string>

void displayAll(std::fstream &);
void displayLast(std::fstream &);

int main()
{
    std::fstream joke, punch;
    joke.open("joke.dat", std::ios::in);
    punch.open("punchline.dat", std::ios::in);
    if (joke && punch)
    {
        displayAll(joke);
        displayLast(punch);
    }
    else
    {
        std::cout << "cannot open  file/files\n";
    }

    joke.close();
    punch.close();

    return 0;
}
void displayAll(std::fstream &file)
{
    std::string input;
    while (!file.eof())
    {
        std::getline(file, input);
        std::cout << input << std::endl;
    }
}

void displayLast(std::fstream &file)
{
    long pos = -2;
    char ch = 0;
    std::string input;
    file.seekg(pos, std::ios::end);
    file.get(ch);
    while (ch != '\n')
    {
        pos--;
        file.seekg(pos, std::ios::end);
        file.get(ch);
    }
    std::getline(file, input);
    std::cout << input << std::endl;
}



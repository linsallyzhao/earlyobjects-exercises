#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void sort(char str[], int size, std::vector<std::string> & transpositions);


int main()
{
    char str1[] = "spot";
    char str1Copy[] = "spot";
    char str2[] = "stop";
    char str2Copy[] = "stop";

    std::vector<std::string> transpose;
    std::vector<std::string> reverse_transpose;

    std::cout << "The first word is " << str1 << std::endl;
    std::cout << "The second word is " << str2 << std::endl;

    sort(str1, 4, transpose);
    sort(str2, 4, reverse_transpose);

    std::cout << "The transformation steps are: " << std::endl;
    std::cout << str1Copy << " ";
    for (int k = 0; k < transpose.size(); k++)
    {
        std::cout << transpose[k] << " ";
    }

    for (int k = reverse_transpose.size() - 2; k >= 0; k--)
    {
        std::cout << reverse_transpose[k] << " ";
    }
    std::cout << str2Copy << " ";

    std::cout << std::endl;

    return 0;
}

void sort(char str[], int size, std::vector<std::string> & transpositions)
{
    int upperBound = size - 1;
    while(upperBound > 0)
    {
        for (int k = 0; k < upperBound; k++)
        {
            if (str[k] > str[k + 1])
            {
                std::swap(str[k], str[k + 1]);
                transpositions.push_back(str);
            }
        }
        upperBound--;
    }
}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void sort(char str[], int size, std::vector<int> & transpositions);


int main()
{
    char str1[] = "spot";
    char str1Copy[] = "spot";
    char str2[] = "stop";

    std::vector<int> transpose;
    std::vector<int> reverse_transpose;

    std::cout << "The first word is " << str1 << std::endl;
    std::cout << "The second word is " << str2 << std::endl;

    sort(str1, 4, transpose);
    sort(str2, 4, reverse_transpose);

    std::cout << "The transformation steps are: " << std::endl;
    std::cout << str1Copy << " ";
    for (int k = 0; k < transpose.size(); k++)
    {
        int index = transpose[k];
        std::swap(str1Copy[index], str1Copy[index + 1]);
        std::cout << str1Copy << " ";
    }

    for (int k = reverse_transpose.size() - 1; k >= 0; k--)
    {
        int index = reverse_transpose[k];
        std::swap(str1Copy[index], str1Copy[index + 1]);
        std::cout << str1Copy << " ";
    }

    std::cout << std::endl;

    return 0;
}

void sort(char str[], int size, std::vector<int> & transpositions)
{
    int upperBound = size - 1;
    while(upperBound > 0)
    {
        for (int k = 0; k < upperBound; k++)
        {
            if (str[k] > str[k + 1])
            {
                transpositions.push_back(k);
                std::swap(str[k], str[k + 1]);
            }
        }
        upperBound--;
    }
}


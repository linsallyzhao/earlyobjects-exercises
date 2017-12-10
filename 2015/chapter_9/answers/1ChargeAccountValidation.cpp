#include <iostream>

int linSearch(int array[], int size, int value);

int main()
{
    int match;
    int result;
    int account[18] = {5658845, 4587745, 5236659, 2154489, 3625418,
                        5236598, 5412569, 5412658, 5125469, 5412236,
                        9847562, 1236598, 4512698, 5412321, 5412698,
                        4568215, 5412369, 54129787};
    std::cout << "Please enter your accout number: ";
    std::cin >> match;
    result = linSearch(account, 18, match);
    
    if (result == -1)
    {
        std::cout << "The account number is invalid. \n";
    }
    else
    {
        std::cout << "The account number is valid. \n";
    }

    return 0;
}

int linSearch(int array[], int size, int value)
{
    int pos = -1;
    int index = 0;
    bool found = false;

    while (index < size && !found) 
    {
        if (array[index] == value)
        {
            pos = index;
            found = true;
        }
        index++;
    }
    return pos;
}


#include <iostream>

int countPerfect(int array[], int size);

int main()
{
    const int NUM_SCORE = 20;
    int index = 0;
    int scores[NUM_SCORE];
    int countPer;

    std::cout << "Please enter up to 20 scores. ";
    int tempScore;
    std::cout << "Next score: ";
    std::cin >> tempScore;
    
    while (tempScore != -1 && index < NUM_SCORE)
    {
        while (tempScore < 0 || tempScore > 100)
        {
            std::cout << "Ivalid  score! Please re-enter. ";
            std::cin >> tempScore;
        }
        scores[index] = tempScore;
        index++;
        std::cout << "Next score: ";
        std::cin >> tempScore;
    }
    countPer = countPerfect(scores, NUM_SCORE);
    std::cout << "There are " << countPer << " perfect scores in all the scores.\n";

    return 0;
}

int countPerfect(int array[], int size)
{
    int index;
    int count = 0;

    for (index = 0; index < size; index++)
    {
        if (array[index] == 100)
        {
            count++;
        }
    }
    return count;
}


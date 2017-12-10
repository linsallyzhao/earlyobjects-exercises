#include <iostream>

void getJudgeData(double &score);
void calcScore(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);
double findHighest(double s1, double s2, double s3, double s4, double s5);

int main()
{
    double s1, s2, s3, s4, s5;
    getJudgeData(s1);
    getJudgeData(s2);
    getJudgeData(s3);
    getJudgeData(s4);
    getJudgeData(s5);

    calcScore(s1, s2, s3, s4, s5);
    
    return 0;
}

void getJudgeData(double &score)
{
    std::cout << "Please enter the score:\n";
    std::cin >> score;
    while ( score < 0 || score > 10)
    {
        std::cout << "Score should be between 0 and 10. Re-enter please.\n";
        std::cin >> score;
    }
}
void calcScore(double s1, double s2, double s3, double s4, double s5)
{
    double low, avg, high;
    low = findLowest(s1, s2, s3, s4, s5);
    high = findHighest(s1, s2, s3, s4, s5);
    avg = (s1 + s2 + s3 + s4 + s5 - low - high) / 3.0;
    std::cout << "Your average score is " << avg << std::endl;
}
double findLowest(double s1, double s2, double s3, double s4, double s5)
{
    double lowest;
    if (s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5)
        lowest = s1;
    else if (s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5)
        lowest = s2;
    else if (s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5)
        lowest = s3;
    else if (s4 < s1 && s4 < s2 && s4 < s3 && s4 < s5)
        lowest = s4;
    else if (s5 < s1 && s5 < s2 && s5 < s3 && s5 < s4)
        lowest = s5;
    return lowest;
}

double findHighest(double s1, double s2, double s3, double s4, double s5)
{
    double highest;
    if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5)
        highest = s1;
    else if (s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5)
        highest = s2;
    else if (s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5)
        highest = s3;
    else if (s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5)
        highest = s4;
    else if (s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4)
        highest = s5;
    return highest;
}


#include <iostream>

void getScore(double &score);
void calcAverage(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);

int main()
{
    double s1, s2, s3, s4, s5;
    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);

    calcAverage(s1, s2, s3, s4, s5);
    
    return 0;
}

void getScore(double &score)
{
    std::cout << "Please enter the score:\n";
    std::cin >> score;
    while ( score < 0 || score > 100)
    {
        std::cout << "Score should be between 0 and 100. Re-enter please.\n";
        std::cin >> score;
    }
}
void calcAverage(double s1, double s2, double s3, double s4, double s5)
{
    double low, avg;
    low = findLowest(s1, s2, s3, s4, s5);
    avg = (s1 + s2 + s3 + s4 + s5 - low) / 4.0;
    std::cout << "Your average of the highest four scores is " << avg << std::endl;
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



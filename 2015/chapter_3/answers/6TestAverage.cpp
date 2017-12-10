#include <iostream>
#include <iomanip>

int main()
{
    float s1, s2, s3, s4, s5, avg;

    std::cout << "Please enter fiv scores \n";
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5;

    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    std::cout << "Your average score is " 
              << std::fixed << std::setprecision(1)
              << avg << std::endl;

    return 0;
}

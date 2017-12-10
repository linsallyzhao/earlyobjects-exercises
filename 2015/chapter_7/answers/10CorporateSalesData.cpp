#include <iostream>
#include <string>
#include <iomanip>

struct CorpData
{
    std::string name;
    double sale1,
           sale2,
           sale3,
           sale4;

    CorpData(std::string n, double s1, double s2, double s3, double s4)
    {
        name = n;
        sale1 = s1;
        sale2 = s2;
        sale3 = s3;
        sale4 = s4;
    }
};

void quarterAvg(const CorpData &);

int main()
{
    CorpData east("East", 90, 89, 67, 70);
    CorpData west("West", 98, 69, 66, 79);
    CorpData north("North", 60, 79, 67, 30);
    CorpData south("South", 80, 89, 65, 70);

    quarterAvg(east);
    quarterAvg(west);
    quarterAvg(north);
    quarterAvg(south);

    return 0;
}

void quarterAvg(const CorpData &cor)
{
    double avg = (cor.sale1 + cor.sale2 + cor.sale3 + cor.sale4) / 4;
    std::cout << cor.name << " branch's quarterly sale average is $"
              << std::fixed << std::showpoint << std::setprecision(2)
              << avg << std::endl;
}


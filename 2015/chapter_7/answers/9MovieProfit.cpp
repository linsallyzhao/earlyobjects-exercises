#include <iostream>
#include <string>

struct MovieData
{
    std::string title,
                director;
    int yearReleased;
    double runningTime;
    double proCost;
    double year1Rev;

    MovieData(std::string t, std::string dir, int year, double time, 
            double cost, double rev)
    {
        title = t;
        director = dir;
        yearReleased = year;
        runningTime = time;
        proCost = cost;
        year1Rev = rev;
    }
};

void display(const MovieData &);

int main()
{
    MovieData movie1("Up", "Disney", 2011, 110, 20000, 25000);
    MovieData movie2("Toy story", "WOODY", 2009, 120, 12000, 24000);
    display(movie1);
    display(movie2);
    return 0;
}

void display(const MovieData &moo)
{
    std::cout << "Movie title  : " << moo.title << std::endl
              << "Director     : " << moo.director << std::endl
              << "Year released: " << moo.yearReleased << std::endl
              << "Running time : " << moo.runningTime << std::endl;
    std::cout << "The first year profit/loss is $" 
              << moo.year1Rev - moo.proCost << std::endl;
}


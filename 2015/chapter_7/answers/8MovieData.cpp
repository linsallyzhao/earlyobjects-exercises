#include <iostream>
#include <string>

struct MovieData
{
    std::string title,
                director;
    int yearReleased;
    double runningTime;

    MovieData(std::string t, std::string dir, int year, double time)
    {
        title = t;
        director = dir;
        yearReleased = year;
        runningTime = time;
    }
};

void display(MovieData);

int main()
{
    MovieData movie1("Up", "Disney", 2011, 110);
    MovieData movie2("Toy story", "WOODY", 2009, 120);
    display(movie1);
    display(movie2);
    return 0;
}

void display(MovieData moo)
{
    std::cout << "Movie title  : " << moo.title << std::endl
              << "Director     : " << moo.director << std::endl
              << "Year released: " << moo.yearReleased << std::endl
              << "Running time : " << moo.runningTime << std::endl;
}


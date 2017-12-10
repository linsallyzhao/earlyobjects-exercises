#include <iostream>
#include <string>

using namespace std;

struct MovieData {
    string title, dire;
    int reYear;
    double runTime;
    double cost, profit;

MovieData (string t = "Moive title", string di = "someone", int y = 2000, 
           double length = 100.0, double c = 500000, double pro = 5000){
        title = t;
        dire = di;
        reYear = y;
        runTime = length;
        cost = c;
        profit = pro; 
    }

};

void printMovie(const MovieData &);

int main() {
    string ti, dir;
    int release;
    double time, co, prof;

    cout << "Please enter the name of your favorite movie:\n";
    getline(cin, ti);
    cout << "Who is the director?\n";
    getline(cin, dir);
    cout << "When was it released?\n";
    cin >> release;
    cout << "How long is the standard cinema version?\n";
    cin >> time;
    cout << "How much did it cost to make this movie? (in million dollars)\n";
    cin >> co;
    cout << "What was the first-year revenue? (in million dollars)\n";
    cin >> prof;

    MovieData df;
    printMovie(df);
    MovieData favorate(ti, dir, release, time, co, prof);
    printMovie(favorate);

    return 0;
}


void printMovie(const MovieData &movie) {
    cout << "Movie title       :" << movie.title << endl;
    cout << "Director          :" << movie.dire << endl;
    cout << "Release year      :" << movie.reYear << endl;
    cout << "Running time      :" << movie.runTime << endl;
    cout << "Cost              :" << movie.cost << " million dollars" << endl;
    cout << "First-year revenue:" << movie.profit << " millin dollars" << endl;
}

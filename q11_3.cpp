#include "dayofyear.cpp"

using namespace std;

int main() {
    Dayofyear day1(100), day2("March", 13);

    day1.print();
    day2.print();

    day1++;
    ++day2;
    day1.print();
    day2.print();

    day1--;
    --day2;
    day1.print();
    day2.print();

    Dayofyear day3 = day1 + day2;
    day3.print();


    cout << "\nPut in a day in Feb: ";
    int febDay;
    cin >> febDay;
    Dayofyear day4("February", febDay);

    return 0;
}



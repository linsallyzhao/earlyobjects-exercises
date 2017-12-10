#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day, month, year;
    std::string monName;
    void toMonName ();
public:
    Date (int d = 1, int m = 1, int y = 2001);
    void printDate ();
};
#endif

Date::Date (int d, int m, int y) {
    day = d;
    month = m;
    year = y;

    if (month < 1 || month > 12) {
        std::cout << "Error: month invalid\n";
        day = 1;
        month = 1;
        year = 2001;
    } else if (month == 1 || month == 3 || month == 5 || month == 7
               || month == 8 || month == 10 || month == 12) {
        if (day < 0 || day > 31) {
            std::cout << "Error: day invalid\n";
            day = 1;
            month = 1;
            year = 2001;
        }
    } else if (month != 2) {
        if (day < 0 || day > 30) {
            std::cout << "Error: day invalid\n";
            day = 1;
            month = 1;
            year = 2001;
        }
    } else  {
        if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
            if (day < 0 || day > 29) {
                std::cout << "Error: day invalid\n";
                day = 1;
                month = 1;
                year = 2001;
            }
        } else {
            if (day < 0 || day > 28) {
            std::cout << "Error: day invalid\n";
            day = 1;
            month = 1;
            year = 2001;
            }
        }
    }
    toMonName();

}


void Date::toMonName () {
    switch (month) {
        case 1: monName = "January";
                break;
        case 2: monName = "February";
                break;
        case 3: monName = "March";
                break;
        case 4: monName = "April";
                break;
        case 5: monName = "May";
                break;
        case 6: monName = "June";
                break;
        case 7: monName = "July";
                break;
        case 8: monName = "August";
                break;
        case 9: monName = "September";
                break;
        case 10: monName = "October";
                break;
        case 11: monName = "November";
                break;
        case 12: monName = "December";
    }
}

void Date::printDate() {
    std::cout << std::endl << month << "/" << day << "/" << (year % 100) << std::endl;
    std::cout << monName << " " << day << ", " << year << std::endl;
    std::cout << day << " " << monName << " " << year << std::endl;
}


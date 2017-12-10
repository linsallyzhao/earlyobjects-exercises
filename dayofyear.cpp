#include "dayofyear.h"
#include <iostream>

std::string Dayofyear::months[12] = {"January", "February", "March", "April", "May", 
        "June", "July", "August", "September", "October", "November", "December"};
Dayofyear::Dayofyear(int d) {
    if (d > 365 || d < 0) {
        std::cout << "Day number is out of range\n";
        exit(0);
    }
    day = d;
}
Dayofyear::Dayofyear(std::string month, int d) {
    if (month == months[0]) {
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = d;
    }
    else if(month == months[1]){
        if (d < 0 || d > 28) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + d;
    }else if(month == months[2]){
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + d;
    }else if(month == months[3]){
        if (d < 0 || d > 30) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + d;
    }else if(month == months[4]) {
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + d;
    }else if(month == months[5]){
        if (d < 0 || d > 30) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + d;
    }else if(month == months[6]){
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + d;
    }else if(month == months[7]){
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
    }else if(month == months[8]){
        if (d < 0 || d > 30) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
    }else if(month == months[9]){
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
    }else if(month == months[10]){
        if (d < 0 || d > 30) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
    }else if(month == months[11]) {
        if (d < 0 || d > 31) {
            std::cout << "ERROR: out of range\n";
            exit(0);
        } else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
    }
}

void Dayofyear::print () const {
    std::cout << "Day " << day << " would be ";
    if (day <= 31) 
        std::cout << months[0] << " " << day << std::endl;
    else if(day <= 59) 
        std::cout << months[1] << " " << (day - 31) << std::endl;
    else if(day <= 90) 
        std::cout << months[2] << " " << (day - 59) << std::endl;
    else if(day <= 120) 
        std::cout << months[3] << " " << (day - 90) << std::endl;
    else if(day <= 151) 
        std::cout << months[4] << " " << (day - 120) << std::endl;
    else if(day <= 181) 
        std::cout << months[5] << " " << (day - 151) << std::endl;
    else if(day <= 212) 
        std::cout << months[6] << " " << (day - 181) << std::endl;
    else if(day <= 243) 
        std::cout << months[7] << " " << (day - 212) << std::endl;
    else if(day <= 273) 
        std::cout << months[8] << " " << (day - 243) << std::endl;
    else if(day <= 304) 
        std::cout << months[9] << " " << (day - 273) << std::endl;
    else if(day <= 334) 
        std::cout << months[10] << " " << (day - 304) << std::endl;
    else if(day <= 365) 
        std::cout << months[11] << " " << (day - 334) << std::endl;
}

Dayofyear Dayofyear::operator++ () {
    day++;
    return *this;
}

Dayofyear Dayofyear::operator++ (int) {
    Dayofyear temp = *this;
    day++;
    return temp;
}

Dayofyear Dayofyear::operator--() {
    day--;
    return *this;
}

Dayofyear Dayofyear::operator--(int) {
    Dayofyear temp = *this;
    day--;
    return temp;
}

Dayofyear operator+ (Dayofyear a, Dayofyear b) {
    return Dayofyear(a.day + b.day);
}

Dayofyear operator- (Dayofyear a, Dayofyear b) {
    return Dayofyear(a.day - b.day);
}


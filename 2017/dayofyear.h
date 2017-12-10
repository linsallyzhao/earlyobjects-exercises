#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>

class Dayofyear {
    private:
        int day;
        static std::string months[12]; 

    public:
        Dayofyear(int d);
        Dayofyear(std::string month, int d);
        void print ()const;
        Dayofyear operator++ ();
        Dayofyear operator++ (int);
        Dayofyear operator-- ();
        Dayofyear operator-- (int);
        friend Dayofyear operator+ (Dayofyear a, Dayofyear b);
        friend Dayofyear operator- (Dayofyear a, Dayofyear b);
        
};
#endif

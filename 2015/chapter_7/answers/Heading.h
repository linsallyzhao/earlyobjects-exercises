#ifndef HEADING_H
#define HEADING_H
#include <string>

class Heading
{
    private:
        std::string company;
        std::string report;


    public:
        Heading(std::string c = "ABC Industries", std::string r = "Report")
        {
            company = c;
            report = r;
        }

        void print();
};

#endif


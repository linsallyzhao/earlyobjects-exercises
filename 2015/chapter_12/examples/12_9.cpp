#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string str = "John  20 50";
    const char *cstr = "Amy 30 42";
    std::istringstream istr1(str);
    std::istringstream istr2;
    std::ostringstream ostr;

    std::string name;
    int score1, score2, average_score;

    istr1 >> name >> score1 >> score2;
    average_score = (score1 + score2) / 2;
    ostr << name << " has average score " << average_score << std::endl;

    istr2.str(cstr);
    istr2 >> name >> score1 >> score2;
    average_score = (score1 + score2) / 2;
    ostr << name << " has average score " << average_score << std::endl;

    ostr << std::hex;

    ostr << name << "'s scores in hexadecimal are: " << score1 
         << " and " << score2 << "\n";
    std::cout << ostr.str();

    return 0;
}

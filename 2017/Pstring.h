#ifndef PSTRING_H
#define PSTRING_H

class Pstring : public std::string {
    private:
        std::string str;
    public:
        Pstring(std::string str) {
            this->str = str;
        }
        Pstring(const Pstring &thingy) {
            str = thingy.str;
        }

        bool isPalindrome() {
            int size = str.length();
            bool pali = true;
            if (size % 2 == 1) {
                for (int index = 0; index < (size - 1 ) / 2; index++) {
                    if (str[index] != str[size - 1 - index])
                        pali = false;
                }
            } else if (size % 2 == 0) {
                for (int index = 0; index < (size / 2); index++) {
                    if (str[index] != str[size - 1 - index])
                        pali = false;
                }
            }

            return pali;
        } 

};

#endif

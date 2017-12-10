#include <typeinfo>

class Pstring : public std::string {
    public:
        Pstring () : std::string() {}
        Pstring(const Pstring &thingy) {
            *this = thingy;
        }

        bool isPalindrome() {
            int size = this->length();
            // std::cout << "Length is " << size << std::endl;
            bool pali = true;
            if (size % 2 == 1) {
                for (int index = 0; index < (size - 1 ) / 2; index++) {
                    if (this[index] != this[size - 1 - index]) {
                        // std::cout << "comparing " << this[index] << " " << this[size - 1 - index] << std::endl;
                        std::cout << "comparing " << this[index] << std::endl;
                        std::cout << "comparing " << this[size - 1 - index] << std::endl;
                        pali = false; }
                }
            } else if (size % 2 == 0) {
                for (int index = 0; index < (size / 2); index++) {
                    if (this[index] != this[size - 1 - index]) {
                        // std::cout << "comparing " << this[index] << " " << this[size - 1 - index] << std::endl;
                        pali = false; }
                }
            }

            return pali;
        } 

};


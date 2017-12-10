class Pstring : public std::string {
    public:
        Pstring () : std::string() {}
        Pstring(const Pstring &thingy) {
            *this = thingy;
        }

        bool isPalindrome() {
            int size = this->length();
            bool pali = true;
            if (size % 2 == 1) {
                for (int index = 0; index < (size - 1 ) / 2; index++) {
                    if (this[index] != this[size - 1 - index]) {
                        pali = false;
                    }
                }
            } else if (size % 2 == 0) {
                for (int index = 0; index < (size / 2); index++) {
                    if (this[index] != this[size - 1 - index]) {
                        pali = false;
                    }
                }
            }

            return pali;
        }

};

/* I tried different ways to use "this" pointer, *this doesn't work, doesn't
 * compile, this[index] doesn't work, memory problems, also tried *(this +
 * index), doesn't work, don't remember what werid problem that causes. The
 * reason might be that the string doesn't work exactly like a array, and the
 * [] is overloaded, so it doesn't means what it means in an array.Only
 * this->operator[] works so far. Reason?  I know for a string, you can just
 * use string[n], and it will return char accordingly, but how about I'm kinda
 * in the string class (since Pstring is derived from string class) ?
 */

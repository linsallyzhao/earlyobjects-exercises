#include <iostream>
#include <string>

class EncryptableString : public std::string {
    private:
    public:
        void encrypt() {
            int size = this->length();
            for (int index = 0; index < size; index++ ) {
                this->operator[](index)++;
            }

        }

};

using namespace std;

int main() {
    EncryptableString test;
    cout << "Enter a test string: \n";
    getline(cin, test);

    test.encrypt();

    cout << test << " after encryption\n";

    return 0;
}

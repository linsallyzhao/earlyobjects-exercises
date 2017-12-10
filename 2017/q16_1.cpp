#include <iostream>
#include <string>

using namespace std;

class BCheckString : public string {
public:
    class BoundsException {};
    BCheckString (string obj) : string(obj) {}
    char operator[] (int k) {
        if (k < 0 || k >= this->length()) {
            throw BoundsException();
        } else {
            return (this->c_str())[k];
        }
    }

};

int main() {
    string test = "test string object";
    BCheckString BCstring(test);

    cout << BCstring << endl;
    try{
        cout << "[30]   " << BCstring[30] << endl;
    }
    catch (BCheckString::BoundsException) {
        cout << "The subscript is out of range\n";
    }

    try{
        cout << "[0]   " << BCstring[0] << endl;
    }
    catch (BCheckString::BoundsException){
        cout << "The subscript is out of range\n";
    }

    return 0;
}

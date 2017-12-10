#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int sum1, sum2, sum3;
    long one, two, three;
    for (int index = 1; index <= 1000; index++) {
        one = index;
        two = index * index;
        three = index * index * index;
        string num = (to_string(one));
        string square = to_string(two);
        string cube = to_string(three);
        sum1 = sum2 = sum3 = 0;
        for (int i = 0; i < num.length(); i++) {
            sum1 += num[i] - '0';
        }
        for (int i = 0; i < square.length(); i++) {
            sum2 += square[i] - '0';
        }
        for (int i = 0; i < cube.length(); i++) {
            sum3 += cube[i] - '0';
        }
        if (sum1 == sum2 && sum2 == sum3) 
            cout << index << endl;
    }

    return 0;
}



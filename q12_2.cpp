#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int countWords (char *str);
double avg(char *str);

int main() {
    const int LENGTH = 61;
    char words[LENGTH];

    cout << "Enter a sentence please.\n";
    cin.getline(words, LENGTH);
    int count = countWords(words);
    cout << "There are " << count << " words in the sentence.\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "On average, " << avg(words) << " letters in each words.\n";

    return 0;
}

int countWords(char *str) {
    int index = 0;
    int countSpace = 1;

    while(str[index] != '\0') {
        if (str[index] == ' ')
            countSpace++;
        index++;
    }

    return countSpace;
}


double avg(char *str) {
    int numWords = countWords(str);
    int count = 0;
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] != ' ') 
            count++;
        index++;
    }

    return (double(count) / numWords);
}



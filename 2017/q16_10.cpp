#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main() {
    ifstream input("favorite_cities");
    if (!input){
        cout << "ERROR opening the file!\n";
        return 1;
    }
    int count;
    input >> count;
    input.get();
    map<int, string> names;
    map<int, string> city;
    map<string, string> favorite;
    string name;
    int i;
    for (int index = 0; index < count; index++) {
        input >> i;
        input >> name;
        names[i] = name;
        input.get();
    }
    input.get();
    int nums_city;
    for (int index = 0; index < count; index++) {
        input >> i;
        city[i] = "";
        input >> nums_city;
        for (int c = 0; c < nums_city; c++) {
            input >> name;
            city[i] += name;
            city[i] += " ";
        }
        input.get();

    }

    for (int x = 0; x < count; x++) {
        favorite[names[x]] = city[x];
    }
    
    string search;
    cout << "Who do you want to know?\n";
    cin >> search;
    cout << favorite[search] << endl;

    return 0;
}



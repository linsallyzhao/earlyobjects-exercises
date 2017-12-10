#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vect;

    for (int x = 0; x < 10; x++)
        vect.push_back(x * x);

    cout << "The collection has " << vect.size() << " elements. Here they are:\n";
    for (int x = 0; x < 10; x++) 
        cout << vect[x] << " ";

    cout << endl;

    random_shuffle(vect.begin(), vect.end());
    cout << "The elements have been shuffled:\n";
    for (int x = 0; x < 10; x++) 
        cout << vect[x] << " ";

    cout << endl;

    sort(vect.begin(), vect.end());
    cout <<"The elements have been sorted :\n";
    for (int x = 0; x < 10; x++) 
        cout << vect[x] << " ";

    cout << endl;

    int val = 49;
    if(binary_search(vect.begin(), vect.end(), val ))
        cout << "The velue " << val << " was found in the vector.\n";
    else
        cout << "The velue " << val << " was not found in the vector.\n";

    return 0;
}



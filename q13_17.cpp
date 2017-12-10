#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

const int NAME_SIZE = 31, ADRESS_SIZE = 81, CITY_SIZE = 31, PHONE_SIZE = 15, 
          DATE_SIZE = 15;

struct Customer {
    char name[NAME_SIZE];
    char adress[ADRESS_SIZE];
    char cityStateAndZIP[CITY_SIZE];
    char telephone[PHONE_SIZE];
    double balance;
    char date[DATE_SIZE];
};

void displayMenu();
void appendNew(fstream &file, Customer &person);
int searchByName(const char name[], Customer *persons, int num); 
void displayOne(int index, Customer *persons); 
void deleteOne(int index, Customer *persons, fstream &file, int); 
void changeOne(int index, Customer *persons, fstream &file);

int main() {
    Customer person;
    fstream file("data", ios::in | ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file!\n";
        return 1;
    }

    file.seekp(0L, ios::end);
    long fileSize = file.tellp();
    long nums = fileSize / sizeof(person);
    if (nums > 0) {
        Customer persons[nums];
        file.clear();
        file.seekg(0L, ios::beg);
        file.read(reinterpret_cast<char *>(persons), fileSize);
        int index;
        char name[NAME_SIZE];

        displayMenu();
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: appendNew(file, person);
                    break;
            case 2: cout << "Please enter the customer's name:\n";
                    cin.ignore();
                    cin.getline(name, NAME_SIZE);
                    index = searchByName(name, persons, nums);
                    if (index == -1)
                        cout << "Couldn't fine this person:\n";
                    else
                        displayOne(index, persons);
                    break;
            case 3: cout << "Please enter the customer's name:\n";
                    cin.ignore();
                    cin.getline(name, NAME_SIZE);
                    index = searchByName(name, persons, nums);
                    if (index == -1)
                        cout << "Couldn't fine this person:\n";
                    else
                        deleteOne(index, persons, file, nums);
                    break;
            case 4: cout << "Please enter the customer's name:\n";
                    cin.ignore();
                    cin.getline(name, NAME_SIZE);
                    index = searchByName(name, persons, nums);
                    if (index == -1)
                        cout << "Couldn't fine this person:\n";
                    else
                        changeOne(index, persons, file);
                    break;
            case 5: for (int count = 0; count < nums; count++) {
                        cout << "Customer " << (count + 1) << ":\n";
                        displayOne(count, persons);
                    }
                    
        }
    } else{
        cout << "Currently has no record in.\n";
        cout << "Please enter one:\n";
        appendNew(file, person);
    }
    file.close();
    return 0;
}

        
void appendNew(fstream &file, Customer &person) {
    cout << "Please enter new name:\n";
    cin.ignore();
    cin.getline(person.name, NAME_SIZE);
    cout << "Please enter new adress:\n";
    cin.getline(person.adress, ADRESS_SIZE);
    cout << "Please enter new city, state and zip code:\n";
    cin.getline(person.cityStateAndZIP, CITY_SIZE);
    cout << "Please enter new telephone number:\n";
    cin.getline(person.telephone, PHONE_SIZE);
    cout << "Please enter new balance:\n";
    cin >> person.balance;
    cout << "Please enter new date of last payment:\n";
    cin.ignore();
    cin.getline(person.date, DATE_SIZE);
    file.clear();
    file.seekp(0L, ios::end);
    file.write(reinterpret_cast<char *>(&person), sizeof(person));
}

void displayMenu() {
    cout << "1, Enter a new record\n";
    cout << "2, Search for a particular customer's record and display it\n";
    cout << "3, Search for a particular customer's record and delete it\n";
    cout << "4, Search for a particular customer's record and change it\n";
    cout << "5, Display all records\n";
    cout << "Any other number to quit\n";
}

int searchByName(const char name[], Customer *persons, int num) {
    int index = -1;

    for (int i = 0; i < num; i++) {
        if (strcmp(name, persons[i].name) == 0 ) {
            index = i;
        }
    }
    return index;
}
void displayOne(int count, Customer *persons) {
    string temp;
    temp = persons[count].name;
    cout << "Name " << temp << endl;
    temp = persons[count].adress;
    cout << "Adress " << temp << endl;
    temp = persons[count].cityStateAndZIP;
    cout << temp << endl;
    temp = persons[count].telephone;
    cout << "Telephone " << temp << endl;
    cout << "Balance " << persons[count].balance << endl;
    temp = persons[count].date;
    cout << "Last payment date " << temp << endl;
}
void deleteOne(int index, Customer *persons, fstream &file, int num) {
    file.clear();
    file.seekp(0L, ios::beg);
    for (int i = 0; i < num; i++) {
        if (i != index) {
            file.write(reinterpret_cast<char *>(&persons[i]), sizeof(persons[0]));
        }
    }
}
        
void changeOne(int index, Customer *persons, fstream &file) {
    
    
    cout << "Please enter new name:\n";
    cin.getline(persons[index].name, NAME_SIZE);
    cout << "Please enter new adress:\n";
    cin.getline(persons[index].adress, ADRESS_SIZE);
    cout << "Please enter new city, state and zip code:\n";
    cin.getline(persons[index].cityStateAndZIP, CITY_SIZE);
    cout << "Please enter new telephone number:\n";
    cin.getline(persons[index].telephone, PHONE_SIZE);
    cout << "Please enter new balance:\n";
    cin >> persons[index].balance;
    cout << "Please enter new date of last payment:\n";
    cin.ignore();
    cin.getline(persons[index].date, DATE_SIZE);

    file.clear();
    long position = index * sizeof(persons[0]);
    file.seekp(position, ios::beg);
    file.write(reinterpret_cast<char *>(&persons[index]), sizeof(persons[0]));
}



/*How to wipe certain number of byte?   
 *In the function deleteOne */

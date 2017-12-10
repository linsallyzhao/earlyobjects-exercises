#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double A_PRICE = 0.08,
                 B_PRICE = 0.06,
                 A_BASE = 9.95,
                 B_BASE = 14.95,
                 C_BASE = 19.95;
    const int A_TIME = 5,
              B_TIME = 10;
    double time, total, saveB = -1.0, saveC = -1.0;
    char plan;
    string name;
    
    cout << "What is your name, please?\n";
    getline(cin, name);
    
    cout << "How many hours did you use last month?\n";
    cin >> time;

    if (time >=0) {
        
        cout << "Which plan have you purchase?\n";
        cin >> plan;

        switch (plan) {
            case 'a':
            case 'A': if (time <=5) {
                           total = A_BASE;
                           saveB = saveC = 0;
                      }
                      else {
                           total = A_BASE + (time - 5) * 60 * A_PRICE;
                           saveB = total - B_BASE - (time - 10) * 60 * B_PRICE;
                           saveC = total - C_BASE;
                      }
                      break;
            case 'b':
            case 'B': if (time <=10) {
                           total = B_BASE;
                           saveC = 0;
                      }
                      else {
                           total = B_BASE + (time - 10) * 60 * B_PRICE;
                           saveC = total - C_BASE;
                      }
                      break;
            case 'c':
            case 'C': total = C_BASE;
                      break;
            default: cout << "Invalid plan number\n";
                     return 0;
        }

        cout << fixed << showpoint << setprecision(2);
        cout << "Hello dear " << name << ", here is your bill for last month:\n";
        cout << "You chose plan " << plan << ", and have used " << time 
             << " hours.\n" << "Your total cost last month is " << total
             << " dollars.\n";
        if (saveB > 0) 
             cout << "You would have save " << saveB 
                  << " dollars if you had chose plan B. Just saying.\n";
        if (saveC > 0) 
             cout << "You would have save " << saveC 
                  << " dollars if you had chose plan C. Just saying.\n";
    }
    else 
        cout << "The time cannot be negative!\n";
    return 0;
}



#include <fstream>

using namespace std;

int main() {    

ofstream out;
out.open("SeatAvailability.dat");
for (int row = 0; row < 15; row++) {
    for ( int col = 0; col < 30; col++) {
        out << "#";
    }
    out << endl;
}

return 0;
}



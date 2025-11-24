#include <iostream>
using namespace std;

int main() {
    int units, type;
    double bill = 0;

    cout << "Enter number of units consumed: ";
    cin >> units;
    cout << "Enter connection type (1 for Domestic, 2 for Commercial): ";
    cin >> type;

    switch(type) {
        case 1:
            if(units <= 100) {
                bill = units * 10;
            } else {
                bill = 100 * 10 + (units - 100) * 15;
            }
            break;
        case 2:
            if(units <= 100) {
                bill = units * 20;
            } else {
                bill = 100 * 20 + (units - 100) * 25;
            }
            break;
        default:
            cout << "Invalid connection type!" << endl;
            return 1;
    }

    cout << "Total bill: " << bill << endl;
    return 0;
}
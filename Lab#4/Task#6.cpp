#include <iostream>
using namespace std;

int main() {
    int number;
    int even_count = 0;
    int odd_count = 0;

    while(true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if(number == 0) {
            break;
        }

        if(number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "Total even numbers: " << even_count << endl;
    cout << "Total odd numbers: " << odd_count << endl;

    return 0;
}
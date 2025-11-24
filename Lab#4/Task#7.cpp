#include <iostream>
using namespace std;

int main() {
    int secret_number = 7;
    int guess;

    while(true) {
        cout << "Guess the number: ";
        cin >> guess;

        if(guess == secret_number) {
            cout << "Congratulations!" << endl;
            break;
        } else if(guess > secret_number) {
            cout << "Too high" << endl;
        } else {
            cout << "Too low" << endl;
        }
    }

    return 0;
}
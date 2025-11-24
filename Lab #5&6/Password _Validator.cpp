#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "hello123";
    string userPassword;
    int attempts = 3;
    
    cout << "=== PASSWORD CHECKER ===" << endl;
    cout << "You have " << attempts << " attempts" << endl;
    
    for (int i = 1; i <= attempts; i++) {
        cout << "\nAttempt " << i << ": Enter password: ";
        cin >> userPassword;
        
        if (userPassword == correctPassword) {
            cout << "Access Granted!" << endl;
            break;
        } else {
            cout << "Wrong password!" << endl;
            
            if (i < attempts) {
                cout << "You have " << (attempts - i) << " attempts left" << endl;
            } else {
                cout << " No more attempts. Access Denied!" << endl;
            }
        }
    }
    
    return 0;
}
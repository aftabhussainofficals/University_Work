#include <iostream>
using namespace std;

void menu() {
    cout << "--- Number Analyzer ---" << endl;
    cout << "1. Even / Odd" << endl;
    cout << "2. Count Digits" << endl;
    cout << "3. Sum of Digits" << endl;
    cout << "4. Prime Check" << endl;
    cout << "5. Exit" << endl;
}

int getNumber() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    return num;
}


void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        cout << n << " is Even" << endl;
    } else {
        cout << n << " is Odd" << endl;
    }
}

int countDigits(int n) {
    int count = 0;
    int temp = n;
    
    if (n == 0) return 1;
    
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    int temp = n;
    
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int choice;
    int number;
    
    do {
        menu();
        cout << "Choose: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                number = getNumber();
                checkEvenOdd(number);
                break;
                
            case 2:
                number = getNumber();
                cout << "Digits = " << countDigits(number) << endl;
                break;
                
            case 3:
                number = getNumber();
                cout << "Sum of digits = " << sumDigits(number) << endl;
                break;
                
            case 4:
                number = getNumber();
                if (isPrime(number)) {
                    cout << number << " is Prime" << endl;
                } else {
                    cout << number << " is Not Prime" << endl;
                }
                break;
                
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
        
    } while (choice != 5);
    
    return 0;
}
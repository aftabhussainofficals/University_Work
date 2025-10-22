#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout << "\nResults:\n";
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    if (num2 != 0) {
        double quotient = num1 / num2;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Quotient = Undefined (division by zero)" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return reversed;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}
int main() {
    cout << "=== Testing Challenges ===" << endl;
    
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    cout << "Sum of digits of 1234: " << sumDigits(1234) << endl;
    
    cout << "Reverse of 12345: " << reverseNumber(12345) << endl;
    cout << "Reverse of 1221: " << reverseNumber(1221) << endl;
    
    cout << "Is 12321 palindrome? " << (isPalindrome(12321) ? "Yes" : "No") << endl;
    cout << "Is 12345 palindrome? " << (isPalindrome(12345) ? "Yes" : "No") << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double price;
    double taxRate;
    long long quantity;
    
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter tax rate (as percentage): ";
    cin >> taxRate;
    cout << "Enter quantity: ";
    cin >> quantity;
    
    double taxAmount = price * (taxRate / 100.0);
    double totalCost = (price + taxAmount) * quantity;
    
    cout << "Total cost: " << totalCost << endl;
    
    return 0;
}
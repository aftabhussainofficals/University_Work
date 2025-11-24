#include <iostream>
using namespace std;

int main() {
    int numBooks;
    
    cout << "Enter number of books returned late: ";
    cin >> numBooks;
    int book = 1;
    while (book <= numBooks) {
        cout << "\n--- Book " << book << " ---" << endl;
        
        int day = 1;
        int fine = 5;  
        
        while (fine <= 1000) {
            cout << "Day " << day << ": Fine = Rs. " << fine << endl;
            
            fine *= 2;
            day++;
            
            if (fine > 1000) {
                cout << "Day " << day << ": Fine = Rs. 1000 (MAXIMUM)" << endl;
                break;
            }
        }
        
        book++;
    }
    
    return 0;
}
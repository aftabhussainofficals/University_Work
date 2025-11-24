#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    
    cout << "\nCheckerboard Pattern (" << rows << "x" << columns << "):\n" << endl;
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
           
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;  
    }
    
    return 0;
}
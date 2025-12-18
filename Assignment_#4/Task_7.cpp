#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter matrix size (n): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter " << n*n << " elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nSnake pattern output:\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            for (int j = n-1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    
    return 0;
}
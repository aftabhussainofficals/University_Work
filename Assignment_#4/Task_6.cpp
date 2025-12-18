#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter matrix size (n): ";
    cin >> n;
    int matrix[n][n];
    int temp[n*n];
    cout << "Enter " << n*n << " elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[index] = matrix[i][j];
            index++;
        }
    }
    for (int i = 0; i < n*n-1; i++) {
        for (int j = 0; j < n*n-i-1; j++) {
            if (temp[j] > temp[j+1]) {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[index];
            index++;
        }
    }
    cout << "\nSorted matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
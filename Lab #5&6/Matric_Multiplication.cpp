#include <iostream>
using namespace std;

void inputMatrix(int mat[][10], int rows, int cols, string name) {
    cout << "\nEnter elements of " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << name << "[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[][10], int rows, int cols, string name) {
    cout << "\n" << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], 
                     int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }
   
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    int mat1[10][10], mat2[10][10], result[10][10];
    
    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;
    
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        cout << "Columns of first matrix (" << cols1 
             << ") must equal rows of second matrix (" << rows2 << ")." << endl;
        return 0;
    }
   
    inputMatrix(mat1, rows1, cols1, "Matrix 1");
    inputMatrix(mat2, rows2, cols2, "Matrix 2");
    
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
    
    displayMatrix(mat1, rows1, cols1, "First Matrix");
    displayMatrix(mat2, rows2, cols2, "Second Matrix");
    displayMatrix(result, rows1, cols2, "Result Matrix");
    
    return 0;
}
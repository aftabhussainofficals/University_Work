//=========================Samople Input/Output Formatting in C++=========================//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double num = 123.456789;
    cout << "Default precision: " << num << endl;
    cout << "Set precision to 2: " << fixed << setprecision(2) << num << endl;
    cout << "Set precision to 5: " << fixed << setprecision(5) << num << endl;

    int Num1 = 42;
    cout << "Default integer output: " << Num1 << endl;
    cout << "Width 10, filled with spaces: '" << setw(10) << Num1 << "'" << endl;
    cout << "Width 10, filled with zeros: '" << setfill('0') << setw(10) << Num1 << "'" << endl;

    cout << setfill(' ');
    double Num2 = 12345.6789;
    cout << "Scientific notation: " << scientific << Num2 << endl;

    return 0;
}
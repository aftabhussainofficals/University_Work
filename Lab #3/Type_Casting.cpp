#include <iostream>
using namespace std;
int main() {
    int intVar = 10;
    double doubleVar = intVar; 
    cout << "Implicitly casted int to double: " << doubleVar << endl;

    double anotherDouble = 9.78;
    int anotherInt = static_cast<int>(anotherDouble); 
    cout << "Explicitly casted double to int: " << anotherInt << endl;

    float floatVar = 5.67f;
    int cStyleCastInt = (int)floatVar; 
    cout << "C-style casted float to int: " << cStyleCastInt << endl;

    double largeDouble = 123456789.987654321;
    int dataLossInt = static_cast<int>(largeDouble);
    cout << "Original double: " << largeDouble << endl;
    cout << "After casting to int (data loss): " << dataLossInt << endl;

    return 0;
}
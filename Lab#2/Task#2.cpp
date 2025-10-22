#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    double kelvin = celsius + 273.15;
    cout << "\nTemperature Conversions:\n";
    cout << "Celsius   : " << celsius << "°C" << endl;
    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Kelvin    : " << kelvin << " K" << endl;

    return 0;
}

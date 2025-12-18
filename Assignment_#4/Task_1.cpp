#include <iostream>
#include <iomanip>
using namespace std;

const int DAYS = 7;
const int TIMES = 4;
void inputTemperatures(double temps[][TIMES]) {
    for (int day = 0; day < DAYS; day++) {
        cout << "Day " << (day + 1) << ":\n";
        for (int time = 0; time < TIMES; time++) {
            cout << "  Reading " << (time + 1) << ": ";
            cin >> temps[day][time];
        }
    }
}

double findHighest(double temps[][TIMES]) {
    double highest = temps[0][0];
    for (int day = 0; day < DAYS; day++) {
        for (int time = 0; time < TIMES; time++) {
            if (temps[day][time] > highest) {
                highest = temps[day][time];
            }
        }
    }
    return highest;
}

double findLowest(double temps[][TIMES]) {
    double lowest = temps[0][0];
    for (int day = 0; day < DAYS; day++) {
        for (int time = 0; time < TIMES; time++) {
            if (temps[day][time] < lowest) {
                lowest = temps[day][time];
            }
        }
    }
    return lowest;
}

void calculateDailyAverages(double temps[][TIMES], double averages[]) {
    for (int day = 0; day < DAYS; day++) {
        double sum = 0;
        for (int time = 0; time < TIMES; time++) {
            sum += temps[day][time];
        }
        averages[day] = sum / TIMES;
    }
}

void displayResults(double temps[][TIMES], double averages[], double highest, double lowest) {
    cout << "\n\n Weather Analysis Results \n\n";
    cout << setw(10) << left << "Day"
         << setw(15) << "Reading 1"
         << setw(15) << "Reading 2"
         << setw(15) << "Reading 3"
         << setw(15) << "Reading 4"
         << setw(15) << "Daily Avg" << endl;
    cout << string(85, '-') << endl;
    for (int day = 0; day < DAYS; day++) {
        cout << setw(10) << left << ("Day " + to_string(day + 1));
        for (int time = 0; time < TIMES; time++) {
            cout << setw(15) << fixed << setprecision(1) << temps[day][time];
        }
        cout << setw(15) << fixed << setprecision(1) << averages[day] << endl;
    }
    cout << string(85, '-') << endl;
    cout << "\nWeekly Summary:\n";
    cout << "Highest Temperature: " << fixed << setprecision(1) << highest << "°C\n";
    cout << "Lowest Temperature:  " << fixed << setprecision(1) << lowest << "°C\n";
    double totalSum = 0;
    for (int day = 0; day < DAYS; day++) {
        totalSum += averages[day];
    }
    double weeklyAverage = totalSum / DAYS;
    cout << "Weekly Average:      " << fixed << setprecision(1) << weeklyAverage << "°C\n";
}
int main() {
    double temperatures[DAYS][TIMES];
    double dailyAverages[DAYS];
    double highestTemp, lowestTemp;
    
    cout << " Weather Temperature Analyzer \n\n";
    cout << "Enter temperature readings for 7 days (4 times per day):\n\n";
    
    inputTemperatures(temperatures);
    highestTemp = findHighest(temperatures);
    lowestTemp = findLowest(temperatures);
    calculateDailyAverages(temperatures, dailyAverages);
    displayResults(temperatures, dailyAverages, highestTemp, lowestTemp);
    
    return 0;
}
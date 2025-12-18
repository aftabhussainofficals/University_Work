#include <iostream>
using namespace std;

int sales[7][5];
void inputSales() {
    for (int day = 0; day < 7; day++) {
        cout << "Enter sales for Day " << day + 1 << ":\n";
        for (int product = 0; product < 5; product++) {
            cout << "  Product " << product + 1 << ": ";
            cin >> sales[day][product];
        }
      }
}
void calculateRevenue(int weeklyRevenue[]) {
    for (int product = 0; product < 5; product++) {
        weeklyRevenue[product] = 0;
        for (int day = 0; day < 7; day++) {
            weeklyRevenue[product] += sales[day][product];
        }
  }
}
int findMaxProduct(int weeklyRevenue[]) {
    int maxIndex = 0;
    int maxValue = weeklyRevenue[0];
    
    for (int product = 1; product < 5; product++) {
        if (weeklyRevenue[product] > maxValue) {
            maxValue = weeklyRevenue[product];
            maxIndex = product;
        }
     }
    return maxIndex;
}
int findBestDay() {
    int bestDayIndex = 0;
    int bestDayTotal = 0;
    for (int day = 0; day < 7; day++) {
        int dayTotal = 0;
        for (int product = 0; product < 5; product++) {
            dayTotal += sales[day][product];
        }
        if (day == 0) {
            bestDayTotal = dayTotal;
        }
        else if (dayTotal > bestDayTotal) {
            bestDayTotal = dayTotal;
            bestDayIndex = day;
        }
    }
    return bestDayIndex;
}
int main() {
    int weeklyRevenue[5];
    cout << " Sales Tracking System \n\n";
    inputSales();
    calculateRevenue(weeklyRevenue);
    int maxProductIndex = findMaxProduct(weeklyRevenue);
    int bestDayIndex = findBestDay();
    cout << "\n=== Results ===\n\n";
    cout << "Weekly revenue for each product:\n";
    for (int product = 0; product < 5; product++) {
        cout << "Product " << product + 1 << ": $" << weeklyRevenue[product] << endl;
    }
    cout << "\nProduct " << maxProductIndex + 1 << " generated the most revenue: $" << weeklyRevenue[maxProductIndex] << endl;
    cout << "Best sales day: Day " << bestDayIndex + 1 << endl;
    
    return 0;
}
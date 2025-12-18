#include <iostream>
using namespace std;

int seats[10][10] = {0};

void displaySeats() {
    cout << "\n  ";
    for (int seat = 0; seat < 10; seat++) {
        cout << seat + 1 << " ";
    }
    cout << "\n";
    
    for (int row = 0; row < 10; row++) {
        cout << row + 1 << " ";
        for (int seat = 0; seat < 10; seat++) {
            if (seats[row][seat] == 0) {
                cout << ". ";
            } else {
                cout << "X ";
            }
        }
        cout << "\n";
    }
}

void reserveSeat() {
    int row, seat;
    cout << "Enter row (1-10): ";
    cin >> row;
    cout << "Enter seat (1-10): ";
    cin >> seat;
    
    if (row < 1 || row > 10 || seat < 1 || seat > 10) {
        cout << "Invalid seat!\n";
        return;
    }
    
    if (seats[row-1][seat-1] == 0) {
        seats[row-1][seat-1] = 1;
        cout << "Seat reserved!\n";
    } else {
        cout << "Seat already taken!\n";
    }
}

void cancelSeat() {
    int row, seat;
    cout << "Enter row (1-10): ";
    cin >> row;
    cout << "Enter seat (1-10): ";
    cin >> seat;
    
    if (row < 1 || row > 10 || seat < 1 || seat > 10) {
        cout << "Invalid seat!\n";
        return;
    }
    
    if (seats[row-1][seat-1] == 1) {
        seats[row-1][seat-1] = 0;
        cout << "Reservation canceled!\n";
    } else {
        cout << "Seat was not reserved!\n";
    }
}

void countRows() {
    int full = 0;
    int partial = 0;
    int empty = 0;
    
    for (int row = 0; row < 10; row++) {
        int count = 0;
        for (int seat = 0; seat < 10; seat++) {
            if (seats[row][seat] == 1) {
                count++;
            }
        }
        if (count == 0) {
            empty++;
        } else if (count == 10) {
            full++;
        } else {
            partial++;
        }
    }
    
    cout << "\nRow Status:\n";
    cout << "Fully occupied rows: " << full << "\n";
    cout << "Partially occupied rows: " << partial << "\n";
    cout << "Empty rows: " << empty << "\n";
}

int main() {
    int choice;
    
    do {
        cout << "\n=== Bus Seat Reservation System ===\n";
        cout << "1. Display seats\n";
        cout << "2. Reserve a seat\n";
        cout << "3. Cancel a seat\n";
        cout << "4. Count row status\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                reserveSeat();
                break;
            case 3:
                cancelSeat();
                break;
            case 4:
                countRows();
                break;
            case 5:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 5);
    
    return 0;
}
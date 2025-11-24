#include <iostream>
using namespace std;

int main() {
    int R, C;
    
   
    cout << "Enter number of rows: ";
    cin >> R;
    cout << "Enter number of columns: ";
    cin >> C;
    
    
    char seats[10][10];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            seats[i][j] = 'F';  // F for Free
        }
    }
    
    int choice;
    
    do {
        cout << "\n=== CINEMA BOOKING SYSTEM ===" << endl;
        cout << "1. Show Seat Layout" << endl;
        cout << "2. Book a Seat" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose option: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                cout << "\n--- SEAT LAYOUT ---" << endl;
                for (int i = 0; i < R; i++) {
                    for (int j = 0; j < C; j++) {
                        cout << "(" << (i+1) << "-" << (j+1) << " " << seats[i][j] << ") ";
                    }
                    cout << endl;
                }
                break;
            }
            
            case 2: {
                int row, col;
                cout << "\nEnter row number (1-" << R << "): ";
                cin >> row;
                cout << "Enter seat number (1-" << C << "): ";
                cin >> col;
                if (row < 1 || row > R || col < 1 || col > C) {
                    cout << "Invalid seat selection!" << endl;
                } else if (seats[row-1][col-1] == 'R') {
                    cout << "Seat already reserved!" << endl;
                } else {
                    seats[row-1][col-1] = 'R';
                    cout << "Seat (" << row << "-" << col << ") reserved successfully!" << endl;
                    cout << "\n--- UPDATED LAYOUT ---" << endl;
                    for (int i = 0; i < R; i++) {
                        for (int j = 0; j < C; j++) {
                            cout << "(" << (i+1) << "-" << (j+1) << " " << seats[i][j] << ") ";
                        }
                        cout << endl;
                    }
                }
                break;
            }
            
            case 3:
                cout << "Thank you for using Cinema Booking System!" << endl;
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
    } while (choice != 3);
    
    return 0;
}
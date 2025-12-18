#include <iostream>
using namespace std;

char puzzle[10][10];
void inputPuzzle() {
    cout << "Enter 10x10 puzzle (one row at a time, no spaces):\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> puzzle[i][j];
        }
    }
}
int countHorizontalWords() {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        int length = 0;
        for (int j = 0; j < 10; j++) {
            if (puzzle[i][j] != '.') {
                length++;
            } else {
                if (length >= 3) {
                    count++;
                }
                length = 0;
            }
        }
        if (length >= 3) {
            count++;
        }
    }
    return count;
}
int countVerticalWords() {
    int count = 0;
    for (int j = 0; j < 10; j++) {
        int length = 0;
        for (int i = 0; i < 10; i++) {
            if (puzzle[i][j] != '.') {
                length++;
            } else {
                if (length >= 3) {
                    count++;
                }
                length = 0;
            }
        }
        if (length >= 3) {
            count++;
        }
    }
    return count;
}
void findLongestWord() {
    int maxLength = 0;
    string longestWord = "";
    for (int i = 0; i < 10; i++) {
        string current = "";
        for (int j = 0; j < 10; j++) {
            if (puzzle[i][j] != '.') {
                current += puzzle[i][j];
            } else {
                if (current.length() > maxLength) {
                    maxLength = current.length();
                    longestWord = current;
                }
                current = "";
            }
        }
        if (current.length() > maxLength) {
            maxLength = current.length();
            longestWord = current;
        }
    }
    for (int j = 0; j < 10; j++) {
        string current = "";
        for (int i = 0; i < 10; i++) {
            if (puzzle[i][j] != '.') {
                current += puzzle[i][j];
            } else {
                if (current.length() > maxLength) {
                    maxLength = current.length();
                    longestWord = current;
                }
                current = "";
            }
        }
        if (current.length() > maxLength) {
            maxLength = current.length();
            longestWord = current;
        }
    }
    
    cout << "Longest word: " << longestWord << " (Length: " << maxLength << ")\n";
}
int main() {
    inputPuzzle();
    int horizontal = countHorizontalWords();
    int vertical = countVerticalWords();
    cout << "\n Puzzle Analysis \n";
    cout << "Horizontal words: " << horizontal << "\n";
    cout << "Vertical words: " << vertical << "\n";
    cout << "Total words: " << horizontal + vertical << "\n";
    findLongestWord();
    
    return 0;
}
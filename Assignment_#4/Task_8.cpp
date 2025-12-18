#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& v) {
    int start = 0;
    int end = v.size() - 1;
    while (start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    cout << "Traditional for loop: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << "\nRange-based for loop: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\nEnter how many numbers: ";
    int N;
    cin >> N;
    
    vector<int> userNumbers;
    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        userNumbers.push_back(num);
    }
    cout << "Your numbers: ";
    for (int num : userNumbers) {
        cout << num << " ";
    }
    if (userNumbers.size() > 0) {
        int max = userNumbers[0];
        int min = userNumbers[0];
        for (int num : userNumbers) {
            if (num > max) max = num;
            if (num < min) min = num;
        }
        cout << "\nMaximum: " << max;
        cout << "\nMinimum: " << min;
    }
    vector<int> reverseTest = {1, 2, 3, 4, 5};
    cout << "\n\nBefore reverse: ";
    for (int num : reverseTest) cout << num << " ";
    reverseVector(reverseTest); 
    cout << "\nAfter reverse: ";
    for (int num : reverseTest) cout << num << " ";
    vector<int> countVector = {1, 2, 3, 2, 4, 2, 5, 2};
    int target;
    cout << "\n\nEnter target number to count: ";
    cin >> target;
    int count = 0;
    for (int num : countVector) {
        if (num == target) {
            count++;
        }
    }
    cout << target << " appears " << count << " times.\n";
    
    return 0;
}

// all four problems solved individually and then driven them in a single program menue
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void removeEvenNumbers() {
    vector<int> numbers = {2, 5, 8, 11, 14, 17};
    vector<int> result;
    for (int x : numbers) {
        if (x % 2 != 0) {
            result.push_back(x);
        }
    }
    cout << "Odd numbers: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}
void findMissingElement() {
    vector<int> a = {4, 1, 3, 2};
    vector<int> b = {3, 1, 4};
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int missing = a.back();
    for (size_t i = 0; i < b.size(); i++) {
        if (a[i] != b[i]) {
            missing = a[i];
            break;
        }
    }
    cout << "Missing element: " << missing << endl;
}
void checkDuplicates() {
    vector<int> nums = {1, 2, 3, 4, 5};
    bool hasDuplicate = false;

    for (size_t i = 0; i < nums.size(); i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                hasDuplicate = true;
                break;
         }
         }
     }
    if (hasDuplicate)
        cout << "Duplicates found" << endl;
    else
        cout << "No duplicates" << endl;
}
void sumOfPairs() {
    vector<int> nums = {1, 5, 7, -1, 5};
    int target = 6;
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    int count = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            count++;
            left++;
            right--;
         } else if (sum < target) {
            left++;
        } else {
            right--;
        }
     }
        cout << "Number of pairs: " << count << endl;
  }

int main() {
    int choice;
    do {
        cout << "1. Remove Even Numbers\n";
        cout << "2. Find Missing Element\n";
        cout << "3. Check for Duplicates\n";
        cout << "4. Sum of Pairs\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                removeEvenNumbers();
                break;
            case 2:
                findMissingElement();
                break;
            case 3:
                checkDuplicates();
                break;
            case 4:
                sumOfPairs();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
          }
    } while (choice != 0);
    return 0;
}


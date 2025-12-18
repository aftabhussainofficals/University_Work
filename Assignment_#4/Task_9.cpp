#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Original vector: ";
    for (int num : nums1) cout << num << " ";
    vector<int> oddOnly;
    for (int num : nums1) {
        if (num % 2 != 0) {
            oddOnly.push_back(num);
        }
    }
    cout << "\nAfter removing evens: ";
    for (int num : oddOnly) cout << num << " ";
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 3, 4, 5}; 
    int sum1 = 0;
    for (int num : v1) sum1 += num;
    int sum2 = 0;
    for (int num : v2) sum2 += num;
    cout << "\n\nMissing element is: " << sum1 - sum2;
    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> v4 = {1, 2, 3, 2, 5};
    bool hasDuplicate = false;
    for (int i = 0; i < v3.size(); i++) {
        for (int j = i + 1; j < v3.size(); j++) {
            if (v3[i] == v3[j]) {
                hasDuplicate = true;
                break;
            }
        }
    }
    cout << "\n\nVector v3 has duplicates? " << (hasDuplicate ? "Yes" : "No");
    hasDuplicate = false;
    for (int i = 0; i < v4.size(); i++) {
        for (int j = i + 1; j < v4.size(); j++) {
            if (v4[i] == v4[j]) {
                hasDuplicate = true;
                break;
            }
        }
    }
    cout << "\nVector v4 has duplicates? " << (hasDuplicate ? "Yes" : "No");
    vector<int> v5 = {1, 5, 7, -1, 5, 8, 3};
    int target = 6;
    int countPairs = 0;
    cout << "\n\nVector for pair sum: ";
    for (int num : v5) cout << num << " ";
    cout << "\nTarget sum: " << target;
    for (int i = 0; i < v5.size(); i++) {
        for (int j = i + 1; j < v5.size(); j++) {
            if (v5[i] + v5[j] == target) {
                countPairs++;
            }
        }
    }
    cout << "\nNumber of pairs: " << countPairs;
    
    return 0;
}
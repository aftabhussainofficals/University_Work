#include<iostream>
using namespace std;

void reversearray(int arr[], int sz) {
    int start=0, end=sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int sz=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reversearray(arr, sz);
    return 0;
}
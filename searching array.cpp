#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int k) {
    for(int i=0; i<n; i++) {
        if(arr[i] == k) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cout<<"Enter Array Number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter searching element:";
    cin>>k;
    int index = linear_search(arr, n, k);
    if(index == -1) {
        cout<<"Element not found.";
    } else {
        cout<<"Element is found at index "<<index<<".";
    }
    return 0;
}

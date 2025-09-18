#include<iostream>
// For dynamic array handling
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid size" << endl;
        return 0;
    }

    vector<int> arr(n);
    if (n > 0) {
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    }

    // Optional: print the array back to confirm input
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << (i + 1 < n ? ' ' : '\n');
    }

    int target;
    cout << "Enter target element: ";
    if (!(cin >> target)) {
        cout << "Invalid target" << endl;
        return 0;
    }

    // Binary Search algorithm
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            cout << "Element found at index: " << mid << endl;
            break;
        } else if(arr[mid] < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if(start > end){
        cout << "Element not found" << endl;
    }


    // Explanation of binary search
    // start = 0, end = n-1 (start = 0th index, end = last index of array) -> (n-1 -> last index of array)
    // Loops runs until start <= end
    // mid = (start + end) / 2 -> mid is the middle index of the array
    // if arr[mid] == target -> element found at index mid
    // if arr[mid] < target -> search in the right half of the array (start = mid + 1)
    // if arr[mid] > target -> search in the left half of the array (end = mid - 1)
    // If start > end -> element not found

    return 0;
}
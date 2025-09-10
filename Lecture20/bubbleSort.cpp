#include<iostream>
using namespace std;
int main(){

    int n;

    // Taking size of array as input
    cout << "Enter the number of elements in array: ";
    cin >> n;

    // Created array of user input size
    int arr[n];

    // Taking input in array
    for(int i=0; i<n; i++){
        cout << "Enter element at "<<i<<": ";
        cin >> arr[i];
    }

    // Printing original array
    cout << "Original array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    // Bubble sort algorithm
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // Printing sorted array
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    // Approach for Bubble Sort
    // 1. Start from the first element of the array and compare it with the next element.
    // 2. If the first element is greater than the next element, swap them.
    // 3. Move to the next element and repeat the process until the end of the array is reached.
    // 4. After the first pass, the largest element will be at the end of the array.
    // 5. Repeat the process for the remaining elements until the entire array is sorted.

    // we did i=n-2 because after first pass largest element will be at the end so we don't need to compare it again
    // we did i>=0 because we need to compare till the first element
    // we run the outer loop from last to first because after each pass the largest element will be at the end so we can reduce the number of comparisons in each pass
    // we did j<=i because we need to compare till the ith element

    return 0;
}
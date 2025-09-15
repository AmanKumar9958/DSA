#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    // Taking array elements input
    for(int i=0; i<n; i++){
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    // Printing original array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    // Insertion sort algorithm
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            } else {
                break;
            }
        }
    }

    // Printing sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
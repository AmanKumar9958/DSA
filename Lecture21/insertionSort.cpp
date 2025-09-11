#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<=n; i++){
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }

    // Insertion sort algorithm
    

    return 0;
}
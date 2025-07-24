#include<iostream>
using namespace std;
int main(){
    // creating array..
    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5];

    // Taking input from user
    cout << "Enter 5 elements for the array: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    // Printing array elements using for loop
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
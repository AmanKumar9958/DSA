// This code reverses an array but consume more space than necessary
// It uses a temporary array to store the reversed elements
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements: " << endl;

    for(int i = 0; i < 5; i++){
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Your Array is: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int temp[5];    // temporary array for reversal
    int i = 4, j = 0;
    while(i >= 0){
        temp[j] = arr[i];
        j++;
        i--;
    }

    cout << "Reversed Array is: ";
    for(int k = 0; k < 5; k++){
        cout << temp[k] << " ";
    }
    cout << endl;

    return 0;
}
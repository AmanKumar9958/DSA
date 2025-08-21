// Reverse an array

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;

    // print original array
    cout << "Original array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // print the reversed array
    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
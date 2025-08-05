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

    int start = 0;
    int end = 5 - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array is: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
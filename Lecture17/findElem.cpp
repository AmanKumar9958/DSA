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

    int x;
    cout << "Enter the element to find: ";
    cin >> x;

    int index = -1;

    for(int i = 0; i < 5; i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }

    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }


    return 0;
}
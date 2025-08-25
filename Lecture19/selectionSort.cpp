#include<iostream>
using namespace std;
int main(){

    int arr[7] = {3, 4, 1, 2, 5, 7, 6};

    cout << "Original array: ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 7; i++){
        int index = i;
        for(int j = i+1; j < 7; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    cout << "Sorted array: ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
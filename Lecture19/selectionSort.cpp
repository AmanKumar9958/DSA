#include<iostream>
using namespace std;
int main(){
    // int arr[7] = {3, 4, 1, 2, 7, 6, 5};

    // taking array through user input
    int arr[1000];
    cout<<"Enter the size of array: ";
    int arraySize;
    cin>>arraySize;
    for(int i=0; i<arraySize; i++){
        cout<<"Enter element at "<<i<<": ";
        cin>>arr[i];
    }

    // Printing original array
    cout<<"Original Array: ";
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    };

    cout<<endl;

    // Sorting array
    for(int i=0; i<7; i++){
        int index = i;
        for(int j=i+1; j<7; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }

    // Printing sorted array
    cout<<"Sorted Array: ";
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}
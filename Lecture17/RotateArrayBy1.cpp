// We have to rotate the given array by 1
#include<iostream>
using namespace std;
int main(){
    int n = 7;  // total number of elements

    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; //crated array

    cout<<"Original Array: ";

    // Printing original array
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Rotating array by 1
    int temp = arr[n-1];
    
    for(int i = n-2; i >= 0; i--){
        arr[i+1] = arr[i];          // value shifting
        // arr[i] = arr[i+1];       // doubt
    }
    arr[0] =  temp;

    cout<<"Rotated Array: ";

    // Printing rotated array
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
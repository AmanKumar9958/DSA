// We have to rotate the given array by 2
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

    // Rotating array by 2
    int temp = arr[n-1];    // storing last element
    int tempS = arr[n-2];    // storing second last element
    
    for(int i = n-3; i >= 0; i--){
        arr[i+2] = arr[i];  // value shifting
    }
    arr[1] =  temp;
    arr[0] =  tempS;

    cout<<"Rotated Array: ";

    // Printing rotated array
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
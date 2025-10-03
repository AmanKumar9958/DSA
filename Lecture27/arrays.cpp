#include<iostream>
using namespace std;
int main(){
    // creating array
    int arr[5];

    // taking user input in the array
    cout<<"Enter 1st array 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<endl;

    // crating arrays with values
    int num[5]={1, 2, 3, 4};

    // printing array
    cout<<"Printing 2nd array: ";
    for(int i=0; i<4; i++){
        cout<<num[i];
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of array: ";
    cin>>sizeOfArray;

    int arr[sizeOfArray];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }

    int start=0;
    int end=sizeOfArray-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            cout<<"Peak element is: "<<arr[mid]<<endl;
            break;
        } else if(arr[mid] < arr[mid+1]){
            // Right side move
            start=mid+1;
        } else{
            // Left side move
            end=mid-1;
        }
    }


    return 0;
}
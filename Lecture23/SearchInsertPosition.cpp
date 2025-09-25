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

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    int start=0;
    int end=sizeOfArray-1;
    int mid;
    int index=sizeOfArray;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid] == target){
            index=mid;
            break;
        } else if(arr[mid] < target){
            start=mid+1;
        } else{
            index=mid;
            end=mid-1;
        }
    }

    cout<<"The index of target element is: "<<index<<endl;

    return 0;
}
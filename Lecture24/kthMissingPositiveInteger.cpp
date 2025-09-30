#include<iostream>
using namespace std;
int main(){

    int sizeOfArray;
    cout<<"Enter the size of the array: ";
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    
    cout<<"Enter the elements of array: ";
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number of missing element: ";
    cin>>target;


    int ans = sizeOfArray;
    int mid, start=0, end=sizeOfArray-1;

    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]-mid-1 >= target){
            ans=mid;
            end=mid-1;
        } else{
            start=mid+1;
        }
    }

    cout<<"Missing element at "<<target<<" is "<<ans+target<<endl;

    return 0;
}
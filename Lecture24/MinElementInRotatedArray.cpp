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

    int ans=arr[0];
    int start=0;
    int end=sizeOfArray-1;
    int mid;

    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]){
            // Left side is sorted and finding in right side
            start=mid+1;
        } else{
            ans=arr[mid];
            // Right side is sorted and finding in left side
            end=mid-1;
        }
    }
    cout<<"Minimum element is: "<<ans<<endl;


    return 0;
}
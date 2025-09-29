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
    cout<<"Enter the target element: ";
    cin>>target;

    int ans = -1;
    int start = 0, end = sizeOfArray-1, mid;

    while(start<=end){
        mid=start + (end-start)/2;
        if(arr[mid] == target){
            cout<<"Element found at index "<<mid<<endl;
            break;
        } else if(arr[mid] >= arr[0]){
            if(arr[start] <= target && arr[mid] > target){
                end=mid-1;
            } else{
                start=mid+1;
            }
        } else{
            if(arr[mid] <= target && arr[end] > target){
                start=mid+1;
            } else{
                end=mid-1;
            }
        }
    }
    return 0;
}
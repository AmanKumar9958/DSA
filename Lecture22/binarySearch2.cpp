// array input = 4, 16, 20, 28, 30; target 16
// array input = 30, 28, 20, 16, 4; target 28

#include<iostream>
using namespace std;
int main(){
    
    int arr[100];
    int arraySize;
    cout<<"Enter the size of array: ";
    cin>>arraySize;
    
    cout<<"Enter the elements of array: ";
    for(int i=0; i<arraySize; i++){
        cin>>arr[i];
    }
    
    // Printing the array
    cout<<"The elements of array are: ";
    for(int i=0; i<arraySize; i++){
        cout<<arr[i]<<" ";
    }

    int target;
    cout<<"\nEnter the target element: ";
    cin>>target;
    
    
    // Binary Search
    int start = 0;
    int end = arraySize - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cout<<"Element found at index: "<<mid<<endl;
            break;
        } else if(arr[mid] < target){   // for descending order array change < to >
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if(start > end){
        cout<<"Element not found in the array"<<endl;
    }

    return 0;
}
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

#include<iostream>
using namespace std;
int main(){

    // taking size of array from user
    int sizeOfArray;
    cout<<"Enter the size of array: ";
    cin>>sizeOfArray;

    // creating user defined array size
    int arr[sizeOfArray];

    // taking array elements from user
    cout<<"Enter the elements of array: ";
    for(int i=0; i<sizeOfArray; i++){ 
        cin>>arr[i];
    }

    // taking target element from user for searching its first and last occurrence
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    // creating variables to store first and last occurrence of target element
    int firstOccurrence = -1;
    int lastOccurrence = -1;

    // Finding first occurrence of target element using binary search
    int startingIndex = 0;
    int endingIndex = sizeOfArray - 1;

    // binary search for first occurrence
    while(startingIndex <= endingIndex){
        int mid = startingIndex + (endingIndex - startingIndex) / 2;
        if(arr[mid] == target){
            firstOccurrence = mid; // update first occurrence
            endingIndex = mid - 1; // continue searching in the left half
        } else if(arr[mid] < target){
            startingIndex = mid + 1;
        } else {
            endingIndex = mid - 1;
        }
    }

    // Resetting the indices to search for last occurrence
    startingIndex = 0;
    endingIndex = sizeOfArray - 1;

    // binary search for last occurrence
    while(startingIndex <= endingIndex){
        int mid = startingIndex + (endingIndex - startingIndex) / 2;
        if(arr[mid] == target){
            lastOccurrence = mid;   // update last occurrence
            startingIndex = mid + 1; // continue searching in the right half
        } else if(arr[mid] < target){
            startingIndex = mid + 1;
        } else {
            endingIndex = mid - 1;
        }
    }

    cout<<"Elements found at indices: ";
    int arrOfIndices[2] = {firstOccurrence, lastOccurrence};
    for(int i=0; i<2; i++){
        cout<<arrOfIndices[i]<<" ";
    }

    return 0;
}
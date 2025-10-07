#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int sizeOfArray;
    cout<<"Enter the size of the array: ";
    cin>>sizeOfArray;

    vector<int> arr(sizeOfArray);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end()); // Sorting the array to use two-pointer technique

    int target;
    cout<<"Enter the sum target: ";
    cin>>target;

    int start = 0;
    int end = sizeOfArray - 1;

    while(start < end){
        if(arr[start] + arr[end] == target){
            cout<<"Pair found: ("<<arr[start]<<", "<<arr[end]<<")"<<endl;
            start++;
            end--;
        } else if(arr[start] + arr[end] > target){
            end--;  // if sum is greater, move the end pointer to the left
        } else {
            start++;    // if sum is smaller, move the start pointer to the right
        }
    }

    return 0;
}
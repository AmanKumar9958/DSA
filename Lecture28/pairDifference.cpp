#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int sizeOfArray;
    cout<<"Enter the size of array: ";
    cin>>sizeOfArray;

    vector<int> arr(sizeOfArray);

    cout<<"Enter the elements of array: ";
    for(int i=0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the difference target: ";
    cin>>target;

    int start = 0;
    int end = 1;

    while(end < sizeOfArray){
        if(start != end){
            if(arr[end] - arr[start] == target){
                cout<<"Pair found: "<<arr[start]<<" and "<<arr[end]<<endl;
                start++;
                end++;
            } else if(arr[end] - arr[start] < target){
                end++;    // if difference is smaller, move the end pointer to the right
            } else {
                start++;  // if difference is greater, move the start pointer to the right
            }
        }
    }

    return 0;
}
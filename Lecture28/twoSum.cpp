#include<iostream>
#include<vector>
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

    int target;
    cout<<"Enter the sum target: ";
    cin>>target;

    int start = 0;
    int end = sizeOfArray - 1;

    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            cout<<"Pair found: ("<<arr[start]<<", "<<arr[end]<<")"<<endl;
            start++;
            end--;
        } else if(sum < target){
            start++;
        } else {
            end--;
        }
    }

    return 0;
}
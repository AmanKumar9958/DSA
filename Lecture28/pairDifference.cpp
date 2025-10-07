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

    




    return 0;
}
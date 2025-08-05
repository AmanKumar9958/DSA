#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements: " << endl;

    for(int i = 0; i < 5; i++){
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Your Array is: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int ans = INT8_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }

    int secondMax = INT8_MIN;
    for(int i = 0; i < 5; i++){
        if(arr[i] != ans){
            secondMax = max(secondMax, arr[i]);
        }
    }

    cout << "The maximum element is: " << ans << endl;
    cout << "The second maximum element is: " << secondMax << endl;

    return 0;
}
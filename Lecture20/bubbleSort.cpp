#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter element at "<<i;
        cin >> arr[i];
    }

    for(int i=0; i<=n; i++){
        cout << arr[i];
    }



    return 0;
}
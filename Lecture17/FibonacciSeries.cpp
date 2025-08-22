// We have to find the nth element in fibonacci series: 0, 1, 1, 2, 3, 5. 8 (Starts with 0 and 1 and then 3rd element is SUM of previous two elements)
#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number to find: ";
    cin>>num;

    int ans = 0;

    int arr[100];   // assuming no elements more than 100

    arr[0] = 0; // fixed
    arr[1] = 1; // fixed

    for(int i = 2; i <= num - 1; i++){
        ans = arr[i] = arr[i-1] + arr[i-2];
    }

    cout<<"Element at "<<num<<" is: "<<ans;

    return 0;
}
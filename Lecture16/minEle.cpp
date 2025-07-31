#include<iostream>
#include <string>
using namespace std;
int main(){
    int arr[5];

    // cout<<"Enter the elements of the array: "<<endl;

    // for(int i = 0; i < 5; i++){
    //     cout<<"Enter the element at index: "<<arr[i];
    //     cin>>arr[i];
    // }

    // cout<<"Array elements are: "<<endl;
    // for(int i = 0; i < 5; i++){
    //     cout<<arr[i];
    // }

    // int ans = INT8_MAX;

    // for(int i = 0; i < 5; i++){
    //     if(arr[i] < ans){
    //         ans = arr[i];
    //     }
    // }

    // cout<<"Minimum element of the array: "<<ans<<endl;


    int a = 5;
    float b = 5.6;
    double c = 7.8;
    string name = "Aman Kumar";
    int num[5] = {1, 2, 3, 4, 5};
    char letter[5] = {'a', 'b', 'c', 'd', 'e'};
    string name[4] = {"Aman", "Gopal", "Om", "Kartik"};

    // cout<<"int: "<<sizeof(a)<<endl; // 4
    // cout<<"float: "<<sizeof(b)<<endl;   // 4
    // cout<<"double: "<<sizeof(c)<<endl;  // 8
    // cout<<"string: "<<sizeof(name)<<endl;   // 24
    cout<<"Int array: "<<sizeof(num)<<endl;
    cout<<"Char array: "<<sizeof(letter)<<endl;
    cout<<"String array: "<<sizeof(name)<<endl;

    return 0;
}
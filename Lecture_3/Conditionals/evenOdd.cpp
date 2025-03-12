#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to check: ",
    cin>>num;

    if(num % 2 == 0){
        cout<<"Even Number";
    } else{
        cout<<"Odd Number";
    }
    return 0;
}
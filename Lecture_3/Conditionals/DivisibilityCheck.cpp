#include<iostream>
using namespace std;
int main(){
    cout<<"--Divisible by 5 and 11 both--"<<endl;
    int num;
    cout<<"Enter the number to check: ";
    cin>>num;

    if(num % 5 == 0 && num % 11 == 0){
        cout<<"Divisible by both 5 and 11";
    } else if(num % 5 == 0){
        cout<<"Only divisible by 5";
    } else if(num % 11 == 0){
        cout<<"Only divisible by 11";
    } else{
        cout<<"Not divisible by both 5 and 11";
    }
    return 0;
}
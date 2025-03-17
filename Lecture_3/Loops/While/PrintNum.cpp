#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int lastNum;
    cout<<"Enter the last number to print: ";
    cin>>lastNum;
    while(a <= lastNum){
        cout<<"Value of a: "<<a<<endl;
        a++;
    }
    return 0;
}
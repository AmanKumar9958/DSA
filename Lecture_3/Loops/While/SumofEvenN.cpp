#include<iostream>
using namespace std;
int main(){
    int lastDigit;
    cout<<"Enter the last digit: ";
    cin>>lastDigit;

    int i = 0;
    int sum = 0;

    while(i <= lastDigit){
        if(i % 2 == 0){
            sum += i;
            cout<<i<<" ";
        }
        i++;
    }

    cout<<"\nSum of even numbers: "<<sum;

    return 0;
}
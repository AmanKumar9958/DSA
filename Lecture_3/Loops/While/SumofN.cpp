#include<iostream>
using namespace std;
int main(){
    int lastNum;
    cout<<"Enter the last number: ";
    cin>>lastNum;

    int i = 0;
    int sum = 0;

    while(i <= lastNum){
        sum += i;
        cout<<i<<"+";
        i++;
    }
    cout<<"\nTotal Sum: "<<sum<<endl;
    return 0;
}
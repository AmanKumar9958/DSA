#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num < 2){
        return false;
    } else{
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    cout<<"--Check Prime Number--"<<endl;
    int num;
    cout<<"Enter number to check: ",
    cin>>num;

    if(isPrime(num)){
        cout<<num<<" is a Prime number";
    } else{
        cout<<num<<" is NOT a Prime number";
    }
    return 0;
}
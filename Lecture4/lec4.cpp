#include<iostream>
using namespace std;
int main(){
    // int age = 0;

    // cout<<"Enter your age: ";
    // cin>>age;

    // if(age < 18){
    //     cout<<"You are children";
    // } else if(age == 18){
    //     cout<<"You are about to adult";
    // } else{
    //     cout<<"You are adult";
    // }

    // // type-casting
    // float a = 2;
    // int b = int(a);

    // printing weekdays..
    int weekNum = 0;

    cout<<"Enter the week number: ";
    cin>>weekNum;

    if(weekNum == 1){
        cout<<"Monday";
    } else if(weekNum == 2){
        cout<<"Tuesday";
    } else if(weekNum == 3){
        cout<<"Wednesday";
    } else if(weekNum == 4){
        cout<<"Thursday";
    } else if(weekNum == 5){
        cout<<"Friday";
    } else if(weekNum == 6){
        cout<<"Saturday";
    } else if(weekNum == 7){
        cout<<"Sunday";
    } else{
        cout<<"Wrong Input";
    }

    return 0;
}
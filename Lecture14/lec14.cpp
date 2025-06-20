#include<iostream>
using namespace std;

// function to print a message
// void printMessage(string msg){
//     cout << msg << endl;
// }

// function to calculate cube of a number
void cube(int n){
    cout << "Cube of " << n << ": "<< n * n * n << endl;
}

int main(){
    // printing printMessage 5 times
    // for(int i = 0; i < 5; i++){
    //     printMessage("Hello, World!");
    // }

    // printing cube from 1 to 5
    for(int i = 1; i <= 5; i++){
        cube(i);
    }


    return 0;
}
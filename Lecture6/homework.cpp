#include<iostream>
using namespace std;
int main(){
    // printing cube with row*column..
    for(int r = 1; r <= 5; r++){
        for(int c = 1; c <= 5; c++){
            cout << c*c*c << " ";
        }
        cout << endl;
    }
    return 0;
}
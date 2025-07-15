#include<iostream>
using namespace std;
int main(){
    // char ch = 'a';
    // cout << "ASCII value: " << int(ch) << endl;     // 97

    char ch;
    cout<<"Enter the single small character (a, b, c, d..): ";
    cin >> ch;

    cout<<"ASCII value of the character: (a, b, c, d..): "<< ch << " => " << int(ch) << endl;

    cout << "ASCII value of corresponding character (A, B, C, D..): " << int(ch - 32) << " => " << char(ch - 32) << endl;

    return 0;
}
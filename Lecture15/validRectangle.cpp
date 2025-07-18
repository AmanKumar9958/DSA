// you will be given 4 numbers and you have to check if they can form a rectangle or not
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cout << "===Enter four sides==="<<endl;
    cout <<"a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    cout << "d: ";
    cin >> d;

    if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)){
        cout << "Yes, these sides can form a rectangle." << endl;
    } else {
        cout << "No, these sides cannot form a rectangle." << endl;
    }

    return 0;
}
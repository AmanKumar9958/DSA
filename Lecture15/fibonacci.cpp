#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << "Fibonacci Series: " << a << " " << b << " ";

    for(int i = 2; i < n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
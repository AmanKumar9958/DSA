// Find the number of trailing zeroes in a factorial of number
// example: 5! = 120 has 1 trailing zero
// 10! = 3628800 has 2 trailing zeroes

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number you want to find the trailing 0s: ";
    cin >> n;

    // calculating the factorial of n
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;

    // calculating the number of trailing zeroes in n!
    int count = 0;
    while(n >= 5){
        count += n / 5;
        n /= 5;
    }

    cout << "The number of trailing zeroes in the factorial is: " << count << endl;


    return 0;
}
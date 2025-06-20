#include<iostream>
#include <math.h>
using namespace std;

// function to calculate the number of digits in a number
int digits(int n){
    int count = 0;
    while (n > 0){
        count++;
        n /= 10; // Remove the last digit
    }
    return count; // Return the count of digits
}

// function to check if a number is an Armstrong number
bool Armstrong(int n, int digits){
    int num = n, ans = 0, rem;

    while(num > 0){
        rem = num % 10; // Get the last digit
        ans += pow(rem, digits); // Raise the digit to the power of the number of digits
        num /= 10; // Remove the last digit
    }

    if(ans == n){
        return true; // The number is an Armstrong number
    } else {
        return false; // The number is not an Armstrong number
    }
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // function to calculate the number of digits
    int d = digits(n);

    // function to check if the number is an Armstrong number
    if (Armstrong(n, d)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
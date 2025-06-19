#include<iostream>
using namespace std;
int main(){
    int n = 343;
    while(n > 9){
        int ans = 0;
        int rem;
        while(n != 0){
            rem = n % 10; // Get the last digit
            ans += rem;   // Add it to the answer
            n /= 10;      // Remove the last digit
        }
        n = ans; // Update n with the sum of digits
    }
    cout << "The sum of digits is: " << n << endl;

    return 0;
}
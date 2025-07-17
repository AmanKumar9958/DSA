#include<iostream>
using namespace std;
#include<cmath> // For pow function

// count digit function
int countDigits(int num){
    if(num == 0) return 1; // Special case for 0
    int count = 0;
    while (num != 0){
        count++;    // Increment count for each digit
        num /= 10; // Remove the last digit
    }
    return count;
}

// Armstrong number check function
bool ArmstrongCheck(int num, int totalDigits){
    int originalNum = num;
    int ans = 0;
    while(originalNum){
        int rem = originalNum % 10; // Get the last digit
        originalNum /= 10; // Remove the last digit
        ans += pow(rem, totalDigits); // Add the power of the digit to ans
    }
    if(ans == num){
        return true; // The number is an Armstrong number
    } else {
        return false; // The number is not an Armstrong number
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int totalDigits = countDigits(num);
    cout << "Total number of digits in " << num << " is: " << totalDigits << endl;

    if(ArmstrongCheck(num, totalDigits)){
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
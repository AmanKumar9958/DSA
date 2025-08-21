// Find missing number in an array

#include<iostream>
using namespace std;
int main(){

    int num = 6;    // given number
    int array[5] = {1, 4, 2, 5, 6};    // incomplete array


    // Array Sum
    int arraySum = 0;
    for(int i = 0; i < 5; i++){
        arraySum += array[i];
    }

    cout<<"Sum of array elements: "<<arraySum<<endl;

    // Number sum
    int numSum = num*(num+1)/2;

    cout<<"Sum of num elements: "<<numSum<<endl;

    // ans
    int ans = numSum - arraySum;

    cout<<"Missing Number from the array: "<<ans<<endl;

    return 0;
}
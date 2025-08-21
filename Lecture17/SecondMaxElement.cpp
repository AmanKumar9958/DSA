// Find 2nd maximum element in an array

#include<iostream>
using namespace std;
int main(){
    int array[5] = {1, 2, 3, 4, 5};

    int biggestNum = INT16_MIN;     // They are the smallest number
    int secondBiggestNum = INT16_MIN;       // They are the smallest number

    // finding biggest element
    for(int i = 0; i < 5; i++){
        if(array[i] > biggestNum){
            biggestNum = array[i];
        }
    }

    cout<< "Biggest Element: "<<biggestNum<<endl;

    // finding 2nd biggest element
    for(int i = 0; i < 5; i++){
        if(biggestNum != array[i]){
            secondBiggestNum = max(array[i], secondBiggestNum);
        }
    }

    cout<< "2nd Biggest Element: "<<secondBiggestNum<<endl;


    return 0;
}
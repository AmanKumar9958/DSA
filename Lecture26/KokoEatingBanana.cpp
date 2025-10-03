#include<iostream>
using namespace std;
int main(){

    int numberOfPlates;
    cout<<"Enter the number of plates: ";
    cin>>numberOfPlates;

    int arr[numberOfPlates];

    cout<<"Enter bananas in each plate: ";
    for(int i=0; i<numberOfPlates; i++){
        cin>>arr[i];
    }

    int maxHour;
    cout<<"Enter maximum hours in which Koko will eat: ";
    cin>>maxHour;

    int start=1, end=maxHour, ans, mid;

    while(start<=end){
        mid=start+(end-start)/2;

        int platesCounter=0; 



    }




    return 0;
}
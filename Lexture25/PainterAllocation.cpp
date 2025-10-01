// Allocate number of painters to paint the walls in which way so the painting time is minimum and wall allocation must be contiguous. 


#include<iostream>
using namespace std;
int main(){

    int numberOfWalls;
    cout<<"Enter the number of walls: ";
    cin>>numberOfWalls;

    int arr[numberOfWalls];

    cout<<"Enter the length of each walls: ";
    for(int i=0; i<numberOfWalls; i++){
        cin>>arr[i];
    }

    int numberOfPainters;
    cout<<"Enter the number of painters: ";
    cin>>numberOfPainters;

    int start=0, end=numberOfWalls-1, ans, mid;

    // Finding maximum value and adding elements of the array
    for(int i=0; i<numberOfWalls; i++){
        start=max(start, arr[i]);
        end+=arr[i];
    }

    while(start<=end){
        mid=start+(end-start)/2;
        int minutes=0, painterCounter=0;

        // For keeping track of painters
        for(int i=0; i<numberOfWalls; i++){
            minutes+=arr[i];
            if(minutes>mid){
                painterCounter++;
                minutes=arr[i];
            }
        }

        if(painterCounter < numberOfPainters){
            ans=mid;
            end=mid-1;
        } else{
            start=mid+1;
        }
    }

    cout<<"Minimum number of time in which painter can paint the wall: "<<ans<<endl;

    return 0;
}
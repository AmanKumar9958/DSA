#include<iostream>
using namespace std;
int main(){
    int numberOfStalls;
    cout<<"Enter the number of stalls: ";
    cin>>numberOfStalls;

    int arr[numberOfStalls];

    cout<<"Enter the position of each stalls: ";
    for(int i=0; i<numberOfStalls; i++){
        cin>>arr[i];
    }

    int numberOfCows;
    cout<<"Enter the number of cows: ";
    cin>>numberOfCows;

    int start=0;    // starting
    int end=arr[numberOfStalls-1];  // ending
    int mid, ans;

    while(start<=end){
        mid=start+(end-start)/2;

        int cowsCounter=1, position=arr[0];

        // placing cows in the stalls
        for(int i=1; i<numberOfStalls; i++){    // 1 cow is already placed at arr[0]
            if(position+mid<=arr[i]){
                cowsCounter++;
                position=arr[i];
            }
        }

        if(cowsCounter<numberOfCows){   // required 6 but placed less than 6 then decrease the distance
            end=mid-1;
        } else{
            ans=mid;
            start=mid+1;    // required 6 but placed more than 6 then increase the distance
        }
    }

    cout<<"Maximum distance b/w two cows should be: "<<ans<<endl;

    return 0;
}
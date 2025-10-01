// We have find the minimum weight of the ship required to ship the packages in the give days

#include<iostream>
using namespace std;
int main(){

    int numberOfPackages;
    cout<<"Enter the number of packages: ";
    cin>>numberOfPackages;

    int arr[numberOfPackages];

    cout<<"Enter the weight of each package: ";
    for(int i=0; i<numberOfPackages; i++){
        cin>>arr[i];
    }

    int numberOfDays;
    cout<<"Enter the number of days in which packages will be sent: ";
    cin>>numberOfDays;

    int start=0, end=numberOfPackages-1, ans, mid;

    // Finding maximum value and adding elements of the array
    for(int i=0; i<numberOfPackages; i++){
        start=max(start, arr[i]);
        end+=arr[i];
    }

    while(start<=end){
        mid=start+(end-start)/2;

        // for keeping track of days
        int weight=0, daysCounter=0;
        for(int i=0; i<numberOfPackages; i++){
            weight+=arr[i];
            if(weight>mid){
                daysCounter++;
                weight=arr[i];
            }
        }

        if(daysCounter < numberOfDays){
            ans=mid;
            end=mid-1;
        } else{
            start=mid+1;
        }
    }

    cout<<"The minimum weight of the ship will be: "<<ans<<endl;
    return 0;
}
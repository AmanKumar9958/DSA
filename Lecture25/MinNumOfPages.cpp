#include<iostream>
using namespace std;
int main(){

    int numberOfBooks;
    cout<<"Enter the number of books: ";
    cin>>numberOfBooks;

    int arr[numberOfBooks];
    cout<<"Enter the number of pages for each books: ";
    for(int i=0; i<numberOfBooks; i++){
        cin>>arr[i];
    }

    int numberOfStudents;
    cout<<"Enter the number of students in which books will be distributed: ";
    cin>>numberOfStudents;

    int start=0, end=0, mid, ans;

    // Adding maximum value to start and sum of elements in end
    for(int i=0; i<numberOfBooks; i++){
        start=max(start, arr[i]);
        end+=arr[i];
    }

    while(start<=end){
        mid = start+(end-start)/2;
        int pages=0, studentCounter=1;

        for(int i=0; i<numberOfBooks; i++){
            pages+=arr[i];
            if(pages>mid){
                studentCounter++;
                pages=arr[i];
            }
        }

        if(studentCounter <= numberOfStudents){
            ans=mid;
            end=mid-1;
        } else{
            start=mid+1;
        }

    }
    cout<<"Minimum number of pages every student can get: "<<ans<<endl;

    return 0;
}
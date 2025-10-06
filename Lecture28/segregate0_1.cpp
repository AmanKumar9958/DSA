#include<iostream>
using namespace std;
int main(){

    int arr[] = {0,1,0,1,1,0,0,1,1,0};

    cout<<"Before Segregation: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // time complexity is O(n), but not an optimal solution
    // int count0 = 0;
    // int count1 = 0;

    // for(int i=0; i<10; i++){
    //     if(arr[i] == 0){
    //         count0++;
    //     } else {
    //         count1++;
    //     }
    // }

    // for(int i=0; i<count0; i++){
    //     arr[i] = 0;
    // }

    // for(int i=count0; i<10; i++){
    //     arr[i] = 1;
    // }

    // cout<<"After Segregation: ";
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // optimal solution using two pointer approach
    // We will maintain two pointers, one at the start and one at the end
    // in this case we have to segregate 0s and 1s
    // so we will move the end pointer towards the start if our start pointer and end pointer are same exapmle 0 and 0 or 1 and 1
    // if start and end pointer are different then we will swap them and move the start pointer forward (towards right) and end pointer backward (towards left)
    // if start pointer is 0 and end pointer is 1 then we will move the start pointer forward (towards right)
    // we will end the loop when start pointer is greater than end pointer

    int start = 0;
    int end = 9;

    while(start <= end){
        if(arr[start] == 0){    // if start=0 just increase the start counter
            start++;
        } else{
            if(arr[end] == 0){  // if start != 0 then check if end=0, if yes then swap and move both pointer
                swap(arr[start], arr[end]);
                start++, end--;
            } else{
                end--;  // if both are 1 then just move the end pointer
            }
        }
    }

    cout<<"After segregation: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
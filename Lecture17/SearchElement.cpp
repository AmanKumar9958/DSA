// We have to search and return the index of the element in the given array

#include<iostream>
using namespace std;
int main(){
    int array[5] = {88, 44, 56, 22, 75};
    int index = -1;      // assuming element is not present
    int element = 22;    // to find

    for(int i = 0; i < 5; i++){
        if(array[i] == element){
            index = i;
        }
    }
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
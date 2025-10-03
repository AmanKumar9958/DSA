#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    // creating static vector
    vector <int> arr1[5];

    // crating static vector with values
    vector <int> arr2 = {1, 2, 3, 4, 5};

    // taking vector size from user
    int vectorSize;
    cout<<"Enter the size of vector: ";
    cin>>vectorSize;
    
    // creating dynamic vectors;
    vector <int> VecArr(vectorSize);

    // taking user input in the vector array
    cout<<"Enter the elements of vector array: ";
    for(int i=0; i<VecArr.size(); i++){
        cin>>VecArr[i];
    }

    // printing vector array
    // cout<<"Printing vector array: "<<endl;
    // for(int i=0; i<VecArr.size(); i++){
    //     cout<<VecArr[i]<<" ";
    // }

    // cout<<"Size of vector array: "<<VecArr.size()<<endl;
    // cout<<"Capacity of vector array: "<<VecArr.capacity()<<endl;

    // sorting in decreasing order
    sort(VecArr.begin(), VecArr.end(), greater<int>());
    cout<<"Sorting array in decreasing order: ";
    for(int i=0; i<VecArr.size(); i++){
        cout<<VecArr[i]<<" ";
    }
    cout<<endl;

    // sorting in increasing order
    sort(VecArr.begin(), VecArr.end());
    cout<<"Sorting array in increasing order: ";
    for(int i=0; i<VecArr.size(); i++){
        cout<<VecArr[i]<<" ";
    }
    cout<<endl;

    // searching an element in vector array, but return true or false
    cout<<binary_search(VecArr.begin(), VecArr.end(), 3)<<endl;     // returns 1 if found otherwise 0

    // searching an element in vector array, but return the address of that element
    // find(VecArr.begin(), VecArr.end(), 3) this gives only the address of that element but the exact index is not known
    // so to get the index we do the following extra: -VecArr.begin()
    cout<<find(VecArr.begin(), VecArr.end(), 3)-VecArr.begin()<<endl;   // returns index of that element

    // Maximum element in vector array
    // we are using * because max_element returns the address of that element not the element itself
    // if we don't use * then it will print the address of that element
    cout<<"Maximum element in vector array: "<<*max_element(VecArr.begin(), VecArr.end())<<endl;

    // Minimum element in vector array
    cout<<"Minimum element in vector array: "<<*min_element(VecArr.begin(), VecArr.end())<<endl;


    return 0;
}
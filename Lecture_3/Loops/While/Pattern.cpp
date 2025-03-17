#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the no: of rows: ";
    cin>>row;

    int i = 1;

    while(i <= row){
        int col = 1;
        while(col <= row){
            cout<<"* ";
            col++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
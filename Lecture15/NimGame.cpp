#include<iostream>
using namespace std;
int main(){
    int num;

    cout << "Enter the total number of piles: ";
    cin >> num;

    // assuming you started the game..

    if(num % 4 != 0){
        cout << "You can win the game!" << endl;
    } else {
        cout << "You cannot win the game." << endl;
    }



    return 0;
}
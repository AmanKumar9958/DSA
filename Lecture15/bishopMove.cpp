#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    // you will be give two number x and y that represent the position of a bishop on a chessboard and then you have to find the total number of steps he can take in total diagonally.
    int x, y;
    cout << "Enter the position of the bishop x: ";
    cin >> x;

    cout << "Enter the position of the bishop y: ";
    cin >> y;

    cout<< "Position of the bishop is: (" << x << ", " << y << ")" << endl;

    // A bishop can move diagonally in all four directions.

    int steps = 0;
    // Top-left diagonal: (1,1)
    // Top-right diagonal: (1, 8)
    // Bottom-left diagonal: (8, 1)
    // Bottom-right diagonal: (8, 8)
    // The maximum steps a bishop can take in each direction is limited by the edges of the chessboard (1 to 8).

    steps += min(x - 1, y - 1); // Top-left diagonal
    steps += min(x - 1, 8 - y); // Top-right diagonal
    steps += min(8 - x, y - 1); // Bottom-left diagonal
    steps += min(8 - x, 8 - y); // Bottom-right diagonal

    cout << "Total number of steps the bishop can take: " << steps << endl;

    return 0;
}
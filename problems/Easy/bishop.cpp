//Given the position of a Bishop (A, B) on an 8 * 8 chessboard.

//Your task is to count the total number of squares that can be visited by the Bishop in one move.

//The position of the Bishop is denoted using row and column number of the chessboard.

// Bishop can walk diagonally whatever or wherever he take steps if he takes direction to the left upward he will end up at first column or first row
// if he takes direction to left upward he will end up at first row or last column
//if he takes down to right he will end up at last row or last column
// if he takes down to left he will end up at last row or first column
// last col = 8 , last row = 8 
// the position of bishop is (A, B) at anywhere on board.
//if he ends up at last row or last column we can count steps using formula min(8-A, 8-B) and add it to total
//if he ends up at first row or first column we can count steps using formula min(A-1, B-1) and add it to total
//if he ends up at first row or last column we can count steps using formula min(A-1, 8-B) and add it to total
// if he ends up at last row or first column we can count steps using formula min(8-A, B-1) and add it to total
#include<bits/stdc++.h>
using namespace std;

int bishmap(int A, int B){

    int total = 0;

    total += min(8-A, 8-B);
    total += min(A-1, B-1);
    total += min(A-1, 8-B);
    total += min(8-A, B-1);

    return total;


}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<"the maximum steps :" <<bishmap(a,b)<<"\n";

    return 0;
}
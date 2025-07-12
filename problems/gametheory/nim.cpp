// // // You are playing the following Nim Game with your friend:

// // // Initially, there is a heap of stones on the table.
// // // You and your friend will alternate taking turns, and you go first.
// // // On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
// // // The one who removes the last stone is the winner.
// // // Given n, the number of stones in the heap, return true if you can win the game assuming both you and your friend play optimally, otherwise return false.

// // Example 1:

// // Input: n = 4
// // Output: false
// // Explanation: These are the possible outcomes:
// // 1. You remove 1 stone. Your friend removes 3 stones, including the last stone. Your friend wins.
// // 2. You remove 2 stones. Your friend removes 2 stones, including the last stone. Your friend wins.
// // 3. You remove 3 stones. Your friend removes the last stone. Your friend wins.
// // In all outcomes, your friend wins.

// //there is level 1- game theory pattern

// Case 1: n % 4 == 0 (e.g., n = 4, 8, 12...)
// If it's your turn and n = 4, no matter what you choose (1, 2, or 3):

// You leave your opponent with 3, 2, or 1, respectively.

// Your opponent can then take all remaining stones and win.

// So you lose if n % 4 == 0.

// 🧩 Case 2: n % 4 != 0 (e.g., n = 1, 2, 3, 5, 6, 7, 9...)
// You can force the opponent into a multiple of 4 on your next move.

// If n = 5, take 1 → leave 4.

// If n = 6, take 2 → leave 4.

// If n = 7, take 3 → leave 4.

// Now the opponent is in the bad spot (n % 4 == 0), and you win later.


#include<iostream>
using namespace std;

bool nimgame(int n){
    return n%4 != 0;
}


int main(){
    int n;
    cout<<"enter the number of stones\n";
    cin>>n;

    if(nimgame(n) == 0){
        cout<<"you Lose and your opponent wins. \n";
    }
    else{
        cout<<"you wins and your opponent loses. \n";

    }
    

    return 0;
}
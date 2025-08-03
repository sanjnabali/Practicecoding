/*A school is trying to take an annual photo of all the students. 
The students are asked to stand in a single file line in non-decreasing order by height. 
Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. 
Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].
*/

#include<bits/stdc++.h>
using namespace std;

int heightchecker(vector<int> &heights) {
    vector<int> expected = heights;

    int countindices = 0;

    sort(expected.begin(), expected.end());

    for(int i = 0; i<heights.size(); i++){
        if(expected[i] != heights[i]){
            countindices++;
        }
    }
    return countindices;
}

int main(){
    vector<int> heights = {1,1,4,2,1,3};
    cout<<heightchecker(heights)<<endl;
    return 0;
}
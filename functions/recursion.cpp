#include<iostream>
using namespace std;

void towerofhanoi(int n, char source, char destination, char auxilary){
    if(n==1){
        cout<<"Move disk 1 from" <<source<<"to"<<destination<<endl;
        return;
    }

    towerofhanoi(n-1, source, auxilary, destination);
     // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerofhanoi(n-1,auxilary, destination,source);
    


}
int main(){
    int n =3;
    towerofhanoi(n, 'A', 'C', 'B');
}
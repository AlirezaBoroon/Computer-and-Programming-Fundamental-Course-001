#include <iostream>
using namespace std;
int main(){
    int x, y, a;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    cout<< "Please enter y:"<< endl;
    cin>> y;
    cout<< "Now please enter a (0 for first number, others for the second number):"<< endl;
    cin>> a;
    (a== 0) ? cout<< x : cout<< y;
    // or we can use this code:
    // int z;
    //  z= (a== 0) ? x : y;
    //  cout<< z; 
    return 0;
}

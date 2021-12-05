#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    cout<< "Please enter y:"<< endl;
    cin>> y;
    cout<< "Please enter z:"<< endl;
    cin>> z;
    // there are 3 main ways to compare the equality of values:
    if(x== y&& x== z){
        cout<< "The numbers are the same!.";
    }
    else if(x< y){
        if(x< z){
            cout<< "The number x is the minimum number.";
        }
        else{
            cout<< "The number z is the minimum number.";
        }
    }
    else{
        if(y< z){
            cout<< "The number y is the minimum number.";
        }
        else{
            cout<< "The number z is the minimum number.";
        }
    }
    return 0;
}

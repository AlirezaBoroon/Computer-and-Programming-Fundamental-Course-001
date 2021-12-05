#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    cout<< "Please enter y:"<< endl;
    cin>> y;
    // there are 3 ways to compare the equality of values:
    if (x> y){
        cout<< "Number x greater than y.";
    }
    else if(x< y){
        cout<< "Number y greater than x.";
    }
    else{
        cout<< "Number x and y are the same!.";
    }
    return 0;
}

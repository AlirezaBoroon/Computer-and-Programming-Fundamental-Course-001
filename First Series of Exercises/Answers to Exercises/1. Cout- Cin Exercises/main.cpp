#include <iostream>
using namespace std;
int main(){
    int x, y, b;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    cout<< "Please enter y:"<< endl;
    cin>> y;
    b= x;// b is for storing one of two variables.
    x= y;
    y= b;
    cout<< "The replacement process finished, x is "<< x<< " and y is "<< y<< endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int x;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    if(x>= 0){
        x++;
        cout<< "The number x incresed by one."<< endl;
    }
    else{
        x--;
        cout<< "The number x decreased by one."<< endl;
    }
    cout<< "Number x: "<< x;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int x;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    if(x% 2== 0){
        cout<< "The number x is even."<< endl;
    }
    else if(x% 2!= 0){
        cout<< "The number x is odd."<< endl;
    }
    return 0;
}

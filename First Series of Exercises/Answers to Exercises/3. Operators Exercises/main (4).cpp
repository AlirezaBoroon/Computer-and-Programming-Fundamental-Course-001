#include <iostream>
using namespace std;
int main(){
    int x;
    cout<< "Please enter x:"<< endl;
    cin>> x;
    if(x% 10== 0 && x% 15== 0){
        cout<< "The number x is divisible by 10 and 15."<< endl;
    }
    else if(x% 10== 0){
        cout<< "The number x is only divisible by 10."<< endl;
    }
    else if(x% 10!= 0){
        cout<< "The number x is not divisible by 10."<< endl;
    }
    //or:
    // if (x% 10== 0){
    //    if(x% 15== 0){
    //        cout<< "The number x is divisible by 10 and 15."<< endl;    
    //    }
    //    else{
    //        cout<< "The number x is only divisible by 10."<< endl;    
    //    }
    //}
    //else{
    //    cout<< "The number x is not divisible by 10."<< endl;    
    //}
    return 0;
}

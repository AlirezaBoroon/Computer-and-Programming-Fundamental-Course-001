#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Program gets 10 positive even numbers, if an entered number is negative, program finishes and if an odd number, program prints No!"<< endl;
    // first condition (n< 0) is more preferable than second one, so we write it first.
    for(int k=1; k<= 10; k++){
        cin>> n;
        if(n< 0){
            break;
        }
        else if(n% 2!= 0){
        // else if() is for running only one of the conditions.
            cout<< "No!"<< endl;
            k--;
            continue;
        }
    }
    return 0;
}

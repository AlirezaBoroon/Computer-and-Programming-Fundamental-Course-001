#include <iostream>
using namespace std;
int power(int n,int p){
    if (p== 1){
        return n;
    }
    return n* power(n, p-1);
}
// The 'power' function is used for calculating the number to a power using recursive function.
int main() {
    int n;
    int p;
    cout<< "Please enter the number: ";
    cin >> n;
    cout<< "Now please enter the power: ";
    cin >> p;
    int po= power(n, p);
    cout<<po;
    return 0;
}

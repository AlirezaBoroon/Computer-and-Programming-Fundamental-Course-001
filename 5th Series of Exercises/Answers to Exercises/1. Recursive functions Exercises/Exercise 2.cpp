#include <iostream>
using namespace std;
int fib(int n)
{
    if(n<= 2)
    // or: if(n==1 || n== 2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+ fib(n-2);
    }
}// 1 1 2 3 5 8 13 21 ...
// The 'fib' function is used for calculating the n'th fibonacci sequence using recursive function.
int main() {
    int n;
    cout<< "Please enter the n'th fib number: ";
    cin>> n;
    int fn= fib(n);
    cout<< "The answer: "<< fn;
    return 0;
}

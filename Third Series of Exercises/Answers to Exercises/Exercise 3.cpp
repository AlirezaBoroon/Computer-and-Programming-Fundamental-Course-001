#include <iostream>
using namespace std;
int main()
{
    //our series: 1 1 2 3 5 8 13 21 34 55 ...
    cout<< "Calculate n’th Fibonacci number:"<< endl;
    int n;
    cin>> n;
    int i= 1;
    int j= 1;
    if (n== 1|| n== 2){
        cout<< "The "<< n<< "’th Fibonacci number is: "<< 1<< endl;
        return 0;
    }
    int sum;
    // The number of loops running, depends on the number of computations.
    for(int k=1; k<= n-2; k++){
        sum= i+ j;
        i= j;
        j= sum;
    }
    cout<< "The "<< n<< "’th Fibonacci number is: "<< sum<< endl;
    return 0;
}
//or we can use this loop:
//int k= 1;
//while(k<= n-2){
//    sum= i+ j;
//    i= j;
//    j= sum;
//    k++;
//}

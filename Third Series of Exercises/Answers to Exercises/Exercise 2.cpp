#include <iostream>
using namespace std;
int main()
{
    cout<< "Calculate sum of the digits:"<< endl;
    int n;
    cin>> n;
    int sum= 0;
    while(n>= 10){
        sum+= n% 10;
        n= n/ 10;
    }
    sum+= n;
    cout<< "The sum of the digits is: "<< sum<< endl;
    return 0;
}
//or:
//    do{
//        if(n<= 9){
//        sum+= n;
//        break;
//        }
//        else{
//            sum+= n% 10;
//            n= n/ 10;
//        }
//    }while(n> 0);
//    cout<< "The sum of the digits is: "<< sum<< endl;

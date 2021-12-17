#include <iostream>
using namespace std;
int main()
{
    //our series: 1+ 2+ 3+ 4+ 5+ 6+ 7+ 8+ 9+ 10+ 11 ...
    int i= 1;
    int sum= 0;
    int sign;
    // The number of loops running, depends on a condition in the computations.
    int k= 1;
    while(sum+ k< 1000){
    // or while((k* (k+1))/ 2< 1000) --> if sum wasn't declered.
        sum= sum+ k;
        sign= k;
        k++;
    }
    cout<< "The sum of consecutive numbers starting from '1' to '"<< sign<< "' is: '''"<< sum<< "''' smaller than number 1000."<< endl;
    return 0;
}
//or we can use this loop:
//                  k<= 1000 is just a confident range(it's better to use while() for unknown ranges).
//    for(int k=1; k<= 1000; k++){
//        if(sum+ k< 1000){
//        // or if((k* (k+1))/ 2< 1000) --> if sum wasn't declered.
//            sum= sum+ k;
//            sign= k;
//        }
//        else{
//            break;
//        }
//    }

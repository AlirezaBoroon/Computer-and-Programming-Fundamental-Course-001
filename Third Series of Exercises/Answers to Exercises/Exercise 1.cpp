#include <iostream>
using namespace std;
int main()
{
    cout<< "This program is for printing the numbers divisible by 4 from 1 to 50"<< endl;
    int i;
    for(i= 1; i<= 50; i++){
        if(i% 4== 0){
            cout<< i<< endl;
        }
    }
    return 0;
}

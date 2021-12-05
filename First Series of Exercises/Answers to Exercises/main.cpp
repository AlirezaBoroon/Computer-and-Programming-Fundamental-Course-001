#include <iostream>
using namespace std;
int main(){
    int x, y, a, z;
    cout<< "Please enter number x:"<< endl;
    cin>> x;
    cout<< "Please enter number y:"<< endl;
    cin>> y;
    cout<< "Please enter number a:"<< endl;
    cin>> a;
	z= ((x-y)/a++)+ ((x*y)%a); 
    cout<< z;
    //or:
    //z= ((x-y)/a)+ ((x*y)%(++a));
    return 0;
}

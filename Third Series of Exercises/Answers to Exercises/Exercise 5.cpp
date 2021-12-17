#include <iostream>
using namespace std;
int main()
{
    int n;
    // The number of loops running, (after running once) depends on a condition.
    cout<< "Please enter n, while it's a positive number, program continues but as a negative number, prints Error and program finishes."<< endl;
    do{
        cin>> n;
    }while(n>= 0);
    cout<< "Error"<< endl;
    return 0;
}
//or we can use this method:
//cin>> n;
//while(n>= 0){
//    cin>> n;
//}
//cout<< "Error"<< endl;

#include <iostream>
using namespace std;

// Here we declare and define Hello_World function.
void Hello_World(int num){
    // This function returns nothing, so we declare it as a void function.
    for(int i= 1; i<= num; i++){
        cout<< "Hello World"<< endl;
    }
}
int main()
{
    cout<< "This program prints 'Hello World' for times of a number given by user."<< endl;
    int number;
    cout<< "Please enter a number: ";
    cin>> number;
    Hello_World(number);
    cout<< "Process is done.";
    return 0;
}

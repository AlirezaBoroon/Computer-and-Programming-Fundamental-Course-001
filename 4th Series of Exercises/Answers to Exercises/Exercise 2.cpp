#include <iostream>
using namespace std;

// Here we declare and define positive_num_entry function.
int positive_num_entry(){
    int num;// Entry number should be only integer not float.
    int i= 1;
    do{
        cout<< "Enter number "<< i<<": ";
        cin>> num;
        i++;
    }while(num>= 0);
    return num;
}
int main()
{
    cout<< "This program takes positive numbers given by user."<< endl;
    int negative_number= positive_num_entry();
    cout<< "You entered a negative number which is: "<< negative_number;
    return 0;
}

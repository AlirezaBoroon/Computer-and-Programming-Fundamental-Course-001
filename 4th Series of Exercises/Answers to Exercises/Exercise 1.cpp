#include <iostream>
using namespace std;

// Here we declare and define sum_digits function.
int sum_digits(int num){
    int sum_of_digits= 0;// This variable stores the summation.
    while(num>= 1){
        int digit= num% 10;
        // digit variable is actually the digit of the number.
        sum_of_digits= sum_of_digits+ digit;
        num= num/ 10;// Number is devided by 10 for reaching to the digits.
    }
    return sum_of_digits;
}

int main()
{
    cout<< "This program calculates sum of digits of a number given by user."<< endl;
    cout<< "Please enter the number: ";
    int number;
    cin>> number;
    int sum;
    sum= sum_digits(number);
    cout<< "Sum of digits of the number '"<< number<< "' is: "<< sum;
    return 0;
}

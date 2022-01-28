#include <iostream>
using namespace std;
int s;
// "s" variable is declared globally to use it everywhere.
char * UpperLetter(char arr[], char arr2[], int i=0){
// or: string UpperLetter(char arr[]...
    if (i == s)
         return arr2;
    else
        arr2[s-1- i]= arr[i];
    return UpperLetter(arr, arr2, i+1);
}
int main(){
    cout<< "Please enter the size of the array of letters: ";
    cin>> s;
    char n[s];
    char m[s];
    cout<< "Enter the word with "<< s<< " characters: ";
    for (int i= 0; i< s; i++){
        cin>> n[i];
    }
    char * inversed= UpperLetter(n, m);
    // or: string inversed= Upper...
    cout<< "The word's been reversed and is: ";
    for (int i = 0; i< s; i++){
        cout << inversed[i];
    }
    return 0;
}

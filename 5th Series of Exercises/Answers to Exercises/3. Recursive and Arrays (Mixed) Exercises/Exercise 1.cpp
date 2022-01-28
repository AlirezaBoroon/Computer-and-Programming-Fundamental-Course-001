#include <iostream>
using namespace std;
int s;
// "s" variable is declared globally to use it everywhere.
char UpperLetter(char arr[], int i=0){
    if (i == s+ 1){
         return 0;
    }
    if (isupper(arr[i]))
        return arr[i];
    return UpperLetter(arr, i+1);
}
int main(){
    cout<< "Please enter the size of the array of letters: ";
    cin>> s;
    char n[s];
    cout<< "Enter the word with "<< s<< " characters: ";
    for (int i= 0; i< s; i++){
        cin>> n[i];
    }
    char anw = UpperLetter(n);
    if (anw == 0){
        cout<< "Not any upper letter in the word."<< endl;
    }
    else{
        cout<< "The first upper letter is: "<< anw<<endl;
    }
    return 0;
}

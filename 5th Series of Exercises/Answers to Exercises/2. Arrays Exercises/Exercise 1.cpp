#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "Please enter the size of the array: ";
    cin>> n;
    int arr[n], maxi;
    for (int i= 0; i< n; i++){
        cout<< "The element "<< i+ 1<< ": ";
        cin>> arr[i];
    }
    maxi= arr[0];
    for (int i= 0; i< n; i++){
        if (maxi< arr[i]){
	    maxi= arr[i];
        }
    }
    cout<< "The maximum number is: "<< maxi;
    return 0;
}

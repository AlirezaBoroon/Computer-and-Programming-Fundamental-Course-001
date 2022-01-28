#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "Please enter the size of the array: ";
    cin>> n;
    int es= 0;
    int os= 0;
    int arr[n];
    // getting main array and number of evens and odds:
    for (int i= 0; i< n; i++){
        cout<< "The element "<< i+ 1<< ": ";
        cin>> arr[i];
        if(arr[i]% 2== 0){
            es++;
        }
        else{
            os++;
        }
    }
    int evens[es];
    int u= 0;
    // having evens in an array:
    for (int j= 0; j< n; j++){
        if(arr[j]% 2== 0){
            evens[u]= arr[j];
            u++;
        }
    }
    int odds[os];
    int k= 0;
    // having odds in an array:
    for (int j= 0; j< n; j++){
        if(arr[j]% 2!= 0){
            odds[k]= arr[j];
            k++;
        }
    }
    cout<< "The number of even numbers: "<< es<< endl;
    cout<< "The number of odd numbers: "<< os<< endl;
    cout<< "evens:"<<endl;
    // printing even numbers array:
    for (int i = 0; i< es; i++){
        cout << evens[i] << "  ";
    }
    cout<< "\nOdds:"<<endl;
    // printing odd numbers array:
    for (int i = 0; i< os; i++){
        cout << odds[i] << "  ";
    }
    return 0;
}

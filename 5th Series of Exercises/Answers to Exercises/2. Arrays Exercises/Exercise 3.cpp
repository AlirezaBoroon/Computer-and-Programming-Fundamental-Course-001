#include <iostream>
using namespace std;
int main (){
    int r, c;
    cout<< "Please enter the number of rows of array: ";
    cin>> r;
    cout<< "Please enter the number of columns of array: ";
    cin>> c;
    int arr[r][c];
    // getting main array:
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << "Element [" << i+1<< "][" << j+1 << "]: ";
            cin>> arr[i][j];
        }
    }
    // changing the array:
    for (int i = 1; i < r; i++){
        for (int j = 0; j < c; j++){
            arr[i][j]= arr[i][j]+ arr[0][j];
        }
    }
    // printing the final array:
    cout<< "The Result is:"<< endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}

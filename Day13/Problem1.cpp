//Write a program to Input and display array.
#include<iostream>
using namespace std;

int main(){
    int size;

    // input the size of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    int numbers[size];

    // input array elements
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // display array elements
    cout << "Array elements are: ";
    for(int i =0; i < size; i++){
        cout << numbers[i] << " ";
    }
    return 0;
}
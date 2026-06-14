//Write a program to Rotate array right.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // input array elements;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // store the last elements
    int last = arr[n - 1];

    // shift elements to the right
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // place the first element at the beginning
    arr[0] = last;

    // display the rotated array
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
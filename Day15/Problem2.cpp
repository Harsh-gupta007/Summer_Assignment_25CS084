//Write a program to Rotate array left.
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

    // store the first elements
    int first = arr[0];

    // shift elements to the left
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // place the first element at the end
    arr[n - 1] = first;

    // display the rotated array
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
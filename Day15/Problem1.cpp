//Write a program to Reverse array.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout <<"Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // reverse the array
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n -1 - i] = temp;
    }

    // display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
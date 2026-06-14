//Write a program to Move zeroes to end
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Move non-zero element to the front
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }

    // fill the remaining positions with zeroes
    while(index < n){
        arr[index] = 0;
        index++;
    }

    // display the modified array
    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
        
    return 0;
}
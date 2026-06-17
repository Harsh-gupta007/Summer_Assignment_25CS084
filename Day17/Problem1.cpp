//Write a program to Merge arrays.
#include<iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Enter the size of first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "ENter the elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    
    int mergArr[n1 + n2];

    //copyu first array
    for (int i = 0; i < n1; i++)
    {
        mergArr[i] = arr1[i];
    }

    //copy second array
    for (int i = 0; i < n2; i++)
    {
        mergArr[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << mergArr[i] << " ";
    }
    
    
    return 0;
}
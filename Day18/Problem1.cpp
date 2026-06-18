//Write a program to Bubble sort.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble sort
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n-1; j++)
       {
          if(arr[j] > arr[j+1]){
            //swap elements
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

          }
       
        }   
       
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}
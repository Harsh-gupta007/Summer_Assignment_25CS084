//Write a program to Second largest element.
#include<iostream>
using namespace std;


int main(){
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int largest = arr[0];
    int secondLargest = arr[0];

    // find the largest element
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }


    // find the second largest element
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }
    
    cout << "Second largest element =  " << secondLargest << endl;
    

    return 0;
}
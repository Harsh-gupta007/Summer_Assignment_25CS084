//Write a program to Find missing number in array.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int expSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        actualSum += arr[i] ;
    }

    int missingNum = expSum - actualSum;
    
    cout << "Missing number = " << missingNum << endl;
    
    
    return 0;
}
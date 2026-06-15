//Write a program to Find pair with given sum.
#include<iostream>
using namespace std;

int main(){
    int n, sum;

    cout << "Enter the number of array elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the required sum: ";
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum){
                cout << "pair found " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
        
    }

    if(!found){
        cout << " No pair found." << endl;
    }
    
    
    return 0;
}
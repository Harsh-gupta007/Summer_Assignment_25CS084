//Write a program to Remove duplicates from array.
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

    cout << "Array after removing Duplicate elements are:  ";


    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;

        // check if the current element has appeared before
        for (int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k]){
                isDuplicate = true;
                break;
            }
        }
        // print only unique elements
        if(!isDuplicate){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
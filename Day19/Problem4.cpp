//Write a program to Find diagonal sum.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of square matrix: ";
    cin >> n;

    int A[10][10];
    int sum = 0;

    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
        
    }

    // calculate diagonal sum
    for (int i = 0; i < n; i++)
    {
        sum += A[i][i];
    }
    
    cout << "Sum of the diagonal elements = " << sum;

    return 0;
}
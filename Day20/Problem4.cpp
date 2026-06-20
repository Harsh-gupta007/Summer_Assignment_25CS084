//Write a program to Find column-wise sum.
#include<iostream>
using namespace std;

int main(){
    int rows,cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int A[100][100];


    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
        
    }

    cout << "\ncolumn-wise sum:\n";
    for (int j = 0; j < cols; j++)
     {  int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += A[i][j];
        }

        cout << "sum of column " << j+1 << " = " << sum << endl; 
        
    }
    
    return 0;
}
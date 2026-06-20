//Write a program to Check symmetric matrix.
#include<iostream>
using namespace std;

int main(){
    int rows,cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10];


    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
        
    }
     bool symmetric = true;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if( A[i][j] != A[j][i]){
                symmetric = false;
                break;
            }
        }
        
    }

    if(symmetric){
        cout << "Matrix is symmetric.";
    }else{
        cout << "Matrix is not symmetric.";
    }
    
    return 0;
}
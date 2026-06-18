//Write a program to Subtract matrices.
#include<iostream>
using namespace std;

int main(){
    int rows,cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10],B[10][10],diff[10][10];

    cout << "Enter the elements of first matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
        
    }

    cout << "Enter the elements of second matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
        
    }

    // subtracting matrixes
    for (int  i = 0; i < rows; i++)
    {
       for (int j= 0; j < cols; j++)
       {
         diff[i][j] = A[i][j] - B[i][j];
       }
       
    }
    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++)
    {
       for (int j= 0; j < cols; j++){
        cout << diff[i][j] << " ";

       }
       cout << endl; 
    }
    
    
    
    return 0;
}
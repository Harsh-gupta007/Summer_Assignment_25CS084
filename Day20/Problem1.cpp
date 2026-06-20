//Write a program to Multiply matrices.
#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;

    int A[10][10],B[10][10],mul[10][10];
    

    // input first matrix
    cout << "Enter the rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter the elements of first matrix:\n ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
        
    }

    // input second matrix
    cout << "Enter the rows and columns of second matrix: ";
    cin >> r2 >> c2; 

    cout << "Enter the elements of second matrix:\n ";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
        
    }

    // multiplying matrixes
    for (int  i = 0; i < r1; i++)
    {
       for (int j= 0; j < c2; j++)
       {
        for (int  k = 0; k < c1; k++)
        {
             mul[i][j] += A[i][k] * B[k][j];
        }
        
       }
       
    }

    // display resultant
    cout << "product of matrices:\n ";
    for (int i = 0; i < r1; i++)
    {
       for (int j= 0; j < c2; j++){
        cout << mul[i][j] << " ";

       }
       cout << endl; 
    }
    
    
    
    return 0;
}
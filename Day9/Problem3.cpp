// Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include<iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {  char ch = 'A'+ i - 1;
        
       for (int j= 1; j <=  i; j++)
       {
        cout << ch;
       }
       cout << endl;
    }
    


    return 0;
}
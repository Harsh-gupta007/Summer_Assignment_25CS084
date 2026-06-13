// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<iostream>
using namespace std;

int main(){
    int rows = 5;

    for (int i = 1; i <= rows; i++)
   { // print leading spaces
    for (int j = 1; j <= rows - i; j++)
    {
        cout << " ";

    }

    //print ascending numbers
    for (int j = 0; j < i; j++)
    {
        cout << char('A' + j);
    }

    //print descending numbers
    for (int j = i - 2; j >= 0; j--)
    {
       cout << char('A' + j);
    }
    
    cout << endl;
    
   }


    return 0;
}
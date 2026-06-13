// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {  // print spaces
       for (int j = 1; j <= rows - i; j++)
       {
        cout << " ";
       }

       // print stars
       for (int j = 1; j <= (2 * i - 1); j++)
       {
        cout << "*";
       }
       
       cout << endl;
    }
    


    return 0;
}

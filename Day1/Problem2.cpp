//Write a program to print the multiplication table of the given number

#include<iostream>
using namespace std;

int main(){

    int Num;  //Represents the number
    cout << "Enter the number: ";
    cin >> Num; //Number taken by the user
    
    cout << "The multiple of the number: " << Num;
    for (int i = 1; i <= 10; i++)
    {
        cout << Num << " X " << i << "=" << Num*i << endl;  //Printing of the multiplication table
    }
    
    return 0;
}
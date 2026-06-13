//Write a program to Generate Fibonacci series.
#include<iostream>
using namespace std;

int main(){
    int Num,first=0, second=1, next;
    cout << "Enter the number of terms: ";
    cin >> Num;

    cout << "Fibonacci series: ";

    for (int i = 1; i <= Num; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
         
    }
    
    return 0;
}
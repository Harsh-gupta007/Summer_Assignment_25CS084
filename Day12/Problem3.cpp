//Write a program to Write function for Fibonacci.
#include<iostream>
using namespace std;
 void fibonacci(int terms){
    int first = 0,second = 1, next;

    for(int i = 1; i <= terms; i++){
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
 }

 int main(){
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    cout << "Fibonacci series: ";
    fibonacci(terms);

    return 0;
 }
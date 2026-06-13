//Write a program to Print prime numbers in a range.
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
    return false;

    for(int i=2;i<=n-1; i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int main(){
    int start, end;
     cout << "Enter starting number: ";
     cin >> start;

     cout << "Enter ending number: ";
     cin >> end;

     cout << "Prime numbers between " << start << " and " << end << "are:\n";

     for (int i = start; i <= end; i++)
     {
        if(isPrime(i)) {
            cout << i << " ";
        }
     }

     return 0;
     
}
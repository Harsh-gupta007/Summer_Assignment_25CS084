//Write a program to Find x^n without pow().
#include<iostream>
using namespace std;

int main(){
    int x,n;
    long long result = 1;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=1; i<= n;i++){
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
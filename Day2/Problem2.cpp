//Write a program to Reverse a number
#include<iostream>
using namespace std;

int main(){
    int num, reverse = 0,digit;

    cout << "Enter the number: ";
    cin >> num;

    while (num != 0){
        digit = num % 10; // get the last digit

        reverse = reverse * 10 + digit; // build the reversed number

        num /= 10; // remove the last digit
    }

    cout << "reversed number = " << reverse << endl; 


    return 0;
}
//Write a program to Find sum of digits of a number.
#include<iostream>
using namespace std;

int main(){
    int num, sum = 0,digit;
    
    cout << "Enter the number: ";
    cin >> num;

    while (num != 0){
        digit = num % 10; // get the last digit 

        sum += digit;  // add the digit to the sum

        num /= 10;  // remove the last digit

    }

    cout << "sum of digits = " << sum << endl;

    return 0;


}
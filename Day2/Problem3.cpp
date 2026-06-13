//Write a program to Find product of digits
#include<iostream>
using namespace std;

int main(){
    int num, digit, product = 1;

    cout << "Enter the number: ";
    cin >> num;

    while(num != 0){
        digit = num % 10;  // get the last digit

        product *= digit;  // multiply the digit to product
        
        num /= 10;         // remove the last digit

    }

    cout << "Product of digits = " << product << endl;


    return 0;

}
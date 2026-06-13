//Write a program to Convert binary to decimal.
#include<iostream>
using namespace std;

int main(){
    int decimalNum = 0,binaryNum,base = 1,digit;

    cout << "Enter the binary number: ";
    cin >> binaryNum;

    
        while(binaryNum != 0){
            digit = binaryNum % 10;   //get the last binary digit
            decimalNum += digit * base; // add its decimal value
            base *= 2;   // move to the next power of 2
            binaryNum /= 10;    //remove the last digit
        }

        cout << "decimal number = " << decimalNum << endl;
    

    return 0;
}
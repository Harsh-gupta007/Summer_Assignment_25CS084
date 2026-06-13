//Write a program to Convert decimal to binary.
#include<iostream>
using namespace std;

int main(){
    int decimalNum,binaryNum = 0,placeValue = 1,remainder;

    cout << "Enter the number: ";
    cin >> decimalNum;

    if(decimalNum == 0){
        cout << "Binary number = 0" << endl;
    }else{
        while(decimalNum != 0){
            remainder = decimalNum % 2;   //get remainder (0 or 1)
            binaryNum += remainder * placeValue; // build bianry number
            placeValue *= 10;
            decimalNum /= 2;    //divide by 2
        }

        cout << "Binary number = " << binaryNum << endl;
    }

    return 0;
}
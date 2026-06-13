//Write a program to Write function for Armstrong.
#include<iostream>
#include<cmath>
using namespace std;


bool isArmstrong(int number){
    int orgNum = number;
    int digitCount = 0;
    int sum = 0;

    
   // count the number of digits
    int temp = number;
    while(temp > 0){
        digitCount++;
        temp /= 10;
    }
  // Calculate the sum of digits raised to the power of digitCount
    temp = number;
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit,digitCount);
        temp /= 10;
    }

    return sum == orgNum;
}

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(isArmstrong(number)){
        cout << number << " is a armstrong number.";
    }else{
        cout << number << " is not a armstrong number.";
    }

    return 0;
}
//Write a program to Recursive sum of digits
#include<iostream>
using namespace std;

int sumofDigits(int num){
    if(num == 0){
        return 0;
    }
    return (num % 10) + sumofDigits(num / 10);
}

int main(){
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "sum of digits = " << sumofDigits(num) << endl;

    return 0;
}
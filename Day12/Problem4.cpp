//Write a program to Write function for perfect number.
#include<iostream>
using namespace std;

bool isPerfect(int number){
    int sum = 0;

    for (int i = 1;i <= number / 2; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum == number;
}

int main(){
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if(isPerfect(number)){
        cout << number << " is a perfect number.";
    }else{
        cout << number << " is not a perfect number.";
    }


    return 0;
}
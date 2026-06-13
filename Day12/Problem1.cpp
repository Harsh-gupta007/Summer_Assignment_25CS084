//Write a program to Write function for palindrome
#include<iostream>
using namespace std;

bool isPalindrone(int number){
    int originalNum = number;
    int reverseNum = 0;

    while(number > 0){
        int digit = number % 10;
        reverseNum = reverseNum * 10 + digit;
        number /= 10;

    }

    return originalNum == reverseNum;

}
int main(){
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if(isPalindrone(number)){
        cout << number << " is a palindrome number." << endl;

    }else{
        cout << number << " is not a palindrome number. " << endl;

    }

    return 0;
}
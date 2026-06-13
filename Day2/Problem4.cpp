//Write a program to Check whether a number is palindrome
#include<iostream>
using namespace std;

int main(){
    int num, orgNum,revNum = 0,digit;

     cout << "Enter the number: ";
     cin >> num;

     orgNum = num;

     while(num != 0){
       digit = num % 10;
       revNum = revNum * 10 + digit;
       num /= 10;

     }

     if(orgNum == revNum){
        cout << orgNum << " is a palindrome number." << endl;
     }else{
        cout << orgNum << " is not a palindrome number." << endl;
        
     }

    return 0;
}
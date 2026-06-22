//Write a program to Check palindrome string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,rev = "";

    cout << "Enter the string: ";
    cin >> str;

    // reverse the string
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    
    // check the palindrome
    if(str == rev){
        cout << str << " is a palindrome.";

    }else{
        cout << str << " is not a palindrome";
    }

    return 0;
}
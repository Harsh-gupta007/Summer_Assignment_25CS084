//Write a program to Write function to find maximum.
#include<iostream>
using namespace std;

int max(int num1, int num2){
    if(num1 > num2){
    return num1;
    }
    else{
        return num2;

    }
}

    int main() 
    {
        int firstnum, secondnum;

        cout << "Enter teo numbers: ";
        cin >> firstnum >> secondnum;

        cout << "Maximum number = " << max(firstnum, secondnum);

        return 0;
    }

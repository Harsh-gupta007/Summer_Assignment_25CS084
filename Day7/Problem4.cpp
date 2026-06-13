//Write a program to Recursive reverse number.
#include<iostream>
using namespace std;

int revNum = 0;

void revnum(int num){
    if(num == 0){
        return;
    }

    revNum = revNum * 10 + (num % 10);
    revnum(num / 10);
}

int main(){
    int num;

    cout << "Enter the number: ";
    cin >> num;

    revnum(num);

    cout << "Reversed number = " << revNum << endl;

    return 0;
}
















//Write a program to Create voting eligibility system.
#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "Congratulation!, You are eligible to vote.";
    }else{
        cout << "Sorry, You are not eligible to vote." << endl;
        cout << "You can vote after " << 18 - age << " year(s)." << endl;
    }

    return 0;
}
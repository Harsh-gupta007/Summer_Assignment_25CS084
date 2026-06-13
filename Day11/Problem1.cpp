//Write a program to Write function to find sum of two numbers.
#include<iostream>
using namespace std;

// Function to find the sum of two numbers
int findsum(int firstnum, int secondnum){

    return firstnum + secondnum;

}

int main(){
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = findsum(num1,num2);

    cout << "sum = " << sum << endl;

    return 0;
}
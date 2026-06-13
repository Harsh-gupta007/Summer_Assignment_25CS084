//Write a program to Write function to find factorial.
#include<iostream>
using namespace std;

long long factorial(int number){
    long long fact = 1;

    for (int i = 1; i <= number; i++)
    {
       fact *= i;
    }
    
    return fact;

}

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(number < 0){
        cout << "Factorial is not defined for negetive numbers." << endl;

    }else{
        cout << "Factorial of " << number << " = " << factorial(number) << endl;

    }

    return 0;
}
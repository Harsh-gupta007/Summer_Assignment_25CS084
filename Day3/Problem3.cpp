//Write a program to Find GCD of two numbers.
#include<iostream>
using namespace std;

int main(){
     int Num1,Num2;  //taken two numbers
     cout << "Enter two numbers: ";
     cin >> Num1 >> Num2;

     while(Num2!=0){   //initialised while loop

        int temp = Num2;  //stored Num2 value in temp variable
        Num2 = Num1 % Num2;
        Num1 = temp; 
     }

     cout << "GCD = " << Num1 << endl;  //output code

    return 0;
}
//Write a program to Find LCM of two numbers.
#include<iostream>
using namespace std;

int main(){
    int Num1,Num2,gcd,lcm;
    cout << "Enter two numbers: ";
    cin >> Num1 >> Num2;   

    int x=Num1,y=Num2;

    while(y != 0){  //initialised while loop
        
        int temp = y;  //taken temperory number as temp
        y = x % y;
        x = temp;

    }

    gcd =x;
    lcm = (Num1 * Num2) / gcd; //used relation between LCM and GCD.

    cout << "LCM = " << lcm << endl;


    return 0;
}
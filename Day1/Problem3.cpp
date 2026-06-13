//Write a program to find the factorial of a given number

#include<iostream>
using namespace std;

int main(){
    int Num; //Represents the number
    cout << "Enter the number: ";
    cin >> Num ;   //Number taken by the user
  
    int Fact=1;   //Represents Factorial 
    
    for (int i = 1; i <=Num; i++)
    {
       Fact=Fact*i;
    }
    
    cout << Fact << endl;  //output code


    return 0;
}
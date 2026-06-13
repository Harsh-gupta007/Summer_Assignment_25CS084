//Write a program to Find sum of digits of a number.
#include<iostream>
using namespace std;

int main(){
    int Num;  //Represents the number
    cout << "Enter the number: ";
    cin >> Num;
    bool isPrime=true;
    for (int i = 2; i*i <= Num; i++)  //initialised the for loop
    {
       if(Num%2==0){   //checking for the condition
          isPrime=false;
          break;
       } 
    }
       if(isPrime==true){  
        cout << "Number is Prime\n";
       }else{
        cout << "Number is not a Prime\n";
       }
    
    

    return 0;
}
//Write a program to Check perfect number.
#include<iostream>
using namespace std;

int main(){
    int Num,sum = 0;
    cout << "Enter the number: ";
    cin >> Num;

    for (int i =1 ; i < Num; i++)
    {
       if (Num%i==0)  //check for the divisible factor number
       {
        sum = sum + i;

       }
       
    }

    if(sum == Num){
        cout << "is a perfect number";

    }else{
        cout << "is not a perfect number";
    }
    

    return 0;
}
//Write a program to Check strong number.
#include<iostream>
using namespace std;

int main(){
    int Num,orgNum,digit;
    int sum = 0,fact;

    cout << "Enter the number: ";
    cin >> Num;

    orgNum = Num;

    while(Num > 0){
        digit = Num % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
           fact = fact * i;

        }
           sum = sum + fact;
           Num = Num / 10;
        
    }

    if(sum == orgNum){
        cout << orgNum << " is a strong number.";
    }else{
        cout << orgNum << " is not a strong number.";
    }
    
    return 0;
}
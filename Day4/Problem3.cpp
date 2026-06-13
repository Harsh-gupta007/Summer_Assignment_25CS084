//Write a program to Check Armstrong number.
#include<iostream>
using namespace std;

int main(){
    int Num, orgNum, digit;
    int sum = 0;
    
    cout << "Enter a number: ";
    cin >> Num;

    orgNum = Num;

    while (Num > 0)  
    {
       digit = Num % 10;
       sum = sum + digit*digit*digit;   //taking armstrong sum
       Num = Num / 10; 
    }

    if(sum == orgNum){     //checking condition
        cout << orgNum << " is an armstrong number\n";

    }else{

        cout << orgNum << " is not an armstrong number\n";

    }
    

    return 0;
}
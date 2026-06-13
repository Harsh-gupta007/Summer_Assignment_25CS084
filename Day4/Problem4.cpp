//Write a program to Print Armstrong numbers in a range.
#include<iostream>
using namespace std;

int main(){
    int start,end;
    
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: \n";

    for (int currentNum = start; currentNum <= end; currentNum++)
    {
       int orgNum = currentNum;
       int tempNum = currentNum;
       int armstrongSum = 0;

       while (tempNum > 0)
       {
        int digit = tempNum % 10;
        armstrongSum += digit * digit * digit;   //taking armstrong sum
        tempNum /= 10;

       }
       if (armstrongSum == orgNum){
        cout << orgNum << " ";
       }
    }
    

    return 0;
}
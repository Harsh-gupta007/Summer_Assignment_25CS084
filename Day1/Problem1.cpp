//Write a program to calculate sum off first N natural numbers

#include<iostream>
using namespace std;

int main(){
    int n;   //Here 'n' represents number
    
    cout << "Enter the natural number: ";
    cin >> n;    //Taking number from the user
    int sum=0;
    for (int i = 1; i <= n; i++)   //Initilised the for loop

    {  if(n>0) //Condition check for only positive natural numbers
        {
           sum=sum+i;
        }
    }
    
    cout << sum << endl;  //Taking sum of the natural numbers

    return 0;
}
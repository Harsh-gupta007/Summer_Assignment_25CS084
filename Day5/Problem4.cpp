//Write a program to Find largest prime factor.
#include<iostream>
using namespace std;

int main()
{
    long long Num, largestprimeFact= -1;
    
    cout << "Enter the number: ";
    cin >> Num;
    
    // remove factors of 2
    while(Num % 2 == 0)
    {
        largestprimeFact = 2;
        Num /= 2;

    }
   // check odd factors
    for (long long fact  = 3; fact * fact <= Num; fact += 2 )
    {
        while(Num % fact == 0){
            largestprimeFact = fact;
            Num /= fact;

        }

    }
    // Ig the reamining number is a prime number greater than 2
    if(Num > 2){
        largestprimeFact = Num;
    }

    cout << "Largest prime factor = " << largestprimeFact;
    
   return 0;
}    
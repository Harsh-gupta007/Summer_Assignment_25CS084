//Write a program to Print factors of a number.
#include<iostream>
using namespace std;

int main(){
    int Num;

    cout << "Enter the number: ";
    cin >> Num;

    cout << "Factors of " << Num << " are: ";

    for (int i = 1; i <= Num; i++)
    {
       if(Num % i == 0){
        cout << i << endl;
       }
    }
    

    return 0;
}
//Write a program to Find nth Fibonacci term.
#include<iostream>
using namespace std;

int main(){
    int Num;
    int first = 0, second = 1, next;

    cout << "Enter the Number: ";
    cin >> Num;

    if(Num == 1){
        cout << "Nth fibonacci term = \n" << first;
    }
    else if(Num == 2){
        cout << "Nth fibonacci tern = \n" << second;

    }else{
        for(int i = 3; i <= Num; i++){
            next = first + second;
            first = second;
            second = next;
        }

        cout << "Nth fibonacci term = " << second;
    }


    return 0;

}
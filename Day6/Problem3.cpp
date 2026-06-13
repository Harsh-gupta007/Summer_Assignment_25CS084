//Write a program to Count set bits in a number.
#include<iostream>
using namespace std;

int main(){
    int num, count = 0;

    cout << "Enter the number: ";
    cin >> num;

    while(num != 0){
        count += num % 2;
        num /= 2;
    }

    cout << "Number of set bits = " << count << endl;


    return 0;
}
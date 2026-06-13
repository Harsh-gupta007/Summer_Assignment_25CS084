//Write a program to count the digit in a number

#include<iostream>
using namespace std;

int main(){
     int Num;  //Represents the number
     cout << "Enter the number: ";
     cin >> Num; // number taken from the user
     int count=0;
    
     if(Num==0){     //using if else statements
        count=1;
     }else if(Num<0){
        Num=-Num;
     }
     else{
        for (;Num > 0;  Num=Num/10 )
        {
            count++;
        }
        cout << "Number of digits: " << count << endl; // output code
     }


    return 0;
}


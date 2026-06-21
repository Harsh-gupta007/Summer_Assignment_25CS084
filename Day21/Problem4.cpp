//Write a program to Convert lowercase to uppercase.
#include<iostream>
using namespace std;

int main(){
   char str[100];

   cout << "ENter the string: ";
   cin.getline(str,100);

   for (int i = 0; str[i] != '\0'; i++)
   {
    if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] -32;  //convert to uppercase
    }
   }

   cout << "uppercase string: " << str << endl;

   return 0;
   
}
//Write a program to Find first repeating character.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter the string: ";
    getline(cin,str);

    int freq[256] = {0};

    // find first repeating character
    for (int  i = 0; i < str.length(); i++)
    {   freq[str[i]]++;

        if(freq[str[i]] == 2){
            cout << "First repeating character: " << str[i] << endl;
            return 0; 
        }
    }

    cout << "No repeating character found. " << endl;

    return 0;
    
    
}
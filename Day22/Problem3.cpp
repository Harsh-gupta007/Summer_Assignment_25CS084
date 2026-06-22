//Write a program to Character frequency.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter the string: ";
    getline(cin,str);

    char ch;
    cout << "Enter the character to find the frequency: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == ch){
            count ++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count << endl;

    return 0;
    
}
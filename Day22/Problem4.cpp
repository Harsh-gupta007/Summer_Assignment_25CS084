//Write a program to Remove spaces from string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter the string: ";
    getline(cin,str);

    int j = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }

    str.resize(j);

    cout << "String after removing spaces: " << str << endl;

    return 0;
    
}
//Write a program to Find first non-repeating character.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter the string: ";
    getline(cin,str);

    int freq[256] = {0};

    // count frequency of each character 
    for (int i = 0; i < str.length() ; i++)
    {
      freq[str[i]]++;

    }

    // find first non repeating character
    for (int  i = 0; i < str.length(); i++)
    {
        if(freq[str[i]] == 1){
            cout << "First non repeating character: " << str[i] << endl;
            return 0; 
        }
    }

    cout << "No non repeating character found. " << endl;

    return 0;
    
    
}
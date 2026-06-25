//Write a program to Find common characters in strings.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin,str1);
    
    cout << "Enter the second string: ";
    getline(cin, str2);

    cout << "Common characters: ";

    for (int i = 0; i < str1.length(); i++)
    {
        bool found = false;

        // check if character exists in second string
        for (int j = 0; j < str2.length(); j++)
        {
          if(str1[i] == str2[j]){
           found = true;
           break;
          }
        }

        // Avoid printing duplicates
        bool printed = false;
        for (int k = 0; k < i; k++)
        {
            if(str1[i] == str1[k]){
             printed = true;
             break;
            }
        }
        if(found && !printed){
            cout << str1[i] << " ";
        }
        
        
    }


    return 0;
    
}

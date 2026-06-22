//Write a program to Find maximum occurring character.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "Enter the string: ";
    getline(cin, str);

    int freq[346] = {0};

    // coubnt frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }
    
    char maxchar;
    int maxFreq = 0;

    // find character with maximum frequency
    for (int i = 0; i < str.length(); i++)
    {
        if(freq[str[i]] > maxFreq){
        maxFreq = freq[str[i]];
        maxchar = str[i];
        }
    }
    
    cout << "Maximum occuring character: " << maxchar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
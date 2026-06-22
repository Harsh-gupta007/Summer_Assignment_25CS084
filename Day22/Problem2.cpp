//Write a program to Count words in a sentence.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence;

    cout << "Enter the sentence: ";
    getline(cin,sentence);

    int words = 0;

    for (int i = 0; i < sentence.length() ; i++)
    {
       if((i == 0 && sentence[i] != ' ') ||
       (sentence[i] != ' ' && sentence[i - 1] == ' ' )){
        words++;
       }
    }

    cout << "number of words = " << words << endl;

    return 0;
    
}
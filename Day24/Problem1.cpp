//Write a program to Check string rotation.
#include<iostream>
#include<string>
using namespace std;

bool isRotation(string s1, string s2){
    // length must be equal
    if(s1.length() != s2.length()){
        return false;
    }

    string temp = s1 + s1;

    // check if s2 is a substring of temp
    return (temp.find(s2) != string::npos);
}

int main(){
    string s1,s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    if(isRotation(s1,s2)){
        cout << "strings are rotations of each other." << endl;
    }else{
        cout << "strings are not rotations of each other." << endl;
    }

    return 0;
}
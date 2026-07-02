//Write a program to Create student record system using arrays and strings.
#include<iostream>
#include<string>
using namespace std;

int main(){
    const int MAX = 5;
    int roll[MAX];
    string name[MAX];
    float marks[MAX];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Input student records
    for (int  i = 0; i < n; i++)
    {
    cout << "\nEnter details of students " << i+1 << endl;
    cout << "Roll no: ";
    cin >> roll[i];

    cout << "Name: ";
    cin.ignore();
    getline(cin,name[i]);

    cout << "Marks: ";
    cin >> marks[i];


    // Display students records
    cout << "\n=====> STUDENT RECORDS <=====\n";
    cout << "Roll No\tName\t\tMarks\n";

    for (int j = 0; j <= i; j++)
    {
        cout << roll[j] << "\t" << name[j] << "\t\t" << marks[j] << endl;
    }
    
    }
    
    return 0;
}
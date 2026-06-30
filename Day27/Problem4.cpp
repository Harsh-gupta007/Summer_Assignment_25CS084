//Write a program to Create marksheet generation system.
#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
}  ;

Student s;

//Function to Enter Details
void input(){
    cout << "\nEnter the student Roll number: ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "\nEnter the student name: ";
    getline(cin,s.name);

    cout << "Enter the marks of 5 subjects: \n";
    for (int i = 0; i < 5 ; i++)
    {
       cout << "Subject " << i +1 << ": "  ; 
       cin >> s.marks[i] ;
       cout << endl;
        
    }
    
}

// Function to calculate Result
void calculate(){
    s.total = 0;
    for (int i = 0; i < 5; i++)
    {
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5;
    
}


// Function to display the Marksheet
void display(){
    cout << "\n=======> MARKSHEET <=======\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nMarks: \n";
    for (int i = 0; i <5; i++)
    {
        cout << "Subject " << i + 1<< " : " << s.marks[i] << endl;
    }
    cout << endl;
    cout << "Total Marks: " << s.total << "/500" << endl;
    cout << "Percentage: " << s.percentage << "%" << endl;
    
}

int main(){
    input();
    calculate();
    display();

    return 0;
}
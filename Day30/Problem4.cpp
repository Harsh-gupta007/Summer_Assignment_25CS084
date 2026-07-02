//Write a program to Develop complete mini project using arrays, strings and functions.
#include<iostream>
#include<string>
using namespace std;

const int MAX = 10;

    int roll[MAX];
    string name[MAX];
    int age[MAX];
    float marks[MAX];

int totalStudents = 0;

// function to add student
void addStudent(){

    if(totalStudents == MAX){
        cout << "\nStudent Limit Reached!\n";
        return;
    }

    int r;


    cout << "\nEnter student roll number: ";
    cin >>r;
    

    for (int i = 0; i < totalStudents; i++)
    {
       if(roll[i] == r){
        cout << "\nRoll Number Already Exists!\n";
        return;
       }
    }

    roll[totalStudents] = r;
    

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin,name[totalStudents]);


    cout << "Enter the age: ";
    cin >> age[totalStudents];

    cout << "Enter the Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

// function to display all students
void displayStudents(){
    
    if(totalStudents == 0){
        cout << "\nNo record found!\n";
        return;
    }

    cout << "\n-----> STUDENT RECORD <-----\n ";

    for(int i = 0; i <totalStudents ; i++){

        cout << "\nStudent " << i+1 << endl;
        cout << "Roll Number : " << roll[i] << endl; 
        cout << "Name        : " << name[i] << endl;
        cout << "Age         : " << age[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }
}


// functions to search student
void searchStudent(){
    int r;
    bool found = false;

    cout << "Enter Roll number to search: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r){
            cout << "\nRecord Found\n";
             cout << "Roll Number : " << roll[i] << endl; 
             cout << "Name        : " << name[i] << endl;
             cout << "Age         : " << age[i] << endl;
             cout << "Marks       : " << marks[i] << endl;
             

             found = true;
             break;
        }
    }

    if(!found){
        cout << "Student Record Not Found!\n";
    }
    
} 

// function to update student
void updateStudent(){
    int r;
    bool found = false;

    cout << "\nEnter Roll number to update: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r){

            cin.ignore();

            cout << "Enter the new name: ";
            getline(cin,name[i]);

            cout << "Enter the new Marks: ";
            cin >> marks[i];

            cout << "\nRecord updated successfully!\n";

            found = true;
            break;
        }
    }

    if(!found){
        cout << "Student Recored Not Found!\n";
    }
    
}


// function to delete student
void deleteStudent(){
    int r;
    bool found = true;

    cout << "\nEnter the roll number to delete: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if(roll[i] == r){
            for(int j=i; j<totalStudents-1 ; j++){
               
                roll[j] = roll[j+1];
                 name[j] = name[j+1];
                  age[j] = age[j+1];
                  marks[j] = marks[j+1];
            }

           totalStudents --;
            cout << "\nRecord Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Student Record Not Found!\n";
    }
    
}

int main(){
    int choice;

    do{
        cout << "\n=====> COMPLETE MINI PROJECT <=====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addStudent();
                break;
            
            case 2:
                displayStudents();
                break;  
                
            case 3:
                searchStudent();
                break;    
            
            case 4:
                updateStudent();
                break;    
            
            case 5:
                deleteStudent();
                break;    

            case 6:
                cout << "\n Thank you!\n";
                break;    

            default:
                cout << "\nInvalid Choice!\n";    
        }

    }while(choice != 6);

    return 0;
}
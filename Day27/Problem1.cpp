//Write a program to Create student record management system.
#include<iostream>
#include<string>
using namespace std;

struct Student
{
    int roll;
    string name;
    int age;
    float marks;

};

Student s[100];
int count = 0;

// function to add student
void addStudent(){

    cout << "\nEnter student roll number: ";
    cin >> s[count].roll;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin,s[count].name);


    cout << "Enter the age: ";
    cin >> s[count].age;

    cout << "Enter the Marks: ";
    cin >> s[count].marks;

    count++;

    cout << "\nStudent Added Successfully!\n";
}

// function to display all students
void displayStudents(){
    
    if(count == 0){
        cout << "\nNo record found!\n";
        return;
    }

    cout << "\n-----> STUDENT RECORD <-----\n ";

    for(int i = 0; i < count ; i++){

        cout << "\nStudent " << i+1 << endl;
        cout << "Roll Number : " << s[i].roll << endl; 
        cout << "Name        : " << s[i].name << endl;
        cout << "Age         : " << s[i].age << endl;
        cout << "Marks       : " << s[i].marks << endl;
    }
}


// functions to search student
void searchStudent(){
    int roll;
    bool found = false;

    cout << "Enter Roll number to search: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if(s[i].roll == roll){
            cout << "\nRecord Found\n";
             cout << "Roll Number : " << s[i].roll << endl; 
             cout << "Name        : " << s[i].name << endl;
             cout << "Age         : " << s[i].age << endl;
             cout << "Marks       : " << s[i].marks << endl;
             

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
    int roll;
    bool found = false;

    cout << "\nEnter Roll number to update: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if(s[i].roll == roll){

            cin.ignore();

            cout << "Enter the new name: ";
            getline(cin,s[i].name);

            cout << "Enter the new age: ";
            cin >> s[i].age;

            cout << "Enter the new Marks: ";
            cin >> s[i].marks;

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
    int roll;
    bool found = true;

    cout << "\nEnter the roll number to delete: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if(s[i].roll == roll){
            for(int j=1; j<count-1 ; j++){
                s[j] = s[j + 1];
            }

            count --;
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
        cout << "\n=====> STUDENT RECORD MANAGEMENT SYSTEM <=====\n";
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
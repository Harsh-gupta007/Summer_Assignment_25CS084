//Write a program to Create employee management system.
#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;

};

Employee emp[100];
int count = 0;

// function to add Employee
void addEmployee(){

    cout << "\nEnter Employee ID: ";
    cin >> emp[count].id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin,emp[count].name);


    cout << "Enter Department: ";
    getline(cin,emp[count].department);

    cout << "Enter the Salary: ";
    cin >> emp[count].salary;

    count++;

    cout << "\nEmployee Added Successfully!\n";
}

// function to display all Employees
void displayEmployee(){
    
    if(count == 0){
        cout << "\nNo record found!\n";
        return;
    }

    cout << "\n-----> EMPLOYEES RECORD <-----\n ";

    for(int i = 0; i < count ; i++){

        cout << "\nEmployee " << i+1 << endl;
        cout << "ID          : " << emp[i].id << endl; 
        cout << "Name        : " << emp[i].name << endl;
        cout << "Department  : " << emp[i].department << endl;
        cout << "Salary      : " << emp[i].salary << endl;
    }
}


// functions to search Employee
void searchEmployee(){
    int ID;
    bool found = false;

    cout << "Enter ID to search: ";
    cin >> ID;

    for (int i = 0; i < count; i++)
    {
        if(emp[i].id == ID){
             cout << "\nRecord Found\n";
             cout << "ID          : " << emp[i].id << endl; 
             cout << "Name        : " << emp[i].name << endl;
             cout << "Department  : " << emp[i].department << endl;
             cout << "Salary      : " << emp[i].salary << endl;
             

             found = true;
             break;
        }
    }

    if(!found){
        cout << " Employee Record Not Found!\n";
    }
    
} 

// function to update Employee
void updateEmployee(){
    int ID;
    bool found = false;

    cout << "\nEnter ID to update: ";
    cin >> ID;

    for (int i = 0; i < count; i++)
    {
        if(emp[i].id == ID){

            cin.ignore();

            cout << "Enter the new name: ";
            getline(cin,emp[i].name);

            cout << "Enter the new Department: ";
            cin >> emp[i].department;

            cout << "Enter the new Salary: ";
            cin >> emp[i].salary;

            cout << "\nRecord updated successfully!\n";

            found = true;
            break;
        }
    }

    if(!found){
        cout << "Employee Recored Not Found!\n";
    }
    
}


// function to delete Employee
void deleteEmployee(){
    int ID;
    bool found = true;

    cout << "\nEnter the ID to delete: ";
    cin >> ID;

    for (int i = 0; i < count; i++)
    {
        if(emp[i].id == ID){
            for(int j=1; j<count-1 ; j++){
                emp[j] = emp[j + 1];
            }

            count --;
            cout << "\nRecord Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Employee Record Not Found!\n";
    }
    
}

int main(){
    int choice;

    do{
        cout << "\n=====> EMPLOYEE RECORD MANAGEMENT SYSTEM <=====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employee\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addEmployee();
                break;
            
            case 2:
                displayEmployee();
                break;  
                
            case 3:
                searchEmployee();
                break;    
            
            case 4:
                updateEmployee();
                break;    
            
            case 5:
                deleteEmployee();
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

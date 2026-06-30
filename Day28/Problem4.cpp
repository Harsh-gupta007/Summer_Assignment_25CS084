//Write a program to Create contact management system.
#include<iostream>
#include<string>
using namespace std;

string name;
long long number;
bool savedNumber = false;
int totalContacts = 0;

// function to add contacts
void addContact(){
    if(savedNumber){
        cout << "\nContact is already saved!\n";
    }else{
    cin.ignore();
    
    cout << "\nEnter contact name: ";
    getline(cin,name);

    cout << "Enter a 10-digit Number: ";
    cin >> number;

    totalContacts++;
    savedNumber = true;

    cout << "\nContact Added Successfully!\n";
}
}

// function to view the contacts
void viewContact(){
    
    if(!savedNumber){
        cout << "\nNo contact found.\n";
        return;
    }

    long long Cno;

    cout << "Enter the contact number: ";
    cin >> Cno;
    
    if(Cno == number){
    cout << "\n-----> CONTACT DETAILS <-----\n ";

        cout << "\nContact name   : " << name << endl;
        cout << "Number         : " << number<< endl; 
        cout << "Status         : Saved\n" << endl;
    
    }else{
            cout << "Invalid Contact Number!";
        }
    
    }


// functions to delete the contacts
void deleteContact(){
   if(!savedNumber){
    cout << "\n No Contact has been Saved yet.";
    return;
   }

   long long Cno;
   
    cout << "Enter the Contact number: ";
    cin >> Cno;
    if(Cno == number){
        savedNumber = false;
        totalContacts--;

        cout << "Contact Deleted successfully.\n";
    }else{
        cout << "Invalid Contact Number!.\n";
    }


   
} 


int main(){
    int choice;

    do{
        cout << "\n=====> CONTACT MANAGEMENT SYSTEM <=====\n";
        cout << "1. Add contact\n";
        cout << "2. Delete contact\n";
        cout << "3. View Contact\n";
        cout << "4. Exit\n";
        cout << "Available Contacts: " << totalContacts << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addContact();
                break;
            
            case 2:
                deleteContact();
                break;  
                
            case 3:
               viewContact();
                break;      

            case 4:
                cout << "\n Thank you!\n";
                break;    

            default:
                cout << "\nInvalid Choice!\n";    
        }

    }while(choice != 4);

    return 0;
}
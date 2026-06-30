//Write a program to Create ticket booking system.
#include<iostream>
#include<string>
using namespace std;

string name;
int age;
int ticketNo;
string destination ;
int totalSeats = 10;
bool ticketBooked = false;

// function to book ticket
void bookTicket(){
    if(ticketBooked){
        cout << "\n Ticket is already booked!\n";
    }
    if(totalSeats == 0){
        cout << "\nSorry! No Seats Are Available.";
        return;
    }else{
    cin.ignore();
    
    cout << "\nEnter Passanger name: ";
    getline(cin,name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter the ticket number: ";
    cin >> ticketNo;

    cin.ignore();

    cout << "Enter Destination: ";
    getline(cin,destination);
    
    totalSeats++;
    ticketBooked = true;

    cout << "\nBooks Added Successfully!\n";
}
}

// function to view ticket
void viewTicket(){
    
    if(!ticketBooked){
        cout << "\nNo booking found.\n";
        return;
    }

    int tno;

    cout << "Enter the ticket number: ";
    cin >> tno;
    
    if(tno == ticketNo){
    cout << "\n-----> TICKET DETAILS <-----\n ";

        cout << "\npassenger name : " << name << endl;
        cout << "Age              : " << age<< endl; 
        cout << "Ticket number    : " << ticketNo << endl;
        cout << "Destination      : " << destination << endl;
        cout << "Status           : confirmed\n" << endl;
    
    }else{
            cout << "Invalid Ticket Number!";
        }
    
    }


// functions to cancel ticket
void cancelticket(){
   if(!ticketBooked){
    cout << "\n No ticket has been booked yet.";
    return;
   }

   int tno;
   
    cout << "Enter the ticket number: ";
    cin >> tno;
    if(tno ==ticketNo){
        ticketBooked = false;
        totalSeats++;

        cout << "Ticket Cancelled successfully.\n";
    }else{
        cout << "Invalid Ticket Number!.\n";
    }


   
} 


int main(){
    int choice;

    do{
        cout << "\n=====> TICKET BOOKING SYSTEM <=====\n";
        cout << "1. Book ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Ticket\n";
        cout << "4. Exit\n";
        cout << "Available Seats: " << totalSeats << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                bookTicket();
                break;
            
            case 2:
                cancelticket();
                break;  
                
            case 3:
               viewTicket();
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
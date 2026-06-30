//Write a program to Create library management system.
#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

    int bookID[MAX];
    string title[MAX];
    string author[MAX];
    bool issued[MAX];
 
int totalBooks = 0;

// function to add book
void addBook(){

    cout << "\nEnter Book ID: ";
    cin >> bookID[totalBooks];

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin,title[totalBooks]);


    cout << "Enter Auther Name: ";
    getline(cin,author[totalBooks]);

    issued[totalBooks] = false;

    totalBooks++;

    cout << "\nBooks Added Successfully!\n";
}

// function to display Books
void displayBooks(){
    
    if(totalBooks == 0){
        cout << "\nNo record found!\n";
        return;
    }

    cout << "\n-----> LIBRARY RECORD <-----\n ";

    for(int i = 0; i < totalBooks ; i++){

        cout << "\nBook " << i+1 << endl;
        cout << "Book ID     : " << bookID[i]<< endl; 
        cout << "Title       : " << title[i] << endl;
        cout << "Author      : " << author[i] << endl;
       
        if(issued[i]){
            cout << "Status :  Issued.\n";
        }else{
            cout << "Status :  Available.\n";
        }
    }
}


// functions to search student
void searchBook(){
    int Id;
   
    cout << "Enter ID to search: ";
    cin >> Id;

    for (int i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == Id){
            cout << "\nBook Found\n";
             cout << "Book ID     : " << bookID[i] << endl; 
             cout << "Name        : " << title[i] << endl;
             cout << "Age         : " << author[i] << endl;
             
          if(issued[i]){
            cout << "Status :  Issued.\n";
          }else{
            cout << "Status :  Available.\n";
          }
             
          return ;
        }
    }

   cout << "Book Not Found!.\n";
} 

// function to Issue book
void issueBook(){
    int Id ;

    cout << "\nEnter Book Id to issue: ";
    cin >> Id;

    for (int i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == Id){

            if(issued[i]){
                cout << "Book Already Issued!\n";
            }else{
                issued[i] = true;
                cout << "Book Issued Successfully.\n";
            }
            return ;
    }

}
        cout << "Book Not Found!\n";
    
    
}


// function to delete student
void returnBook(){
    int Id;

    cout << "\nEnter Book ID to return: ";
    cin >> Id;

    for (int i = 0; i < totalBooks; i++)
    {
        if(bookID[i] == Id){
            if(!issued[i]){
                cout << "Book is Already Available.\n";
            }else{
                issued[i] = false;
                cout << "Book Returned Successfully.\n";
            }

            return ;
        }
    }

        cout << "Book Not Found!\n";
    }
    


int main(){
    int choice;

    do{
        cout << "\n=====> LIBRARY MANAGEMENT SYSTEM <=====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Book\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addBook();
                break;
            
            case 2:
                displayBooks();
                break;  
                
            case 3:
                searchBook();
                break;    
            
            case 4:
                issueBook();
                break;    
            
            case 5:
                returnBook();
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
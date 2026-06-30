//Write a program to Create bank account system.
#include<iostream>
#include<string>
using namespace std;

    int pin;
    string name;
    int accountNo;
    float balance;
    
    bool accountCreated = false;
// function to Create account
void createAccount(){

    cout << "\nEnter Account No: ";
    cin >> accountNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin,name);


    cout << "Create 4-digit PIN: ";
    cin >> pin;

    cout << "Enter the Initial Balance: ";
    cin >> balance;

    cout << "\nAccount Created Successfully!\n";
}

// function Login page
bool login(){
    int enteredPin ;

    cout << "\nEnter PIN: \n";
    cin >> enteredPin;

    if(enteredPin == pin){
      return true;
    }else{
        cout << "Incorrect PIN!\n";
        return false;
    }
   
}


// functions for deposit 
void deposit(){
    float amount;

    cout << "Enter the Amount to deposit: ";
    cin >> amount;

    balance += amount;

    cout << "Amount Deposited Successfully.\n";
    cout << "Current Balance: " << balance << endl;

    
    }
 

// function for withdrawal
void Withdraw(){
    float amount;

    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if(amount <= balance){

        balance -= amount;
        cout << "Withdrawal Successfully.\n";
        cout << "Updated Amount: " << balance << endl;
    }else{

        cout << "Insufficient Amount!\n";
    }
    
}


// function to Check balance
void checkBalance(){
   cout << "\nAccount Number: " << accountNo << endl;
   cout << "Account Holder: " << name << endl;
   cout << "Current Balance: " << balance << endl; 
}

int main(){
    int choice;

    do{
        cout << "\n=====> BANK ACCOUNT SYSTEM <=====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                if(!createAccount){
                    cout << "Account Already Exists!";
                }else{
                    createAccount();
                }
                break;
            
            case 2:
                if(accountCreated){
                    
                    cout << "Please Create an account first.\n ";
                }else if(login()){

                     deposit();

                } 
               
                break;  
                
            case 3:
                if(accountCreated){
                    
                    cout << "Please Create an account first.\n ";
                }else if(login()){

                     Withdraw();

                } 
                break;    
            
            case 4:
                checkBalance();
                break;      

            case 5:
                cout << "\n Thank you for using the BANK ACCOUNT SYSYTEM!\n";
                break;    

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";    
        }

    }while(choice != 5);

    return 0;
}

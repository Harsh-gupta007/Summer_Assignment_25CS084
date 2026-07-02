//Write a program to Create menu-driven calculator.
#include<iostream>
using namespace std;

int num1,num2;

// Function to add two numbers
void addition(){
    int num1 , num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition is: " << num1 + num2 << endl;

}

// Function to subtract two numbers
void difference(){
    int num1 , num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Difference is: " << num1 - num2 << endl;
    
}

// Function to multiply two numbers
void Product(){
    int num1 , num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Product is: " << num1 * num2 << endl;
    
}

// Function to divide two numbers
void division(){
    int num1 , num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if(num2 == 0){
        cout << "Division by zero is not possible!\n";
    }else{
    cout << "Division is: " << num1 / num2 << endl;
    }
}

int main(){
    int choice;

     do {
        cout << "\n===== MENU DRIVEN CALCULATOR =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        

        switch(choice){
            case 1:
                  addition();
                  break;
            
            case 2:
                  difference();
                  break;

            case 3:
                  Product();
                  break;

            case 4:
                  division();
                  break;
                  
            case 5:
                  cout << "\nThankyou for using the menu-driven calculator.\n";

            default:
                  cout << "\nInvalid Output!\n";      
        }



        } while(choice!=5);

        return 0;

}

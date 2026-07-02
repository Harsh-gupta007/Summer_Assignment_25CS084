//Write a program to Create menu-driven string operations system.
//Write a program to Create menu-driven array operations system.
#include<iostream>
#include<string>
using namespace std;

string str1,str2;

// function to enter string
void enterString(){
    cin.ignore();
    
    cout << "Enter the first string: ";
    getline(cin,str1);

    cout << "Enter the second string: ";
    getline(cin,str2);
    
}

// function to display String
void displayString(){
    
   cout << "First string: " << str1 << endl;
   cout << "Second string: " << str2 << endl;
}


// functions to find string length
void stringLength(){
    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;
}

// function to copy string
void copyString(){
    str2 = str1;
    cout << "First string copied into second string.\n";
    cout << "Second string: " << str2 << endl;  
}


// function to concatenate string
void concatenateString(){
    cout << "Concatenate String: " << str1 + str2 << endl;
}

// function to compare string
void compareString(){
   if(str1 == str2){
    cout << "Both Strings are equal.\n";

   }else{
    cout << "Both Strings are not equal.\n";
   }
    
}

// function to reverse string
void reverseString(){
    string rev = str1;

    for (int i = 0,j = rev.length()-1; i < j; i++,j--)
    {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }

    cout << "Reversed First String: " << rev << endl;
}



int main(){
    int choice;

    do{
        cout << "\n=====> MENU <=====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Copy string\n";
        cout << "5. Concatenate string\n";
        cout << "6. Compare string\n";
        cout << "7. Reverse first string\n";
        cout << "8. Exit\n";


        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                enterString();
                break;
            
            case 2:
                displayString();
                break;  
                
            case 3:
                stringLength();
                break;    
            
            case 4:
                copyString();
                break;    
            
            case 5:
                concatenateString();
                break;    

            case 6:
                compareString();
                break;    

            case 7:
                reverseString();
                break;
                
            case 8:
                cout << "Thank you!\n";
                
                break;
                
            default:
                cout << "Invalid Choice!\n";    
        }

    }while(choice != 8);

    return 0;
}
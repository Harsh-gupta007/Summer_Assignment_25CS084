//Write a program to Create inventory management system.
#include<iostream>
#include<string>
using namespace std;

string productName;
int productID;
int quantity;
float price;
bool productAdded = false;

// function to add product
void addProduct(){
    if(productAdded){
        cout << "\nProduct already exists!\n";
        return;
    }

    cout << "\nEnter Product ID: ";
    cin >> productID;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin,productName);


    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter the price: ";
    cin >> price;

    productAdded = true;

    cout << "\nProduct Added Successfully!\n";
}

// function to display all products
void displayProduct(){
    
    if(!productAdded){
        cout << "\nNo Product found!\n";
        return;
    }

    cout << "\n-----> Product Details <-----\n ";

        cout << "\nProduct " << endl;
        cout << "Product ID    : " << productID << endl; 
        cout << "Product Name  : " << productName << endl;
        cout << "Quantity      : " << quantity << endl;
        cout << "Price         : " << price << endl;
    
}

// function to update Product
void updateProduct(){
    if(!productAdded){
        cout << "\nNo product found!\n";
        return;
    }


    cout << "Enter New Quantity: ";
    cin >> quantity;

    cout << "Enter New price: ";
    cin >> price;


    cout << "\nProdcut Added successfully!\n";

}


// function to delete Product
void deleteProduct(){
    if(!productAdded){
        cout << "\nNo product found!\n";
        return;
    }

    productAdded = false;

    cout << "\nProduct Deleted Successfully!\n";
    
}

int main(){
    int choice;

    do{
        cout << "\n=====> INVENTORY MANAGEMENT SYSTEM <=====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Product\n";
        cout << "3. Update Product\n";
        cout << "4. Delete Product\n";
        cout << "5. Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addProduct();
                break;
            
            case 2:
                displayProduct();
                break;  
            
            case 3:
                updateProduct();
                break;    
            
            case 4:
                deleteProduct();
                break;    

            case 5:
                cout << "\n Thank you!\n";
                break;    

            default:
                cout << "\nInvalid Choice!\n";    
        }

    }while(choice != 5);

    return 0;
}
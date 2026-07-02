//Write a program to Create menu-driven array operations system.
#include<iostream>
#include<string>
using namespace std;

int arr[100];
int size = 0;

// function to create array
void createArray(){

    cout << "\nEnter number of elements: ";
    cin >> size;


    cout << "Enter " << size << " elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array created successfully!\n";
}

// function to display array
void displayArray(){
    
    if(size == 0){
        cout << "\nArray is empty!\n";
        return;
    }

    cout << "Array Elements:\n ";

    for(int i = 0; i < size ; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}


// functions to insert elements
void insertElement(){
    if(size == 100){
        cout << "Array is full!\n";
        return;
    }
    int pos, value;

    cout << "Enter position(1-" << size + 1 << "): " ;
    cin >> pos;

    if(pos < 1|| pos > size + 1){
        cout << "Invalid Position!\n";
        return;
    }

    cout << "Enter value: ";
    cin >> value;

    for (int i = size; i >+ pos; i--)
    {
       arr[i] = arr[i-1];
    }

    arr[pos -1] = value;
    size++;

    cout << "Element inserted successfully!\n";
    
}

// function to delete array
void deleteArray(){
   if(size == 0){
    cout << "Array is empty!\n";
    return;
   }

   int pos;

   cout << "Enter the position to delete(1-" << size << "): ";
   cin >> pos;

   if(pos< 1 || pos > size){
    cout << "Invalid Position!\n";
    return;
   }

   for (int i = pos-1; i < size; i++)
   {
    arr[i] = arr[i + 1];
   }

   size++;

   cout << "Element deleted successfully!\n";
}


// function to search element
void searchElement(){
    if(size == 0){
        cout << "Array is empty!\n";
        return;
    }

    int value;
    bool found = false;

    cout << "Enetr elements to search: ";
    cin >> value;

    for (int i = 0; i < size; i++)
    {    
        if(arr[i] == value){
        cout << "Element found at position " << i + 1 << endl;
        found = true;
        break;
    }
    
}

if(!found){
    cout << "Element not found!\n";}
}

// function to find maximum
void findMax(){
    if(size == 0){
        cout << "Array is empty!\n";
        return;
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    
}

// function to find minimum
void findMin(){
    if(size == 0){
        cout << "Array is empty!\n";
        return;
    }

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Minimum element = " << min << endl;
    
}

// function to sort the array
void sortArray(){
     if(size == 0){
        cout << "Array is empty!\n";
        return;
    }

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size - i - 1; j++)
      {
       if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
       }
      }
      
    }
    
    cout << "Array sorted successfully!\n";
}

int main(){
    int choice;

    do{
        cout << "\n=====> MENU <=====\n";
        cout << "1. Creat array\n";
        cout << "2. Display array\n";
        cout << "3. insert element\n";
        cout << "4. Delete elements\n";
        cout << "5. Search element\n";
        cout << "6. Find maximum\n";
        cout << "7. Find minimum\n";
        cout << "8. Sort array\n";
        cout << "9. Exit\n";


        cout << "Enter your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                createArray();
                break;
            
            case 2:
                displayArray();
                break;  
                
            case 3:
                insertElement();
                break;    
            
            case 4:
                deleteArray();
                break;    
            
            case 5:
                searchElement();
                break;    

            case 6:
                findMax();
                break;    

            case 7:
                findMin();
                break;
            
            case 8:
                sortArray();
                break;
                
            case 9:
                cout << "Thank you!\n";
                break;
                
            default:
                cout << "Invalid Choice!\n";    
        }

    }while(choice != 9);

    return 0;
}

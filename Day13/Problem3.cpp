//Write a program to Find largest and smallest element
#include<iostream>
using namespace std;

int main(){
    int size;

    // input the size of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    int numbers[size];

    // input array elements
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];

    }

    // assume the first element is both largest and smallest
    int largest = numbers[0];
    int smallest = numbers[0];
    
    // find the largest and smallest elements
    for (int i = 0; i < size; i++)
    {
        if(numbers[i] > largest){
            largest = numbers[i];
    
        }

        if( numbers[i] < smallest){
            smallest = numbers[i];
        }
    }
    

    // display the results
    cout << "Largest element = " << largest << endl;
    cout << "Smallest elements = " << smallest << endl;

    return 0;
    
    
}
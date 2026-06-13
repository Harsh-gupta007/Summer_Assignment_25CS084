//Write a program to Count even and odd elements
#include<iostream>
using namespace std;

int main(){
    int size;

    // input the size of the array
    cout << "Enter the number of elements: ";
    cin >> size;

    int numbers[size];
    int evenCount = 0, oddCount = 0;

    // input array elements
    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // count even and odd elements
    for (int i = 0; i < size; i++)
    {
        if(numbers[i] % 2 == 0){

            evenCount++;

        }else{

            oddCount++;
        }
    }


    // display the results
    cout << "Number of even elements = " << evenCount << endl;
    cout << "Number of odd elements = "  << oddCount << endl;


    return 0;
    
    
}
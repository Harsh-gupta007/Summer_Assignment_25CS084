//Write a program to Find sum and average of array.
#include<iostream>
using namespace std;

int main(){
    int size, sum = 0;
    double average;

    // input the size of the array
    cout << "Enter the number of elenmts: ";
    cin >> size;

    int numbers[size];

    // input array elements and calculate sum
    cout << "Enter " << size << " elenmts: " << endl;
    for (int i = 0; i < size; i++)
    {
       cin >> numbers[i];
       sum += numbers[i];

    }

    // calculate average
    average = (double)sum / size;

    // display result
    cout << "sum of array elements = " << sum << endl;
    cout << "average of array elements: " << average << endl;

    return 0;
    
}
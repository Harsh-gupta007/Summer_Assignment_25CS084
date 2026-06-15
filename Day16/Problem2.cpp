//Write a program to Find maximum frequency element.
#include<iostream>
using namespace std;

int main(){
    int n,key, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
    cin >> arr[i];
}
    int maxFreq = 0,maxElement;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]){
                count ++;
            }
        }
        
        if(count > maxFreq){
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum Frequency element = " << maxElement << endl;
    cout << "frequency = " << maxFreq << endl;
    
    return 0;
}
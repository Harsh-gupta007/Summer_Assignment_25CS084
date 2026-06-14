//Write a program to Frequency of an element
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

cout << "Enter the element whose frequency you want to find: ";
cin >> key;

// count frequency
for( int i = 0; i< n; i++){
    if(arr[i] == key){
        count++;
    }
}

cout << "Frequency of " << key << " is " << count << endl;

    return 0;
}
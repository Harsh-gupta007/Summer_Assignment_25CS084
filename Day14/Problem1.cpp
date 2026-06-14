//Write a program to Linear search.
#include<iostream>
using namespace std;

int main(){
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the elements to search: ";
    cin >> key;

    int position = -1;

    //linear search
    for (int  i = 0; i < n; i++)
    {
      if( arr[i] == key){
        position = i;
        break;
      }
    }

    if(position != -1){
        cout << "Element fount at position " << position + 1 << endl;
    }else{
        cout << "Element not found" << endl;
    }
    

    return 0;
}
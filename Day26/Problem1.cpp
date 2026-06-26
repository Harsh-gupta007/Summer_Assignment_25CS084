//Write a program to Create number guessing game.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int secretNumber, guess, attempts = 0;

    // Generate a random number between 1 and 100 
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "=====> NUMBER GUESSING GAME <=====\n";
    cout << "I have choosen a number between 1 and 100.\n";
    cout << "Try to guess it!\n\n";

    do{
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if(guess > secretNumber){
            cout << "Too High! Try again.\n";
        }else if(guess < secretNumber){
            cout << "Too Low! Try again.\n";
        }else{
            cout << "Congratulatins! You guessed the correct number.\n";
            cout << "Total attempts: " << attempts << endl;
        }

    }while(guess != secretNumber);

    return 0;
}
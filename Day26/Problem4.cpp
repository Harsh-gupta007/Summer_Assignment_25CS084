#include<iostream>
using namespace std;

int main(){
  int score = 0, answer;

  cout << "=====> QUIZ APPLICATION <=====\n\n";

  // Question 1
  cout << "Q1. What is the capital of India?\n";
  cout << "1. Mumbai\n2. Lucknow\n3. Delhi\n4. kolkata\n";
  cout << "Enter your answer:- ";
  cin >> answer;

  if(answer == 3){
    score++;
  cout << "Answer is correct!" << endl;
  }else{
    cout << "Entered Answer is not correct!" << endl;
  }

  cout << "\n";

  // Question 2
  cout << "Q2. How many continents are there on Earth?\n";
  cout << "1. Four\n2. Three\n3. Five\n4. Seven\n";
  cout << "Enter your answer:- ";
  cin >> answer;

  if(answer == 4){
    score++;
    cout << "Answer is correct!" << endl;
  }else{
    cout << "Entered Answer is not correct!" << endl;
  }

  cout << "\n";

  // Question 3
  cout << "Q3. Which planet is known as the red Planet?\n";
  cout << "1. Earth\n2. Jupitar\n3. Mars\n4. Uranus\n";
  cout << "Enter your answer:- ";
  cin >> answer;

  if(answer == 3){
    score++;
  cout << "Answer is correct!" << endl;
  }else{
    cout << "Entered Answer is not correct!" << endl;
  }

  cout << "\n";

  // Question 4
  cout << "Q2. What is the result of 20*7(60/3)+4 ?\n";
  cout << "1. 2804\n2. 4983\n3. 456\n4. 735\n";
  cout << "Enter your answer:- ";
  cin >> answer;

  if(answer == 1){
    score++;
  cout << "Answer is correct!" << endl;
  }else{
    cout << "Entered Answer is not correct!" << endl;
  }

  cout << "\n";

  // Question 5
  cout << "Q2. How many Days are there in a Week?\n";
  cout << "1. Four\n2. Three\n3. Seven\n4. Five\n";
  cout << "Enter your answer:- ";
  cin >> answer;

  if(answer == 3){
    score++;
  cout << "Answer is correct!" << endl;
  }else{
    cout << "Entered Answer is not correct!" << endl;
  }

  cout << "\n";

  cout << "\n=====> RESULT <=====\n";
  cout << "Your Score: " << score << " / 5\n";

  if(score == 5){
    cout << "Excellent! You got all answers correct.\n";
  }else if(score >= 3){
    cout << "Good Job!\n";
  }else{
    cout << "Better Luck Next Time!\n";
  }

  return 0;

}
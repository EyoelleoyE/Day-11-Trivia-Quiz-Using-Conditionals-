#include <iostream>
using namespace std;

int main() {
  int answer;
  int score = 0;
  cout<<"Q1) What is the name of the world's longest river? \n\n1) Missouri River\n2) Nile\n3) Amazon River\n4) Yangtze River";
  cout<<"\n";
  cout<<"Answer: ";
  cin>>answer;

  if (answer == 2) {
    cout<<"Correct.";
    score++;
  }

  else {
    cout<<"Incorrect";
  }

  cout<<endl;
  cout<<endl;

  int answer_1;
  cout<<"Q2) How many bones are in the human body? \n\n1) 92\n2) 150\n3) 206\n4) 10 ";
  cout<<"\n";
  cout<<"Answer: ";
  cin>>answer_1;


  if (answer_1 == 3) {
    cout<<"Correct.\n";
    score++;
  }

  else {
    cout<<"Incorrect";
  }

  cout<<endl;
  cout<<endl;


  string answer_2;
  cout<<"Which food never spoils?";
  cout<<"\n";
  cout<<"Answer: ";
  cin>>answer_2;

  if (answer_2 == "honey" || answer_2 == "Honey") {
    cout<<"Correct\n";
    score++;
  }
  else {
    cout<<"Incorrect\n";
  }

  if (score==3) {
    cout<<"You got 3/3. Excellent!!!";
  }

  else if (score==2) {
    cout<<"You got 2/3. Very Good!";
  }

  else if (score==1) {
    cout<<"You got 1/3. You will improve don't worry. Keep Going!!!";
  }

  else {
    cout<<"You got 0/3. Try AGAIN!!!!";
  }


  cout<<endl;
  cout<<endl;


}

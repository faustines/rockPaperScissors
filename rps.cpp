#include <iostream>
#include <string>
using namespace std;

int main() {
  int player;
  int playerScore;
  int computerScore;
  string playerChoice;
  //player choice

while (playerScore != 3 and computerScore != 3) {
  cout << "Enter rock, paper, or scissors:";
  cin >> playerChoice;

  if (playerChoice == "rock") {
    player = 1;
  }else if (playerChoice == "paper") {
    player = 2;
  }else if (playerChoice == "scissors"){
    player = 3;
  }

  //computer choice
  int computer;
  string type;
  computer = rand() % (3+1);
  if (computer == 1) {
    type = "rock";
  }else if (computer == 2) {
    type = "paper";
  }else if (computer == 3) {
    type = "scissors";
  }else {
    type = "error";
  }

  cout << "Computer choses " << type <<"\n";

  if (player == 1 and computer == 3){
    cout << "You Win!\n";
    playerScore += 1;
  }else if (player == 3 and computer ==1){
    cout << "You Lose!\n";
    computerScore += 1;
  }else if (player == computer){
    cout << "It's a tie!\n";
  }else if (player > computer){
    cout << "You Win!\n";
    playerScore += 1;
  }else{
    cout << "You Lose!\n";
    computerScore += 1;
  }

  cout << "Computer has a score of " << computerScore << "\n";
  cout << "You have a score of " << playerScore << "\n";
}

  return 0;
}

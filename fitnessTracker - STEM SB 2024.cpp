#include <iostream>
#include <string>

using namespace std;

int main() {

  
  //Ask user for their name
  string name;
  cout << "What is your name? ";
  cin >> name;

  //ask user for gender
  char gender;
  cout << "What is your gender? (M/F) ";
  cin >> gender; 

    //Ms and Mr if statement
    if (gender == 'F'){
    cout << "Ms." << name << " is a wonderful name! ";
    }
  if (gender == 'M'){
    cout << "Mr." << name << " is an interesting name! ";
  }
  if (gender != 'M' && gender != 'F') {
    cout << "Invalid input. Please enter M or F.";
  }
  
  //Ask user for an average number of steps they get per day
  int steps;
  cout << "Enter the average number of steps you get per day: ";
  cin >> steps;

  if (steps < 10000){
    cout << "You should be working to go outside and get some exercise. ";
  } if (steps > 10000) {
    cout << "You are doing a great job of exercising! ";
  }
  
  // sleep
   double sleep;

  cout << "Enter the amount hours of sleep you get every night: "; 
  cin >> sleep; 
  if (sleep < 7){
  cout << "You need more sleep. ";
 }
  if (sleep >= 7 and sleep <= 11){
    cout << "Nice! You are well rested! "; 
  }

  if (sleep > 11){
    cout << "That amount of sleep is not necessary "; 
  }
  //ask user for favorite exercise
  string favoriteExercise;
  cout << "What is your favorite exercise? ";
  cin >> favoriteExercise;

  if (favoriteExercise == "walking" || favoriteExercise == "running" || favoriteExercise == "swimming" || favoriteExercise == "weight lifting" || favoriteExercise == "calisthenics" || favoriteExercise == "soccer" || favoriteExercise == "basketball"|| favoriteExercise == "tennis" || favoriteExercise == "volleyball"){
    cout << "That is a great exercise!";
  }
     
  return 0; 
}
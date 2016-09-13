#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;
main() {
int secret, guess, guesses;
bool playagain = true;
char CC[10];
//this while loop manages the entire game
do {
//seeds the random number generator with the current system time.
srand (time(NULL));
secret = rand() % 100 + 1;

cout << "Guess the number (from 1 to 100): ";
//This while loop manages the the users' guesses
do {
cin >> guess;
guesses++;
//
//these statements determine if the users' guesses are too high or too low or are equal
if(secret < guess)
	cout << "The secret number is lower";
else if (secret > guess) 
	cout << "The secret number is higher";
} while(secret!=guess);
//output statements
cout << "Congrats!";
cout << "It took you " << guesses << " guesses to get the number!";

cout << "Do you want to play again? (y/n)";
cin >> CC;
//this checks if the user wants to play again or wants to quit the game:
if(!strcmp(CC, "y")) {
playagain = true;
}
else {
playagain = false;
}
}while(playagain == true);

}

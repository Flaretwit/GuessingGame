#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;
	
int main() {
	bool valid;
	int secret, guess, guesses;
	guesses = 0;
	bool playagain = true;
	char CC[10];
	//this while loop manages the entire game
	do {
		//seeds the random number generator with the current system time.
		srand (time(NULL));
		secret = rand() % 100 + 1;
		cout << "Guess the number (from 1 to 100): \n";
		//This while loop manages the users' guesses
		do {
		valid = false;
		while(!valid) {
			cout << "Try to guess it: \n";
		if(!cin) {
			
			cout << "Incorrect input. \n";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else  {
		valid = true;
		}
		}
		cin >> guess;
		guesses++;
		//these statements determine if the users' guesses are too high or too low or are equal
		if(secret < guess)
			cout << "The secret number is lower\n";
		else if (secret > guess) 
			cout << "The secret number is higher\n";
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
	
		return 0;
	}




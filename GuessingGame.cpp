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

do {
srand (time(NULL));
secret = rand() % 100 + 1;
cout << "Guess the number (from 1 to 100): ";
do {
cin >> guess;
guesses++;
if(secret < guess)
	cout << "The secret number is lower";
else if (secret > guess) 
	cout << "The secret number is higher";
} while(secret!=guess);

cout << "Congrats!";
cout << "It took you " << guesses << " guesses to get the number!";

cout << "Do you want to play again? (y/n)";
cin >> CC;

if(!strcmp(CC, "y")) {
playagain = true;
}
else {
playagain = false;
}
}while(playagain == true);

}

// Ryan Bachman
// CSC215 - C/C++ Programming I
// University of Advancing Technology
// Final Project
// November 10, 2018

#include "pch.h"
#include "Functions Header.h"
#include <iostream>
#include <string>

using namespace std;

// Main function.
int main()
{
	PlayerOne player;
	// Sets playAgain to y so the loop can play at least once.
	char playAgain = 'y';
	// Loop everything so that the game can be replayed.
	while (playAgain == 'y')
	{
		cout << "Welcome to your own interactive story adventure.\n\n";
		cout << "Answer the questions below to help make your story unique.\n\n";
		// Asks the user for their name and sets their input to name.
		// Calls SetPlayerName function to get user input and set player name into class.
		player.SetPlayerName();
		// Asks the user for their age and sets their input to the integer age.
		// Uses getline to get user input and set player age into class.
		player.SetPlayerAge();
		// Asks the user what their favorite body part is and sets their input to favoriteAppendage.
		// Uses getline to get user input and set player favoriteAppendage into class.
		player.SetPlayerAppendage();
		// Asks the user for a verb in current tense and sets their input to verb.
		// Uses getline to get user input and set player name into class.
		player.SetPlayerVerb();
		// Clears the screen so it gets right to the story.
		system("cls");
		// Tell player how much health they will be starting with
		player.DisplayHealth();
		// Begins telling the story, passing in the arguments collected from the functions above.
		storyTelling(player.name, player.age, player.favoriteAppendage, player.verb);
		// Calls the playAnother function at the end of the story to ask if the player wants to play again.
		playAgain = playAnother(playAgain);
		// Clears the screen for a fresh new story or end of game.
		system("cls");
	}

	return 0;
}
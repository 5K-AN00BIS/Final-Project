//
// Created by Ryan Bachman on 11/10/2018.
//
#ifndef RYAN_BACHMAN_FINAL_PROJECT
#define RYAN_BACHMAN_FINAL_PROJECT

// Preprocessor directives
#include "pch.h"
#include <string>

// Global declarations
using namespace std;

// Parent class definition for Player object.
class Player
{
// Begin public section.
public:
	// Integers
	int age;

	// Strings
	string name;
	string favoriteAppendage;
	string verb;
};

// Child class definition for Protagonist object for combat.
class PlayerOne : public Player
{
// Begin public section.
public:
	// Functions for player
	void DisplayHealth();
	void SetPlayerName();
	void SetPlayerAge();
	void SetPlayerAppendage();
	void SetPlayerVerb();

// Begin private section.
private:
	int m_Health = 100;

	// Function to retrieve health although private.
	int GetHealth() const;
};

// Function prototype. Telling the story to the player.
int storyTelling(string name, int age, string favoriteAppendage, string verb);
// Function prototype. This asks and tracks whether the player wants to keep playing.
char playAnother(char playAgain);

#endif // RYAN_BACHMAN_FINAL_PROJECT
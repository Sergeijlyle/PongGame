#pragma once
enum APP_STATE
{
	TERMINATE,

	ENTER_SPLASH, SPLASH, // Intro Screen
	ENTER_DEPART, DEPART, // Say  goodbye!
	ENTER_TITLE, TITLE, // main menu
	ENTER_GAME, GAME, // Game state
};
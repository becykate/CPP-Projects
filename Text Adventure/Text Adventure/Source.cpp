#include <iostream>
#include "console.h"

int main()
{
	int choice1 = 0;
	int choice11 = 0;
	int choice12 = 0;
	int choice121 = 0;
	int choice122 = 0;
	int choice13 = 0;
	int choice21 = 0;
	int choice31 = 0;

	Console::setWindowTitle("RuneScape Text Adventure");

	// Welcome to Runescape!

	std::cout << "You arrive from Tutorial Island to a town known as Lumbridge\n";
	std::cout << "Your adventure is now in your hands... What will you choose?\n";

	std::cout << "1) Explore Lumbridge\n";
	std::cout << "2) Engage in combat!\n";
	std::cout << "3) Adventure to distant lands\n";
	
	std::cin >> choice1;

	while (choice1 < 1 || choice1 > 3) {
		std::cout << "Invalid input, what will you choose?\n";
		std::cin >> choice1;
	}
	switch (choice1) {
	case 1:
		std::cout << "You look at your surroundings, and find yourself stood in front of a large castle courtyard.\n";
		std::cout << "Outside of the courtyard is a small, bustling town.\n";
		std::cout << "Where would you like to explore?\n";
		std::cout << "1) The Castle\n";
		std::cout << "2) The Courtyard\n";
		std::cout << "3) The Town\n";
		std::cin >> choice11;
		while (choice11 < 1 || choice11 > 3) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice11;
		}
		break;
	case 2:
		std::cout << "Combat!! You are bloodthirsty and have your weapons at the ready!... Except they look fairly flimsy... Ah well. \n";
		std::cout << "You hold in your hands a bow, a sword and shield, and some runes.\n";
		std::cout << "which will be your loyal weapon?\n";
		std::cout << "1) The bow and arrows\n";
		std::cout << "2) The sword and shield\n";
		std::cout << "3) The magic runes\n";
		std::cin >> choice21;
		while (choice21 < 1 || choice21 > 3) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice21;
		}
		break;
	case 3:
		std::cout << "You don't want to waste a second more, your adventure begins now! Wherever will you decide to go?\n";
		std::cout << "You see a signpost in the town, Where will you follow?\n";
		std::cout << "1) 'West to Draynor Village - Beware the goblins!'\n";
		std::cout << "2) 'North across the bridge to Varrock' \n";
		std::cin >> choice31;
		while (choice31 < 1 || choice31 > 2) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice31;
		}
		break;


	}

	// Exploring Lumbridge

	switch (choice11) {
	case 1:
		std::cout << "You walk through the front doors of the castle and find yourself in a corridor.\n";
		std::cout << "To your left you can hear sounds of desperation coming from what seems to be a kitchen.\n";
		std::cout << "Would you like to see what's wrong, or continue upwards and explore?\n";
		std::cout << "1) Peer into the kitchen\n";
		std::cout << "2) Continue up the spiral starecase";
		std::cin >> choice12;
		while (choice12 < 1 || choice12 > 2) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice12;
		}
		break;

	case 2:
		std::cout << "In the courtard, leading up to the castle the path is lined with bushes.\n";
		std::cout << "Two large fountains are in the middle of the space, one on either side of the path.\n";
		std::cout << "You find that you are not alone.\n";
		std::cout << "Amongst the new, and respawned, are a number of unique characters.\n";
		std::cout << "Would you like to interact?\n";
		std::cout << "1) Yes, The man in the red shirt looks interesting\n";
		std::cout << "2) Nope\n";
		std::cin >> choice13;
		while (choice13 < 1 || choice13 > 2) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice13;
		}
		break;

	case 3:
		std::cout << "You don't want to waste a second more, your adventure begins now! Wherever will you decide to go?\n";
		std::cout << "You see a signpost in the town, Where will you follow?\n";
		std::cout << "1) 'West to Draynor Village - Beware the goblins!'\n";
		std::cout << "2) 'North across the bridge to Varrock' \n";
		std::cin >> choice31;
		while (choice31 < 1 || choice31 > 2) {
			std::cout << "Invalid input, what will you choose?\n";
			std::cin >> choice31;
			while (choice31 < 1 || choice31 > 2) {
				std::cout << "Invalid input, what will you choose?\n";
				std::cin >> choice31;
			}
			break;
		}
	}

		switch (choice12) {
		case 1:
			std::cout << "You poke your head around the door of the kitchen and see a very dishevelled chef.\n";
			std::cout << "He looks incredibly stressed and like he needs some help, would you like to offer your services?\n";
			std::cout << "1) Sure, why not?\n";
			std::cout << "2) No thanks, I cant cook \n";
			std::cin >> choice121;
			while (choice121 < 1 || choice121 > 2) {
				std::cout << "Invalid input, what will you choose?\n";
				std::cin >> choice121;
			}
			break;
		case 2:
			std::cout << "You find yourself in a long corridor with two doors branching off.\n";
			std::cout << "Would you like to explore or continue up the stairs?\n";
			std::cout << "1) Open one of the doors!\n";
			std::cout << "2) Movin' on up!\n";
			std::cin >> choice122;
			while (choice122 < 1 || choice122 > 2) {
				std::cout << "Invalid input, what will you choose?\n";
				std::cin >> choice122;
			}
			break;
		}
	
}
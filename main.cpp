//extra library includes
#include <iostream> // input output stream
#include <string>
#include "Puzzles.h"
#include "Character.h"

using namespace std;



void main()
{
	// all of our starter code will start here
	cout << "Hello there traveler!" << endl;
	cout << "What is your name?" << endl;
	// variable to hold name of player
	string name;
	cin >> name;

	cout << "Ready to enter the dungeon? " << name << endl;

	cout << "How old are you?" << endl;
	int age;
	cin >> age;
	cout << "So you are " << age << " years old!" << endl;

	cout << "What is your favorite number: " << endl;
	int favNum;
	cin >> favNum;
	cout << "Well you are now stuck in this dungeon for  " << favNum << " years!" << endl;

	int newAge = age + favNum;
	cout << "Its time to escape before you turn " << newAge << " years old!" << endl;

	if (newAge >= 80)
	{
		cout << "You might not even live to this age!" << endl;
	}

	// if favNum is == to 64 then output message
	if (favNum == 11)
	{
		cout << "Nice favorite numbwer by the way!" << endl;
	}

	// hero stats
	int hp = 0, str = 0, def = 0, agi = 0;

	bool characterSetup = false;

	while (characterSetup == false)
	{
		cout << "What type of character are you>" << endl;
		cout << "1 - Berserker" << endl;
		cout << "2 - Paladin" << endl;
		cout << "3 - Samurai" << endl;

		int choice;
		cin >> choice;

		if (choice == 1)
		{
			hp = 100;
			str = 10;
			def = 2;
			agi = 3;
		}
		else if (choice == 2)
		{
			hp = 120;
			str = 4;
			def = 5;
			agi = 1;
		}
		else if (choice == 3)
		{
			hp = 80;
			str = 3;
			def = 1;
			agi = 10;
		}
		else
		{
			cout << "Invalid Choice! Try again ... " << endl;
		}
		if (choice >= 1 && choice <= 3)
		{
			characterSetup = true;
		}
	}

	// Prints out stats based on Class chosen
	cout << "Stats" << endl;
	cout << "HP: " << hp << endl;
	cout << "Strength: " << str << endl;
	cout << "Defense: " << def << endl;
	cout << "Agility: " << agi << endl;

	cout << "The First gate is opening, counting down..." << endl;
	for (int i = 10; i >= 0; i--)
	{
		cout << i << "..." << endl;
	}

	// intro to functions
	cout << "in the first room stands a tall slender figure in a cloak." << endl;
	cout << "He speaks: " << endl;
	cout << "I will ask you 3 questions with various punishments if you get them wrong..." << endl;
	int dmg = puzzle1() + puzzle2(str, agi) + puzzle3(name);

	hp -= dmg;
	cout << "You took " << dmg << ". Your HP is now " << hp << endl;

	// Build an obj of class Character
	Character testCharacter;
	testCharacter.setupStats(hp, str, def, agi);
	testCharacter.displaStats();

	system("pause");
}
#include "Puzzles.h"

int puzzle1()
{
	cout << "Puzzle 1! What is 7 + 2?" << endl;
	int num;
	cin >> num;
	if (num == 9)
	{
		cout << "Correct!" << endl;
		return 0;
	}
	else
	{
		cout << "Incorrect!" << endl;
		return 9;
	}
}

int puzzle2(int x, int y)
{
	cout << "What is " << x << "+ " << y << endl;
	int num;
	cin >> num;
	if (num == x + y)
	{
		cout << "CORRECT!" << endl;
		return 0;
	}
	else
	{
		cout << "INCORRECT!" << endl;
		return 15;
	}
}
int puzzle3(string name)
{
	cout << "Puzzle 3! What is your name?" << endl;
	string n;
	cin >> n;
	if (n == name)
	{
		cout << "CORRECT!" << endl;
		return 0;
	}
	else
	{
		cout << "INCORRECT!" << endl;
		return 25;
	}
}
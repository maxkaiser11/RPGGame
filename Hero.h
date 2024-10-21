#pragma once

#include <iostream>
#include <string>
#include "Character.h"

//			Inherits from Character Class
class Hero : public Character
{
private:
	string name;
public:
	Hero();
	~Hero();

	void setName(string s);

	// replace getName() from Character
	string getName();

	void heal(int amount);
	void atkBoost(int amount);
	void defBoost(int amount);
};


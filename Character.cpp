#include "Character.h"

Character::Character()
{

}

Character::~Character()
{

}

void Character::setupStats(int _hp, int _str, int _def, int _agi)
{
	hp = _hp;
	str = _str;
	def = _def;
	agi = _agi;
}

void Character::displaStats()
{
	cout << "HP: " << hp << "/" << hp << endl;
	cout << "Strenght: " << str << endl;
	cout << "Defense: " << def << endl;
	cout << "Agility: " << agi << endl;
}

int Character::getHP()
{
	return hp;
}

int Character::getHPMax()
{
	return hpMax;
}

int Character::getAGI()
{
	return agi;
}

int Character::getDamage()
{
	return str;
}

void Character::takeDamage(int dmg)
{
	int dmgAfterDef = dmg - def;
	if (dmgAfterDef < 1)
		dmgAfterDef = 1;

	hp -= hp - dmgAfterDef;
}

string Character::getName()
{
	return "Character";
}

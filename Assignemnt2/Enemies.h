#pragma once
#include "Characters.h"
#include<iostream>
using namespace std;

class Enemies :public Characters
{
private:
	string m_name;
public:
	Enemies(string name, int hp, int atk, int def) : Characters(hp, atk, def)
	{
		m_name = name;
	}

	string getName();
	void Die() override;
	void Attack() override;

	bool isPetrified = false;
	bool isMortal = false;
};

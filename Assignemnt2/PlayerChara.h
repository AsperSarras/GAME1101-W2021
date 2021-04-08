#pragma once
#include "Characters.h"

class PlayerChara : public Characters
{
public:
	PlayerChara(int hp, int atk, int def) : Characters(hp, atk, def) {}
	
	void Attack() override;
	void Die() override;
	void DoNothing();
	void Defend();
	void UseMirror();

	bool isDefending = false;
	bool isUsingMirror = false;
	bool knowsWeakPoint = false;
	bool hasMirror = false;
};

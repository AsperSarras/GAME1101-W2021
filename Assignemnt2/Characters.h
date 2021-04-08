#pragma once

class Characters
{
private:
	int m_health;
	int m_Attack;
	int m_Defense;
public:
	Characters(int hp,int atk,int def);

	void setHealth(int);
	int getHealth();

	void setAttack(int);
	int getAttack();

	void setDefense(int);
	int getDefense();

	virtual void Die()=0;
	virtual void Attack()=0;

	bool Alive = true;
};

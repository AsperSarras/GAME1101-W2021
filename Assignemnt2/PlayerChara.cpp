#include "PlayerChara.h"
#include <iostream>
using namespace std;

void PlayerChara::Attack()
{
	cout << "You swing your weapon the best you could" << endl;
}

void PlayerChara::Die()
{
	cout << "Mama forgive me..." << endl;
	Alive = false;
}

void PlayerChara::DoNothing()
{
	cout << "Maybe if I dont move he will not attack me.." << endl;
}

void PlayerChara::Defend()
{
	cout << "Dont wanna die!" << endl;
}

void PlayerChara::UseMirror()
{
	cout << "Look.. You dont look good angry" << endl;
}

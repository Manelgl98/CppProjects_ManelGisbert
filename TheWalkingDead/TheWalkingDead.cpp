// TheWalkingDead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<ctime>

const int cantidad = 10;
enum class Weapon {
	FISTS,
	GUN,
	SHOTGUN,
	REVOLVER,
	SNIPER,
	MACHINE_GUN,
	MAX
};
class Zombie;

class Player {
public:
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie&);
	bool isAlive(Player&);
	void randGenerator();
};

class Zombie {
public:
	int distanceToPlayer;
	float speed;
	float damange;
	int life;
private:
	void attack(Player&);
	bool isAlive(Zombie&);
	void randGenerator();
	
};
void Player::attack(Zombie& z) {
	if (precision == 1.f) {
		z.life = z.life - static_cast<int>(weapon);
	}
}
bool Zombie::isAlive(Zombie& z) {
	return(z.life > 0);
}

bool Player::isAlive(Player& p) {
	return(p.life > 0);
}

void Zombie::attack(Player& p) {
	if (distanceToPlayer <= 0) {
		p.life -= damange;
	}
	else {
		distanceToPlayer--;
	}
}
void Player::randGenerator() {
	
}
void Zombie::randGenerator() {
	
}
	


int main()
{
	srand(time(nullptr));
	Player player;
	Zombie zombie[cantidad];
	bool zombiesAreAlive;
	while (player.life && zombie > 1) {
		zombiesAreAlive = false;
		for (int i = 0; i < 10; i++) {
			void attack();
		}

	}
    return 0;
}


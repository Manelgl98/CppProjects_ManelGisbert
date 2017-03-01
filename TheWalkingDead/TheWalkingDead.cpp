// TheWalkingDead.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <ctime>


enum class Weapon {
	FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX
};

class Zombie;//Forward Declaration 

class Player {
public:
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie &);
	bool isAlive() {
		return Player::life > 0;
	}
	Player() : weapon{ Weapon(rand() % int(Weapon::MAX)) }, precision{ ((rand() % 10) / 10.0f) }, life{ 100 } {
	};
};

class Zombie {
public:
	int distance_player;
	float speed;
	float damage;
	int life;
	void Attack(Player &p) {
		if (distance_player <= 0) {
			p.life -= damage;
		}
		else {
			distance_player--;
		}
	};
	bool isAlive() {
		return Zombie::life > 0;
	}
	Zombie() : distance_player{ 120 }, life{ 100 }, speed{ 100 }, damage{ 20 } {
	};
};

void Player::attack(Zombie &z) {
	z.life -= int(weapon) * precision;
}

void main() {
	srand(time(nullptr));
	Player player;
	int const numerodezombies = 10;
	Zombie arrayzombies[numerodezombies];
	bool ZombiesAreAlive;

	do {
		ZombiesAreAlive = false;
		std::cout << "Player\n" << " your life :" << player.life << " your aim :" << player.precision;
		for (int i = 0; i<numerodezombies; i++) {
			if (arrayzombies[i].isAlive()) {
				player.attack(arrayzombies[i]);
				std::cout << "Zombie\n" << " zombie life" << arrayzombies[i].life << " zombie damage" << arrayzombies[i].damage << " zombie speed" << arrayzombies[i].speed << " zombie distance" << arrayzombies[i].distance_player;
				if (arrayzombies[i].isAlive()) {
					arrayzombies[i].Attack(player);
					ZombiesAreAlive = true;
				}
			}
		}

	} while (player.isAlive() && ZombiesAreAlive);
	if (ZombiesAreAlive) {
		std::cout << "GAME OVER";
	}
	else
	{
		std::cout << "U WIN!";
	}

}

// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<stdlib.h>
#include<iostream>
#include<time.h>



enum EnemyType {
	ZOMBIE,
	VAMPIRE,
	GHOST,
	WITCH,
	MAX
};
struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};

bool operator==(const Enemy &a,const Enemy &b) {
	return a.name == b.name && a.type == b.type;
}

static Enemy CreateRandomEnemy() {
	static const int MAX_LIFE{ 500 };
	static const std::string NAMES[]{
		"Gertrudiz",
		"Pancracia",
		"Anacleto",
		"Hipolito",
		"Eustaquio",
		"Fulgencia"
	};
	return Enemy{
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof std::string)],
		rand() % MAX_LIFE
	};
}


int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };
	Enemy enemies[MAX_ENEMIES];
	{
	int i{ 0 };
	while (i < MAX_ENEMIES)
	{
		enemies[i] = CreateRandomEnemy();
		int j{ i - 1 };
		while (j >= 0)
			if (enemies[i] == enemies[j])
			{
				--i;
				break;
			};
		j--;
	};
	++i;
	}

}

std::cout << "List of enemies:\n";
for (auto &enemy : enemies)
{
	std::cout << enemy.name <<
		"is a" << enemy.getEnemyTypeString() <<
		"whose life is" << enemy.health << std::endl;
}
return 0;
}


// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<stdlib.h>



enum EnemyType {zombie,vampire,ghost,witch};
struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};

bool operator ==(Enemy a,Enemy b) {
	if (a.type == b.type && a.name == b.name ) {
		return true;
	}
	else {
		return false;
	}
}

Enemy CreateRandomEnemy() {
	srand(time(NULL));


}

int main()
{
    return 0;
}


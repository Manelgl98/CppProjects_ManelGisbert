// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<ctime>
#include<iostream>

const int cantidad = 5;


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

Enemy CreateRandomEnemy(Enemy create[]) {
	
	srand(time(NULL));

	for (int i = 0; i < cantidad; i++) {
		create[i].type = (EnemyType)rand() % 5;
		create[i].name = (char) rand() % 201;
		create[i].health = (int)rand() % 101;
	}
	
}

int main()
{
	Enemy gen[cantidad];
	
    return 0;
}


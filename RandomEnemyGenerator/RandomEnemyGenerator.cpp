// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <ctime>

enum class EnemyTipe { zombie, vampire, ghost, witch, max };

struct Enemy
{
	EnemyTipe type;

	std::string name;

	int health;

	std::string getEnemyTypeString() // funcion que te convierte al enemyType en string (CAST)
	{
		switch (type)
		{
		case EnemyTipe::zombie:		return "zombie";
		case EnemyTipe::vampire:	return "vampire";
		case EnemyTipe::ghost:		return "ghost";
		case EnemyTipe::witch:		return "witch";
		default:	return "";

		}
	}
};

bool operator == (const Enemy &type1, const Enemy &type2)	 //sobre cargar el operador "==" para comprobar el tipo y nombre de dos enemigos
{
	return type1.type == type2.type && type1.name == type2.name;
}

static Enemy CreateRandomEnemy() //funcion que te debuelve un nuevo enemigo aleatorio
{
	static const int MAX_LIFE{ 500 }; // asignamos la vida maxima de los enemigos
	static const std::string NAMES[]{ // posibles nombres de los enemigos

		"Gertru",
		"Pancracia",
		"Anacleto",
		"Hipolito",
		"Eustaqui",
		"Fulgencia",
	};

	return Enemy //retornar un enemigo con diferentes atributos
	{
		static_cast <EnemyTipe> (rand() % static_cast <int>(EnemyTipe::max)), NAMES[rand() % (sizeof NAMES / sizeof std::string)], rand() % MAX_LIFE
	};
}

void main() {
	srand(static_cast <unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };	//numero maximo de enemigos
	Enemy enemies[MAX_ENEMIES];	// fijar el maximo de arrays de enemigos

	{	//inicializacion de cada enemigo en el array
		int i{ 0 };
		while (i < MAX_ENEMIES) {

			enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };

			while (j >= 0)
				if (enemies[i] == enemies[j]) {

					--i;	// de esta forma me deshecha esta i, para despues volver a generar otra diferente
					break;
				};
			--j;
		};
		++i;
	}

	// imprimir el array de enemigos
	std::cout << "list of enemies:\n";

	for (auto &enemy : enemies) {

		std::cout << enemy.name << " is a " << enemy.getEnemyTypeString() << " whose life is " << enemy.health << std::endl;
	}
}

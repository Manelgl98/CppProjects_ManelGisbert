#include <iostream>​
#include <map>
#include <string>

void main() {
	typedef std::map<std::string, int> DicPlayer;
	DicPlayer players;
	players["Paco73"] = 500;
	players["DontKillMePlease"] = 670;
	players["ElPutoAmo"] = 14;
	players["Anonimus67_Ramon_Garcia"] = 500;
	bool correctName;

	do {
		std::cout << "Introduce name and puntuation: " << std::flush;
		std::string name;
		int points;
		std::cin >> name >> points;
		auto it = players.find(name);
		if (it != players.end()) {
			std::cout << "The username is taken" << std::endl;
			correctName = false;
		}
		else {
			players[name] = points;
			correctName = true;
		}
	} while (!correctName);

	//report
	std::string name;
	int points = 0;
	DicPlayer tmp(players);
	while (tmp.size() > 0) {
		//busco el mas grande
		for (DicPlayer::iterator it = tmp.begin(); it != tmp.end(); it++) {
			if (it->second > points) {
				name = it->first;
				points = it->second;
			}
		}
		std::cout << name << " with " << points << std::endl;
		//elimino el encontrado
		players.erase(players.find(name));
	}
}
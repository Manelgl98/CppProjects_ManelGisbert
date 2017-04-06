// PlayerRanking.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<map>

struct player {
	std::map<std::string, int>player;
};

std::map<std::string, int>player0;
std::map<std::string, int>playerd1;
std::map<std::string, int>playerd2;
std::map<std::string, int>playerd3;
std::map<std::string, int>playerd4;

void solicitatePlayer() {
	
}
int main()
{
	player0["Pepito"];
	playerd1["Juan"] = 1200;
	playerd2["Laura"] = 2000;
	playerd3["Oscar"] = 10;
	playerd4["Javi"] = 1250;
	

	
    return 0;
}


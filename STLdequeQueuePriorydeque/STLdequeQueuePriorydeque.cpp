// STLdequeQueuePriorydeque.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<deque>
#include<queue>
#include<vector>
#include<string>
#include<iostream>
void main()
{
	//1
	
	std::deque<float>prices(10, 10.5f);//Creo una deque de 10 elementos de 10.5
	prices[9] = 32.43f;//Cambio el ultimo por 32.43
	prices.pop_front();//Borro el primer elemento
	std::deque<float>d(prices);
	
	d.insert(d.begin(),5.64f); //inserto 5.64 al principio de la segunda deque
	d.insert(d.begin(), 20.31f);//inserto 20.31 al principio de la segunda deque
	d.insert(d.begin() + 1, 10);//inserto el valor 10 en la segunda posicion
	//imprimimos primera deque

	std::cout << "Primera deque";
	for (auto it = prices.rbegin(); it != prices.rend(); ++it)
		std::cout << " " << *it;
	std::cout <<std:: endl;
	
	//imprimimos segunda deque
	
	std::cout << "Segunda deque";
	for (auto it2 = d.begin(); it2 != d.end(); ++it2)
		std::cout << " " << *it2;
	std::cout << std::endl;
	
	//2
	std::vector<float>pricesv(10, 10.5);
	pricesv[9] = 32.43;
	pricesv.erase(pricesv.begin());
	std::vector<float>dv(pricesv);
	
	dv.insert(dv.begin(), 5.64);
	dv.insert(dv.begin(), 32.45);
	dv.insert(dv.begin() + 1, 10);

	//imprimimos primer vector
	std::cout << "Primer vector";
	
	for(auto it =pricesv.rbegin();it != pricesv.rend();++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	//imprimimos segundo vector
	std::cout << "Segundo vector";
	for (auto it2 = dv.begin();it2 != dv.end(); ++it2)
		std::cout << "" << *it2;
	std::cout << std::endl;
	
	//3
	
	std::priority_queue<std::string> contactQueue(std::priority_queue<std::string> a, std::priority_queue<std::string> b) {

	}
	std::priority_queue<int> superMergeP(std::priority_queue<int> a, std::priority_queue<int> b) {

	}

	

    
}


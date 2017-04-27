// STLdequeQueuePriorydeque.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<deque>
#include<queue>
#include<vector>
#include<string>
#include<iostream>
int main()
{
	//1
	/*
	std::deque<float>prices(10, 10.5f);//Creo una deque de 10 elementos de 10.5
	prices[9] = 32.43f;//Cambio el ultimo por 32.43
	prices.pop_front();//Borro el primer elemento
	std::deque<float>d;
	d.assign(prices.begin, prices.end);//asigno la deque en una nueva deque
	d.insert(d.begin(),5.64f); //inserto 5.64 al principio de la segunda deque
	d.insert(d.begin(), 20.31f);//inserto 20.31 al principio de la segunda deque
	d.insert(d.begin() + 1, 10);//inserto el valor 10 en la segunda posicion
	//imprimimos primera deque
	std::deque<int>::iterator it;
	std::cout << "Primera deque";
	for (it = prices.begin(); it != prices.end(); ++it)
		std::cout << " " << &it;
	std::cout <<std:: endl;
	
	//imprimimos segunda deque
	std::deque<int>::iterator it2 = d.begin;
	std::cout << "Segunda deque";
	for (it2 = d.begin(); it2 != d.end(); ++it2)
		std::cout << " " << &it2;
	std::cout << std::endl;
	*/
	//2
	std::vector<float>pricesv(10, 10.5f);
	pricesv[9] = 32.43f;
	pricesv.erase(pricesv.begin());
	std::vector<float>dv;
	dv.assign(pricesv.begin, pricesv.end);
	dv.insert(pricesv.begin(), 5.64f);
	dv.insert(pricesv.begin(), 32.43f);
	dv.insert(pricesv.begin() + 1, 10);

	//imprimimos primer vector
	std::cout << "Primer vector";
	std::vector<int>::reverse_iterator rit = pricesv.rbegin();
	for(;rit!=pricesv.rend;++rit)
		std::cout << " " << *rit;
	std::cout << std::endl;
	//imprimimos segundo vector
	std::cout << "Segundo vector";
	for (auto it = dv.begin; !dv.end; ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	//3
	/*
	std::priority_queue<std::string> contactQueue(std::priority_queue<std::string> a, std::priority_queue<std::string> b) {

	}
	std::priority_queue<int> superMergeP(std::priority_queue<int> a, std::priority_queue<int> b) {

	}

	*/

    return 0;
}


// A09_stac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stack>
#include<string>
#include<iostream>

std::stack<int> superMerge(std::stack<int>a, std::stack<int>b) {
	std::stack<int>sr;
	std::stack<int>sf;
	int tamaño = a.size() + b.size();
	for (int i =tamaño ; i >1 ; i--) {
		if (!a.empty() && !b.empty()) {
			if (a.top() > b.top()) {
				sr.push(a.top());
				a.pop();
			}
			else if (a.top() == b.top()) {
				sr.push(a.top());
				a.pop();
			}
			else {
				sr.push(b.top());
				b.pop();
			}
		}
		if (b.empty()) {
			sr.push(a.top());
			a.pop();
		}
		else if (a.empty()) {
			sr.push(b.top());
			b.pop();
		}
	}
	int tamaño2 = sr.size();
	for (int i = 0; i < tamaño2; i++) {
		sf.push(sr.top());
		sr.pop();
	}
	return sf;
}

std::stack<std::string> putHat(std::stack<std::string>a, std::stack<std::string>b) {
	std::stack<std::string>srs;
	std::stack<std::string>srf;
	int tamaño1 = a.size();
	int tamaño2 = b.size();

	for (int i =tamaño1; i > 0; i--) {
		srs.push(a.top());
		a.pop();
	}
	for (int i = tamaño2; i > 0; i--) {
		srs.push(b.top());
		b.pop();
	}
	for (int i = 0; i < srs.size(); i++) {
		srf.push(srs.top());
		srs.pop();
		
	}
	return srf;
}

void main()
{
	std::stack<int>s1;
	std::stack<int>s2;
	for (int i = 0; i < 5; i++) {
		s1.push(i);
		s2.push(i + 2);
	}
	
	superMerge(s1,s2);
	std::stack<std::string>s3;
	std::stack<std::string>s4;
	
	s3.push("hola");
	s3.push("Hello");
	s3.push("Hi");
	s4.push("adew");
	s4.push("goodbye");
	s4.push("bye");

	putHad(s3,s4);
	
	
}


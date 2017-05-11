// A10STLlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<list>
#include<vector>
#include<iostream>
#include<set>
typedef std::list<int> list;
typedef std::vector<int> vector;
typedef std::set<int> set;
using std::cout;
using std::endl;
list superMerge(list l1, list l2) {
	list v1(l1);
	list v2(l2);
	list l3;
	
	for (int i = 0; i < l1.size() + l2.size(); i++) {
		if (v1.empty()) {
			l3.push_front(v2.front());
			v2.pop_front();
			
		}
		else if (v2.empty()) {
			l3.push_front(v1.front());
			v1.pop_front();
			
		}
		else if (v1.front() == v2.front()) {
			l3.push_front(v1.front());
			v1.pop_front();
		}
		
		else if (v2.front() > v1.front()) {
			l3.push_front(v2.front());
			v2.pop_front();
			
		}
		else if (v1.front() > v2.front()) {
			l3.push_front(v1.front());
			v1.pop_front();

		}
	}
	
	return list(l3.rbegin(), l3.rend());
}

list change(list l1) {
	int aux;
	int aux2;
	aux = l1.front();
	aux2 = l1.back();
	l1.pop_back();
	l1.pop_front();
	l1.push_back(aux);
	l1.push_front(aux2);
	return l1;
}

int getElementPos(list l1, int pos) {
	
	vector v1(l1.begin(), l1.end());
	
	return v1[pos - 1];
}

list removeDuplicates(list l1) {
	set s1;
	
	for (auto it = l1.begin(); it != l1.end(); it++) {
		s1.insert(*it);
	}
	
	vector v1(s1.rbegin(), s1.rend());
	return list(v1.begin(),v1.end());
}

list removeElement(list l1, int element) {
	vector v1(l1.begin(),l1.end());
	vector v2(v1);
	int cont = 0;
	for (int i = 0; i < l1.size(); i++) {
		if (v1[i] == element) {
			v2.erase(v2.begin() + (i - cont));
			cont++;
		}
	}
	return list(v2.begin(), v2.end());
}



void printList(list l1) {
	vector v1(l1.begin(),l1.end());
	for (int i = 0; i < l1.size(); i++) {
		cout << v1[i]<< endl;
	}
}

void printValue(int value) {
	cout << value;
}


void main()
{
	
	list l1({ 9,7,5,3,1 });
	list l2;
	l2.push_back(2);
	l2.push_front(4);
	l2.push_front(6);
	l2.push_front(8);
	l2.push_front(10);
	l2.push_back(0);

	list l3({ 9,8,7,6,5,7,7,3 });
	list l4({ 8,9,9,8 });

	//superMerge(l1, l2);


	//printList(superMerge(l1, l2));
	//printList(change(l2));
	//printValue(getElementPos(l2, 2));
	//printList(removeDuplicates(l3));
	printList(removeElement(l3, 7));
	
}


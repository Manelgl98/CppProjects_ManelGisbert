#pragma once
class MyList
{
	struct node
	{
		int info;
		node *next;
		node *previous;
	};

	node *first;
	node *last;

	int amount;
public:
	MyList();
	MyList(const MyList &l);
	~MyList();

	void pop();
	void pop_back();
	void push(int elem);
	void push_back(int elem);
	int size();
	int front();
	int back();
	bool isEmpty();
};


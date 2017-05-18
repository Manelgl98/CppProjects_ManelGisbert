#include "MyList.hh"


MyList::MyList()
{
	first = nullptr;
	last = nullptr;
	amount = 0;
}

MyList::MyList(const MyList &l)
{
	MyList tmp = l;
	while (!tmp.isEmpty)
	{
		push(tmp.back());
		tmp.pop_back();
	}
}


MyList::~MyList()
{
	while (!isEmpty())
	{
		pop_back();
	}
}

void MyList::pop() {
	if (!isEmpty) {
		node *tmp = first->next;

		delete first;
		first = tmp;
		amount--;
	}
}
void MyList::pop_back() {

	if (!isEmpty) {
		node *tmp = last->previous;
		delete last;
		last = tmp;

		amount--;
	}
}

void MyList::push(int elem) {
	node *n = new node({ elem,first,nullptr });

	if (this->isEmpty()) {
		last = n;
	}
	else {
		first->previous = n;
	}
	first = n;
	amount++;
}

void MyList::push_back(int elem) {
	node *n = new node({ elem,nullptr,last });
	if (this->isEmpty()) {
		first = n;
	}
	else {
		last->next = n;
	}
	last = n;

	amount++;
}

int MyList::size() {
	return amount;
}

int MyList::front() {
	return first->info;
}

int MyList::back() {
	return last->info;
}

bool MyList::isEmpty() {
	return (first == nullptr);
}

#include <iostream>​
#include <queue>​
#include <deque>​
#include <vector>​

void ex1() {
	std::deque<float> prices(10, 10.5);
	prices[prices.size() - 1] = 32.43;
	prices.pop_front();

	std::deque<float> prices2(prices);
	prices2.push_front(5.64);
	prices2.push_front(20.31);
	prices2.insert(prices2.begin() + 1, 10);

	for (std::deque<float>::reverse_iterator rit = prices2.rbegin(); rit != prices2.rend(); ++rit)
		std::cout << ' ' << *rit << std::endl;
	std::cout << std::endl << std::endl;
	for (int i = 0; i < prices.size(); i++)
		std::cout << prices[i] << std::endl;
}

void ex2() {
	std::vector<float> prices(10, 10.5);
	prices[prices.size() - 1] = 32.43;
	prices.erase(prices.begin());

	std::vector<float> prices2(prices);
	prices2.insert(prices2.begin(), 5.64);
	prices2.insert(prices2.begin(), 20.31);
	prices2.insert(prices2.begin() + 1, 10);

	for (std::vector<float>::reverse_iterator rit = prices2.rbegin(); rit != prices2.rend(); ++rit)
		std::cout << ' ' << *rit << std::endl;
	std::cout << std::endl << std::endl;
	for (int i = 0; i < prices.size(); i++)
		std::cout << prices[i] << std::endl;
}

std::priority_queue<int> superMergeP(std::priority_queue<int> pq1, std::priority_queue<int> pq2) {

	std::priority_queue<int> super(pq1);
	while (pq2.size() != 0) {
		super.push(pq2.top());
		pq2.pop();
	}

	return super;
}

std::queue<std::string> concatQueue(std::queue<std::string> sq1, std::queue<std::string> sq2) {

	while (sq2.size() != 0)
	{
		sq1.push(sq2.front());
		sq2.pop();
	}

	return sq2;
}

void shiftRight(std::queue<int> &iq) {
	std::queue<int> tmp;
	tmp.push(rand());
	while (iq.size() != 1) { //1 per eliminar ultim, 0 per deixar-lo
		tmp.push(iq.front());
		iq.pop();
	}

	iq = tmp;
}

void rotateLeft(std::queue<int> &iq) {

	int last = iq.front();
	iq.pop();
	iq.push(last);
}

void eraseElements(std::deque<int> &iq, int elim) {
	for (std::deque<int>::iterator it = iq.begin(); it != iq.end(); ++it) //not working
		if (*it == elim)
			iq.erase(it);
}

void eraseRepeated(std::deque<int> &iq) {
	for (int i = 0; i < iq.size() - 1; i++) { //-1 not to check the last one
		int actual = iq[i];
		for (int j = i + 1; j < iq.size(); ++j) //needs comprovation
			if (iq[j] == actual)
				iq.erase(iq.begin() + j);
	}

}

void main() {
	ex1();
	std::cout << std::endl << " -------------------------------------- " << std::endl;
	ex2();

	std::deque<int> myDeque{ 1, 2, 1, 3 , 4, 5 ,6 ,7 ,1 ,1 ,2 ,3 ,9 ,10 };
	eraseRepeated(myDeque);
	std::deque<int> myDequeNoRpeat(myDeque);
}
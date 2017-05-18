#include "DynArray.hh"
#include <iostream>

void main() {
	DynArray ar1;

	int arr[10]{ 1 };
	DynArray ar2(arr, 10);

	ar1 = ar2;
	std::cout << ar2[0];

	int *i = new int[5];
	int test = i - i + 3;
}
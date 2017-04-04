// Fist_Contact_Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
/*
//Constructor con una lista de inicializacion
std::vector<int>v1;
//Constructor de copia
std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,2,1 });//tamaño 10 en forma de lista
//Constructor con num elementos
std::vector<int>v4(v12);// mismo tamaño que v12 y con los mismos elementos
//Constructor con num de elementos y valor inicial para todos los elementos
std::vector <int> v9(5);// longitud 5 iniciados a 0

std::vector<int>v10(5, 10),// de longitud 5 y sus valores iniciados a 10
std::vector<int>v7(v12.begin(), v12.end());// copia v12 usando iteradores
std::vector<int>v7(v12.begin() + 1, v12.end() - 1);//copia todo v12 menos el primero y el ultimo

//Constructor con iteradores, desde arrays
int myArray[]{ 16,2,77,29 };
std::vector<int>v20(myArray, myArray + sizeof(myArray) / sizeof(int));
//Constructor con iteradores,desde arrays
int *pv;
//pv = new int[4]{ 1,2,3,4 };
std::vector<int> v21(pv, pv + 4);

*/

std::vector<int>v1(5,0);
std::vector<int>v2(10, 0);
std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });
std::vector<std::string>v4({ "Gertrudiz","Pancracia","Anacleto","Hipolito","Eustaquio","Fulgencia" });
std::vector<int>v5(v3);
//std::vector<int>v6

std::vector<int> AddVectors(std::vector<int>v1, std::vector<int>v2) {
	std::vector<int>vresult;
	if (v1.size() == 1 && v2.size() == 1) {
		for (int i = 0; i < v1.size(); ++i) {
			vresult[i] = v1[i] + v2[i];
		}
	}
	return vresult;

}

int main()
{
    return 0;
}


// DynArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ostream>
#include "DynArray.hh"

const int Isize = 0;

DynArray::DynArray() :
	m_capacity(DYN_ARRAY_DEFAULT_SIZE),//stuck
	m_size(0),//en stuck
	m_data(new int[m_capacity])//en el heap y crea el espacio apra un array del tamaño

{}

DynArray::DynArray(size_t size) :
	m_capacity(size),
	m_size(0),
	m_data()
{}

DynArray::DynArray(size_t size, const int &value) :
	m_capacity(size),
	m_size(size),
	m_data(new int[m_capacity])
	
{
	fill(begin(), end(), value());
}
	
DynArray::DynArray(int *arr, size_t size) :
	m_capacity(size),
	m_size(size), 
	m_data(arr)
{}

void DynArray:: push(const int &val) {
	if (m_capacity > m_size) {
		m_data[m_size] = val;
		m_size++;
	}
	else
	{
		m_capacity++;
		int *temp;
		temp = new int[m_capacity];
		for (int i; i < m_size; i++) {
			temp[i] = m_data[i];
		}
		temp[m_capacity] = val;
		delete[]m_data;
		m_data = temp;
		
	}
	m_size++;
	//primero deberemos verificamos capacidad
	//Segundo reservar espacio de capacidad +1
	//Tercero copiar valores 
	//asignar nuevo valor
	//delete[]m_data
	//actualizar m_data
	//actualizar capacity y size

}

DynArray& DynArray::operator= (const DynArray &x) {
	
}

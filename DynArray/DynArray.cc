// DynArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ostream>
#include "DynArray.hh"

const int Isize = 0;

DynArray::DynArray() :
	m_capacity(DYN_ARRAY_DEFAULT_SIZE),
	m_size(Isize),
	m_data()

{};

DynArray::DynArray(size_t size) :
	m_capacity(size),
	m_size(Isize),
	m_data()
{};

DynArray::DynArray(size_t size, const int &value) :
	m_capacity(size),
	m_size(size),
	m_data()
	//falta value 
{};
	
DynArray::DynArray(int *arr, size_t size) :
	m_capacity(size),
	m_size(size), 
	m_data(arr)
{};


DynArray& operator= (const DynArray &x) {
	
}

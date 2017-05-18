#include "DynArray.hh"

DynArray::DynArray(void) {
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;

	m_data = new int[m_capacity];

}

DynArray::DynArray(size_t size) {
	m_capacity = size;
	m_size = 0;
}

DynArray::DynArray(size_t size, const int &value) {
	m_capacity = size;
	m_size = size;

	m_data = new int[m_capacity];
	for (int i = 0; i < size; i++)
		m_data[i] = value;
}

DynArray::DynArray(int *arr, size_t size) {
	m_capacity = size;
	m_size = 0;

	m_data = new int[m_capacity];

	for (int i = 0; i < size; i++) {
		m_data[i] = arr[i];
	}
}

DynArray:: ~DynArray(void) {
	delete[] m_data;
	m_data = nullptr;
}

DynArray& DynArray::operator= (const DynArray &x) {

	m_capacity = x.m_capacity;
	m_size = x.m_size;

	for (int i = 0; i < m_size; i++) {
		m_data[i] = x.m_data[i];
	}

	return *this;
}

void DynArray::push(const int &val) {

	if (m_size >= m_capacity) {
		m_capacity++;
		int *new_data = new int[m_capacity];

		copy(begin(), end(), new_data);

		delete[] m_data;
		m_data = new_data;
	}
	m_data[m_size] = val;
	m_size++;
}
void DynArray::pop(void) {
	if (m_size > 0)
		m_size--;
}

bool operator== (const DynArray& lhs, const DynArray& rhs) {
	if (lhs.m_size != rhs.m_size)
		return false;

	for (int i = 0; i < lhs.m_size; i++)
		if (lhs.m_data[i] != rhs.m_data[i])
			return false;

	return true;
}
bool operator!= (const DynArray& lhs, const DynArray& rhs) {
	return !(lhs == rhs);
}

int* DynArray::begin(void) const {
	return m_data;
}
int* DynArray::end(void) const {
	return m_data + m_size - 1;
}

void DynArray::fill(int *first, int *last, int value) {
	int *i = first;
	while (i != last) {
		*i = value;
		i++;
	}
}
void DynArray::copy(int *first, int *last, int *dest) {

	for (int i = 0; i < (last - first); i++)
		dest[i] = first[i];
}

int& DynArray::operator[]	(size_t n) const {
	return m_data[n];
}
#pragma once
#include <iostream>
#include <assert.h>
#define NULL 0
using namespace std;
template<class T>

class ArrayList
{
	T* Array;
	int capacity;
	int size;
	

public:
	ArrayList();
	ArrayList(int n);
	int Capacity();
	void clear();
	T& Edit(const int index);
	//T& operator[](const int index); // Operator overloading
	void expand();
	void append(T val);
	T pop_back();
	void insertAt(const int index, T val);
	T deleteAt(const int index);
	void Display();
	
};

template<class T>
inline ArrayList<T>::ArrayList()
{
	capacity = 10;
	size = 0;
	Array = new T[capacity];
}

template<class T>
inline ArrayList<T>::ArrayList(int Size)
{
	capacity = Size;
	size = 0;
	Array = new T[capacity];
}

template<class T>
inline int ArrayList<T>::Capacity()
{
	return size;
}

template<class T>
inline void ArrayList<T>::clear()
{
	size = 0;
}

template<class T>
inline T& ArrayList<T>::Edit(const int index)
{
	// TODO: insert return statement here
	return Array[index-1];
}

/*
template<class T>
inline T& ArrayList<T>::operator[](const int index)
{
	// TODO: insert return statement here
	return Array[index];
}
*/

template<class T>
inline void ArrayList<T>::expand()
{
	T* new_array = new T[2 * capacity];

	for (int i = 0; i < capacity; i++)
		new_array[i] = Array[i];

	delete[] Array;
	capacity *= 2;
	Array = new_array;
}

template<class T>
inline void ArrayList<T>::append(T val)
{
	if (capacity == size) {
		expand();
	}
	Array[size++] = val;
}

template<class T>
inline T ArrayList<T>::pop_back()
{
	if (size > 0) {
		return T(Array[--size]);
	}
	else {
		cout << "Array List is empty..." << endl;
	}
}

template<class T>
inline void ArrayList<T>::insertAt(const int index, T val)
{
	assert(index >= 1 && index <= size); //assert(index == 0 || (index > 0 && index <= elemsCnt));

	if (size == capacity)
		expand();

	for (int i = size - 1; i >= index - 1; i--)
		Array[i + 1] = Array[i];

	Array[index-1] = val;
	++size;
}

template<class T>
inline T ArrayList<T>::deleteAt(const int index)
{
	assert(index >= 1 && index <= size);
	T del = Array[index];
	for (int i = index - 1; i < size - 1; i++) {
		Array[i] = Array[i + 1];
	}
	--size;
	return T(del);
}

template<class T>
inline void ArrayList<T>::Display()
{
	if (size > 0) {
		for (int i = 0; i < size; i++) {
			cout << "(" << i + 1 << ")- " << Array[i] << endl;
		}
	}
}

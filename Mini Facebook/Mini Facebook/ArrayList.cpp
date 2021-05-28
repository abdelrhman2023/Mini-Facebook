#include "ArrayList.h"
#include<assert.h>
template<class T>
ArrayList<T>::ArrayList()
{
	elementcount = 0;
	capacity = 5;
	arr = new T[capacity];
}

template<class T>
void ArrayList<T>::append(T val)
{
	if (elementcount == capacity)
	{
		expand();
	}
	arr[elementcount] = val;
	elementcount++;
}

template<class T>
int ArrayList<T>::lenght()
{
	assert(!empty());
	return elementcount;
}

template<class T>
void ArrayList<T>::insertAt(int ind, T val)
{
	assert(ind >= 0 && ind < capacity);
	if (elementcount == capacity)
	{
		expand();
	}
	for (int i = elementcount; i > ind; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[ind] = val;
	elementcount++;
}

template<class T>
void ArrayList<T>::deleteAt(int ind)
{
	assert(ind >= 0 && ind < capacity && !empty());
	for (int i = ind; i < elementcount - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	elementcount--;
}

template<class T>
void ArrayList<T>::pop_back()
{
	assert(!empty());
	elementcount--;
}

template<class T>
T& ArrayList<T>::At(int ind)
{
	return arr[ind];
}

template<class T>
T& ArrayList<T>::operator[](const int ind)
{
	return At(ind);
}

template<class T>
void ArrayList<T>::expand()
{
	T* arr2 = new T[capacity + 1];
	for (int i = 0; i < capacity; i++)
	{
		arr2[i] = arr[i];
	}
	capacity += 1;
	delete[] arr;
	arr = arr2;

}

template<class T>
bool ArrayList<T>::empty()
{
	return elementcount == 0;
}

template<class T>
void ArrayList<T>::clear()
{
	while (!empty())
	{
		pop_back();
	}
}

template<class T>
ArrayList<T>::~ArrayList()
{
	clear();
}

template<class T>
void ArrayList<T>::movePost(int ind, T val)
{
	append(arr.at(ind));
	deleteAt(ind);
}

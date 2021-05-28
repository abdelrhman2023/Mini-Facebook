#include "LinkedList.h"
#include<iostream>
using namespace std;
#include<assert.h>
template<class T>
Node<T>::Node()
{
	this->next = NULL;
}

template<class T>
Node<T>::Node(T _data)
{
	this->data = _data;
	this->next = NULL;
}

template<class T>
LinkedList<T>::LinkedList()
{
	head = tail = NULL;
	elmentocunt = 0;
}

template<class T>
int LinkedList<T>::count()
{
	return elmentocunt;
}

template<class T>
bool LinkedList<T>::empty()
{
	return (elmentocunt == 0);
}

template<class T>
T& LinkedList<T>::at(int ind)
{
	Node<T>* temp = head;
	for (int i = 0; i < ind; i++)
	{
		temp = temp->next;
	}
	return temp->data;
}

template<class T>
void LinkedList<T>::appned(T val)
{
	Node<T>* inserted = new Node<T>(val);
	if (empty())
	{
		head = tail = inserted;
	}
	else
	{
		tail->next = inserted;
		tail = inserted;
	}
	elmentocunt++;
}

template<class T>
void LinkedList<T>::insertAt(int ind, T val)
{
	assert((ind >= 0) && (ind < elmentocunt));
	Node<T>* inserted = new Node<T>(val);
	if (ind == 0)
	{
		if (empty())
		{
			head = tail = inserted;
		}
		else
		{
			inserted->next = head;
			head = inserted;
		}
	}
	else
	{

		Node<T>* temp = head;
		for (int i = 0; i < ind - 1; i++)
		{
			temp = temp->next;
		}
		inserted->next = temp->next;
		temp->next = inserted;
	}
	elmentocunt++;

}

template<class T>
void LinkedList<T>::print()
{
	Node<T>* temp = head;
	for (int i = 0; i < elmentocunt; i++)
	{
		cout << temp->data << "\n";
		temp = temp->next;
	}
}

template<class T>
void LinkedList<T>::deleteAt(int ind)
{
	assert(ind >= 0 && ind < elmentocunt);
	Node <T>* deleted = new Node<T>;
	if (ind == 0)
	{
		deleted = head;
		head = head->next;
	}
	else
	{
		Node <T>* temp = head;
		for (int i = 0; i < ind - 1; i++)
		{
			temp = temp->next;
		}
		deleted = temp->next;
		if (ind == elmentocunt - 1)
			tail = temp;
	}

	delete deleted;
	elmentocunt--;
}

template<class T>
void LinkedList<T>::clear()
{
	while (!empty())
	{
		deleteAt(0);
	}
}

template<class T>
LinkedList<T>::~LinkedList()
{
	clear();
}






#pragma once
#include <iostream>
#include "Node.h"
#define NULL 0
using namespace std;
template <class T>

class Queue
{
private:
	Node<T>* Head;
	Node<T>* Tail;
	int Size;
public:
	Queue();
	void Enqueue(T val);
	T Dequeue();
	bool is_empty();
	void Capacity();
	void Display();
};

template<class T>
inline Queue<T>::Queue()
{
	Head = NULL;
	Tail = NULL;
	Size = 0;
}

template<class T>
inline void Queue<T>::Enqueue(T val)
{
	Node<T>* new_node = new Node<T>(val);
	if (Head == NULL) {
		Head = new_node;
	}
	else {
		Tail->next = new_node;
	}
	Tail = new_node;
	Size++;
}

template<class T>
inline T Queue<T>::Dequeue()
{
	T temp;
	if (!is_empty()) {
		Node<T>* del = Head;
		Head = Head->next;
		temp = del->data;
		delete del;
		Size--;
		return T(temp);
	}
	cout << "the queue is empty..." << endl;
}

template<class T>
inline bool Queue<T>::is_empty()
{
	if (Head == NULL && Tail == NULL) {
		return true;
	}
	return false;
}

template<class T>
inline void Queue<T>::Capacity()
{
	cout << "the size of queue: " << this->Size << endl;
}

template<class T>
inline void Queue<T>::Display()
{
	Node<T>* temp = Head;
	for (int i = 0; i < Size; i++) {
		cout << temp->data << endl;
		temp = temp->next;
	}
}

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

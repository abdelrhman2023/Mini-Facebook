#pragma once
#define NULL 0
template<class T>

class Node
{
public:
	T data;
	Node* next;
	Node();
	Node(T value);
};

template<class T>
inline Node<T>::Node()
{
	data = 0;
	next = NULL;
}

template<class T>
inline Node<T>::Node(T value)
{
	data = value;
	next = NULL;
}


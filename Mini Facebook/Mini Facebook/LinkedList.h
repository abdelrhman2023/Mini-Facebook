#pragma once
template<class T>
class Node
{
public:
	T data;
	Node<T>* next;

	Node();
	Node(T _data);


};

template<class T>
class LinkedList
{
public:
	Node<T>* head, * tail;
	int elmentocunt;
	LinkedList();
	int count();
	bool empty();
	T& at(int ind);
	void appned(T val);
	void insertAt(int ind, T val);
	void deleteAt(int ind);
	void clear();
	~LinkedList();


};



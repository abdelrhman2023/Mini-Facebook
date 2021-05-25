#pragma once
#include <iostream>
#include <assert.h>
#include "Node.h"
#define NULL 0
using namespace std;
template<class T>

class LinkedList
{
	Node<T>* Head;
	Node<T>* Tail;
	int size;
public:
	LinkedList();
	void Append(T val);
	void Insert(T val, int pos);
	void Delete(int pos);
	void MoveNode(T val, int pos);
	void print(int pos);
	T& EditAt(int pos);
	void Display();
	void clear();
};

template<class T>
inline LinkedList<T>::LinkedList()
{
	Head = Tail = NULL;
	size = 0;
}

template<class T>
inline void LinkedList<T>::Append(T val)
{
	Node<T>* new_node = new Node<T>(val);
	if (Head == NULL) {
		Head = new_node;
		Tail = new_node;
	}
	else {
		Tail->next = new_node;
		Tail = Tail->next;
	}
	size++;
}

template<class T>
inline void LinkedList<T>::Insert(T val, int pos)
{
	Node<T>* new_node = new Node<T>(val);
	Node<T>* temp = Head;
	assert(pos >= 1 && pos <= size);
	if (pos == 1) {
		new_node->next = Head;
		Head = new_node;
	}
	else {
		for (int i = 1; i < pos - 1; i++) {
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	size++;
}

template<class T>
inline void LinkedList<T>::Delete(int pos)
{
	Node<T>* temp = Head;
	assert(pos >= 1 && pos <= size);
	if (pos == 1) {
		Head = Head->next;
		delete temp;
	}
	else {
		for (int i = 1; i < pos - 1; i++) {
			temp = temp->next;
		}
		Node<T>* del = temp->next;
		if (pos == size) {
			temp->next = NULL;
			delete del;
			Tail = temp;
		}
		else {
			temp->next = del->next;
			delete del;
		}
	}
	size--;
}

template<class T>
inline void LinkedList<T>::MoveNode(T val, int pos)
{
	Node<T>* temp = Head;
	int counter = 1;
	while (temp != NULL && temp->data != val) {
		temp = temp->next;
		counter++;
	}
	this->Delete(counter);
	if (pos == size + 1) {
		this->Append(val);
	}
	else {
		this->Insert(val, pos);
	}
}

template<class T>
inline void LinkedList<T>::print(int pos)
{
	Node<T>* temp = Head;
	assert(pos >= 1 && pos <= size);
	for (int i = 1; i < pos ; i++) {
		temp = temp->next;
	}
	cout << temp->data << endl;
}

template<class T>
inline T& LinkedList<T>::EditAt(int pos)
{
	// TODO: insert return statement here
	Node<T>* temp = Head;
	assert(pos >= 1 && pos <= size);
	for (int i = 1; i < pos; i++) {
		temp = temp->next;
	}
	return temp->data;
}

template<class T>
inline void LinkedList<T>::Display()
{
	int i = 0;
	Node<T>* temp = Head;
	while (temp != NULL) {
		cout << ++i << " --> " << temp->data << endl;
		temp = temp->next;
	}
}

template<class T>
inline void LinkedList<T>::clear()
{
	while (!Head==NULL&&!Tail==NULL) {
		Delete(1);
	}
}


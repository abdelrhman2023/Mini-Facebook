#pragma once
#include <iostream>
#include "Node.h"
#define NULL 0
using namespace std;
template<class T>

class Stack
{
private:
	Node<T>* top;
	int size;
public:
	Stack();
	void push(int val);
	T pop();
	bool is_empty();
	void Capacity();
	T Front();
	void Display();
};

template<class T>
inline Stack<T>::Stack()
{
	top = NULL;
	size = 0;
}

template<class T>
inline void Stack<T>::push(int val)
{
	Node<T>* new_node = new Node<T>(val);
	if (top==NULL) {
		new_node->next = NULL;
	}
	else {
		new_node->next = top;
	}
	top = new_node;
	size++;
}

template<class T>
inline T Stack<T>::pop()
{
	T temp;
	if (is_empty()) {
		cout << "the stack is empty..." << endl;
	}
	else {
		Node<T>* del = top;
		top = top->next;
		temp = del->data;
		delete del;
		size--;
		return temp;
	}
}

template<class T>
inline bool Stack<T>::is_empty()
{
	if (top == NULL) {
		return true;
	}
	return false;
}

template<class T>
inline void Stack<T>::Capacity()
{
	cout << "the size of stack: " << size << endl;
}

template<class T>
inline T Stack<T>::Front()
{
	return T(top->data);
}

template<class T>
inline void Stack<T>::Display()
{
	if (!is_empty()) {
		Node<T>* temp = top;
		cout << "Display from Newer to Older: " << endl;
		for (int i = 0; i < size; i++) {
			cout << "(" << i + 1 << ")- " << temp->data << endl;
			temp = temp->next;
		}
	}
	else {
		cout << "no data to display it" << endl;
	}
}

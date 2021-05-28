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
